
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/block.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_complex_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_complex_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_block_ushort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_check_range.h
)

set(block_SOURCES ${SOURCES} PARENT_SCOPE)

set(block_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
