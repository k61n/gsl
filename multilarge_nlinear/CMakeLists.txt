
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/cgst.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cholesky.c
    ${CMAKE_CURRENT_SOURCE_DIR}/convergence.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dogleg.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dummy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lm.c
    ${CMAKE_CURRENT_SOURCE_DIR}/mcholesky.c
    ${CMAKE_CURRENT_SOURCE_DIR}/scaling.c
    ${CMAKE_CURRENT_SOURCE_DIR}/subspace2D.c
    ${CMAKE_CURRENT_SOURCE_DIR}/trust.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_multilarge_nlinear.h
)

set(multilarge_nlinear_SOURCES ${SOURCES} PARENT_SCOPE)

set(multilarge_nlinear_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
