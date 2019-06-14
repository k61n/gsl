/* linalg/test_qr.c
 *
 * Copyright (C) 2019 Patrick Alken
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <config.h>
#include <stdlib.h>
#include <gsl/gsl_test.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_ieee_utils.h>
#include <gsl/gsl_permute_vector.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_permutation.h>

static int
test_QR_decomp_dim(const gsl_matrix * m, double eps)
{
  int s = 0;
  unsigned long i,j, M = m->size1, N = m->size2;

  gsl_matrix * qr = gsl_matrix_alloc(M,N);
  gsl_matrix * a  = gsl_matrix_alloc(M,N);
  gsl_matrix * q  = gsl_matrix_alloc(M,M);
  gsl_matrix * r  = gsl_matrix_alloc(M,N);
  gsl_vector * d = gsl_vector_alloc(GSL_MIN(M,N));

  gsl_matrix_memcpy(qr,m);

  s += gsl_linalg_QR_decomp(qr, d);
  s += gsl_linalg_QR_unpack(qr, d, q, r);
  
  /* compute a = q r */
  gsl_blas_dgemm (CblasNoTrans, CblasNoTrans, 1.0, q, r, 0.0, a);

  for(i=0; i<M; i++) {
    for(j=0; j<N; j++) {
      double aij = gsl_matrix_get(a, i, j);
      double mij = gsl_matrix_get(m, i, j);
      int foo = check(aij, mij, eps);
      if(foo) {
        printf("(%3lu,%3lu)[%lu,%lu]: %22.18g   %22.18g\n", M, N, i,j, aij, mij);
      }
      s += foo;
    }
  }

  gsl_vector_free(d);
  gsl_matrix_free(qr);
  gsl_matrix_free(a);
  gsl_matrix_free(q);
  gsl_matrix_free(r);

  return s;
}

static int
test_QR_decomp(void)
{
  int f;
  int s = 0;

  f = test_QR_decomp_dim(m35, 2 * 8.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp m(3,5)");
  s += f;

  f = test_QR_decomp_dim(m53, 2 * 64.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp m(5,3)");
  s += f;

  f = test_QR_decomp_dim(hilb2, 2 * 8.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp hilbert(2)");
  s += f;

  f = test_QR_decomp_dim(hilb3, 2 * 64.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp hilbert(3)");
  s += f;

  f = test_QR_decomp_dim(hilb4, 2 * 1024.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp hilbert(4)");
  s += f;

  f = test_QR_decomp_dim(hilb12, 2 * 1024.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp hilbert(12)");
  s += f;

  f = test_QR_decomp_dim(vander2, 8.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp vander(2)");
  s += f;

  f = test_QR_decomp_dim(vander3, 64.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp vander(3)");
  s += f;

  f = test_QR_decomp_dim(vander4, 1024.0 * GSL_DBL_EPSILON);
  gsl_test(f, "  QR_decomp vander(4)");
  s += f;

  f = test_QR_decomp_dim(vander12, 0.0005); /* FIXME: bad accuracy */
  gsl_test(f, "  QR_decomp vander(12)");
  s += f;

  return s;
}

static int
test_QR_decomp_L3_eps(const gsl_matrix * m, const double eps, const char * desc)
{
  int s = 0;
  const size_t M = m->size1;
  const size_t N = m->size2;
  size_t i, j;

  gsl_matrix * QR = gsl_matrix_alloc(M, N);
  gsl_matrix * T = gsl_matrix_alloc(N, N);
  gsl_matrix * A  = gsl_matrix_alloc(M, N);
  gsl_matrix * Q  = gsl_matrix_alloc(M, M);
  gsl_matrix * R  = gsl_matrix_alloc(M, N);
  gsl_vector_view tau = gsl_matrix_diagonal(T);

  gsl_matrix_memcpy(QR, m);

  s += gsl_linalg_QR_decomp_r(QR, T);
  s += gsl_linalg_QR_unpack(QR, &tau.vector, Q, R);
  
  /* compute A = Q R */
  gsl_blas_dgemm (CblasNoTrans, CblasNoTrans, 1.0, Q, R, 0.0, A);

  for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
        {
          double aij = gsl_matrix_get(A, i, j);
          double mij = gsl_matrix_get(m, i, j);

          gsl_test_rel(aij, mij, eps, "%s (%3lu,%3lu)[%lu,%lu]: %22.18g   %22.18g\n",
                       desc, M, N, i,j, aij, mij);
        }
    }

  gsl_matrix_free(QR);
  gsl_matrix_free(T);
  gsl_matrix_free(A);
  gsl_matrix_free(Q);
  gsl_matrix_free(R);

  return s;
}

static int
test_QR_decomp_L3(gsl_rng * r)
{
  int s = 0;
  size_t M, N;

  for (M = 1; M <= 50; ++M)
    {
      for (N = 1; N <= M; ++N)
        {
          gsl_matrix * A = gsl_matrix_alloc(M, N);

          create_random_matrix(A, r);
          s += test_QR_decomp_L3_eps(A, 1.0e5 * M * GSL_DBL_EPSILON, "QR_decomp_L3 random");

          gsl_matrix_free(A);
        }
    }

  s += test_QR_decomp_L3_eps(m53,   1.0e2 * GSL_DBL_EPSILON, "QR_decomp_L3 m(5,3)");
  s += test_QR_decomp_L3_eps(hilb2, 1.0e2 * GSL_DBL_EPSILON, "QR_decomp_L3 hilbert(2)");
  s += test_QR_decomp_L3_eps(hilb3, 1.0e2 * GSL_DBL_EPSILON, "QR_decomp_L3 hilbert(3)");
  s += test_QR_decomp_L3_eps(hilb4, 1.0e2 * GSL_DBL_EPSILON, "QR_decomp_L3 hilbert(4)");
  s += test_QR_decomp_L3_eps(hilb12, 1.0e2 * GSL_DBL_EPSILON, "QR_decomp_L3 hilbert(12)");
  s += test_QR_decomp_L3_eps(vander2, 1.0e1 * GSL_DBL_EPSILON, "QR_decomp_L3 vander(2)");
  s += test_QR_decomp_L3_eps(vander3, 1.0e1 * GSL_DBL_EPSILON, "QR_decomp_L3 vander(3)");
  s += test_QR_decomp_L3_eps(vander4, 1.0e1 * GSL_DBL_EPSILON, "QR_decomp_L3 vander(4)");

  return s;
}