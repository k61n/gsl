
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/deriv.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_deriv.h
)

set(deriv_SOURCES ${SOURCES} PARENT_SCOPE)

set(deriv_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
