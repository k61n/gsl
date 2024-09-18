
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/gcv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/multilinear.c
    ${CMAKE_CURRENT_SOURCE_DIR}/multiwlinear.c
    ${CMAKE_CURRENT_SOURCE_DIR}/work.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lmniel.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lmder.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fsolver.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdfsolver.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdfridge.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdjac.c
    ${CMAKE_CURRENT_SOURCE_DIR}/convergence.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gradient.c
    ${CMAKE_CURRENT_SOURCE_DIR}/covar.c
    ${CMAKE_CURRENT_SOURCE_DIR}/multirobust.c
    ${CMAKE_CURRENT_SOURCE_DIR}/robust_wfun.c
    ${CMAKE_CURRENT_SOURCE_DIR}/multireg.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_multifit.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_multifit_nlin.h
)

set(multifit_SOURCES ${SOURCES} PARENT_SCOPE)

set(multifit_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
