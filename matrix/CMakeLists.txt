
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/matrix.c
    ${CMAKE_CURRENT_SOURCE_DIR}/file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rowcol.c
    ${CMAKE_CURRENT_SOURCE_DIR}/swap.c
    ${CMAKE_CURRENT_SOURCE_DIR}/copy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/minmax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/prop.c
    ${CMAKE_CURRENT_SOURCE_DIR}/oper.c
    ${CMAKE_CURRENT_SOURCE_DIR}/getset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/view.c
    ${CMAKE_CURRENT_SOURCE_DIR}/submatrix.c
    ${CMAKE_CURRENT_SOURCE_DIR}/view.h
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_matrix_ushort.h
)

set(matrix_SOURCES ${SOURCES} PARENT_SCOPE)

set(matrix_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
