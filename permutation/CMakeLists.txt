
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/permutation.c
    ${CMAKE_CURRENT_SOURCE_DIR}/permute.c
    ${CMAKE_CURRENT_SOURCE_DIR}/canonical.c
    ${CMAKE_CURRENT_SOURCE_DIR}/inline.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permutation.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_ushort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_vector_ushort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_permute_matrix_ushort.h
)

set(permutation_SOURCES ${SOURCES} PARENT_SCOPE)

set(permutation_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
