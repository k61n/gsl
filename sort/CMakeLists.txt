
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/sort.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sortind.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sortvec.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sortvecind.c
    ${CMAKE_CURRENT_SOURCE_DIR}/subset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/subsetind.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_heapsort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_ushort.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_sort_vector_ushort.h
)

set(sort_SOURCES ${SOURCES} PARENT_SCOPE)

set(sort_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
