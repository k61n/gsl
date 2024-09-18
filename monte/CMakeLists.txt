
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/miser.c
    ${CMAKE_CURRENT_SOURCE_DIR}/plain.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_vegas.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_miser.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_plain.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vegas.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_vegas.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_miser.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_monte_plain.h
)

set(monte_SOURCES ${SOURCES} PARENT_SCOPE)

set(monte_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
