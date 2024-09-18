
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/compress.c
    ${CMAKE_CURRENT_SOURCE_DIR}/copy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/getset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/minmax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/oper.c
    ${CMAKE_CURRENT_SOURCE_DIR}/prop.c
    ${CMAKE_CURRENT_SOURCE_DIR}/util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/swap.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_ushort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_spmatrix_complex_long_double.h
)

set(spmatrix_SOURCES ${SOURCES} PARENT_SCOPE)

set(spmatrix_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
