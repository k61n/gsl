
cmake_minimum_required(VERSION 3.10)

project(gsl VERSION 2.8)

set(V "${PROJECT_VERSION_MAJOR}${PROJECT_VERSION_MINOR}")

set(SUBDIRS
    "blas"
    "block"
    "bspline"
    "bst"
    "cdf"
    "cheb"
    "combination"
    "complex"
    "deriv"
    "dht"
    "diff"
    "eigen"
    "err"
    "fft"
    "filter"
    "fit"
    "histogram"
    "ieee-utils"
    "integration"
    "interpolation"
    "linalg"
    "matrix"
    "min"
    "monte"
    "movstat"
    "multifit"
    "multifit_nlinear"
    "multilarge"
    "multilarge_nlinear"
    "multimin"
    "multiroots"
    "multiset"
    "ntuple"
    "ode-initval"
    "ode-initval2"
    "permutation"
    "poly"
    "qrng"
    "randist"
    "rng"
    "roots"
    "rstat"
    "siman"
    "sort"
    "spblas"
    "specfunc"
    "splinalg"
    "spmatrix"
    "statistics"
    "sum"
    "sys"
    "test"
    "utils"
    "vector"
    "wavelet"
)

set(SUBDIR_PATHS)
set(SOURCES)
set(INSTALL_HEADERS)
foreach(subdir ${SUBDIRS})
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/${subdir})
    set(SOURCES ${SOURCES} ${${subdir}_SOURCES})
    set(INSTALL_HEADERS ${INSTALL_HEADERS} ${${subdir}_INSTALL_HEADERS})
endforeach()

set(SOURCES ${SOURCES}
    ${CMAKE_CURRENT_SOURCE_DIR}/version.c
)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/cblas)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/const)
set(INSTALL_HEADERS ${INSTALL_HEADERS} ${cblas_INSTALL_HEADERS} ${const_INSTALL_HEADERS})

set(INSTALL_HEADERS ${INSTALL_HEADERS}
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_inline.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_machine.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_math.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_minmax.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_mode.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_nan.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_pow_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_precision.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_types.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_version.h
)

foreach(hdr ${INSTALL_HEADERS})
    file(COPY ${hdr} DESTINATION ${CMAKE_BINARY_DIR}/gsl)
endforeach()

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

add_library(gslcblas_static STATIC ${cblas_SOURCES})
set_target_properties(gslcblas_static PROPERTIES
    OUTPUT_NAME "gslcblas")

add_library(gsl_static STATIC ${SOURCES})
set_target_properties(gsl_static PROPERTIES
    OUTPUT_NAME "gsl")
target_link_libraries(gsl_static PRIVATE gslcblas_static)

add_library(gslcblas SHARED $<TARGET_OBJECTS:gslcblas_static>)
set_target_properties(gslcblas PROPERTIES
    VERSION 0
    SOVERSION 0
    OUTPUT_NAME "gslcblas")

add_library(gsl SHARED $<TARGET_OBJECTS:gsl_static>)
set_target_properties(gsl PROPERTIES
    VERSION ${gsl_VERSION}
    SOVERSION ${gsl_VERSION_MAJOR}
    OUTPUT_NAME "gsl")
target_link_libraries(gsl PRIVATE gslcblas)

add_executable(gsl-randist gsl-randist.c)
target_link_libraries(gsl-randist PRIVATE gsl gslcblas)

add_executable(gsl-histogram gsl-histogram.c)
target_link_libraries(gsl-histogram PRIVATE gsl gslcblas)

include(GNUInstallDirs)
install(TARGETS gsl_static gslcblas_static gsl gslcblas gsl-randist gsl-histogram
    EXPORT gslTargets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${INSTALL_HEADERS}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/gsl)
