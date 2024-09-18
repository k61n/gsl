
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/mean.c
    ${CMAKE_CURRENT_SOURCE_DIR}/variance.c
    ${CMAKE_CURRENT_SOURCE_DIR}/absdev.c
    ${CMAKE_CURRENT_SOURCE_DIR}/skew.c
    ${CMAKE_CURRENT_SOURCE_DIR}/kurtosis.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lag1.c
    ${CMAKE_CURRENT_SOURCE_DIR}/p_variance.c
    ${CMAKE_CURRENT_SOURCE_DIR}/minmax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/ttest.c
    ${CMAKE_CURRENT_SOURCE_DIR}/mad.c
    ${CMAKE_CURRENT_SOURCE_DIR}/median.c
    ${CMAKE_CURRENT_SOURCE_DIR}/covariance.c
    ${CMAKE_CURRENT_SOURCE_DIR}/quantiles.c
    ${CMAKE_CURRENT_SOURCE_DIR}/select.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Sn.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Qn.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gastwirth.c
    ${CMAKE_CURRENT_SOURCE_DIR}/trmean.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wmean.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wvariance.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wabsdev.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wskew.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wkurtosis.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_char.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_int.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_long.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_long_double.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_short.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_uchar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_uint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_ulong.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_statistics_ushort.h
)

set(statistics_SOURCES ${SOURCES} PARENT_SCOPE)

set(statistics_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
