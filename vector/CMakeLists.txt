
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vector.c
    ${CMAKE_CURRENT_SOURCE_DIR}/copy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/swap.c
    ${CMAKE_CURRENT_SOURCE_DIR}/prop.c
    ${CMAKE_CURRENT_SOURCE_DIR}/minmax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/oper.c
    ${CMAKE_CURRENT_SOURCE_DIR}/reim.c
    ${CMAKE_CURRENT_SOURCE_DIR}/subvector.c
    ${CMAKE_CURRENT_SOURCE_DIR}/view.c
    ${CMAKE_CURRENT_SOURCE_DIR}/view.h
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_complex.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_vector_ushort.h
)

set(vector_SOURCES ${SOURCES} PARENT_SCOPE)

set(vector_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
