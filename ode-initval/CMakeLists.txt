
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/control.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cstd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cscal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/evolve.c
    ${CMAKE_CURRENT_SOURCE_DIR}/step.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk2imp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk2simp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk4.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk4imp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rkf45.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rk8pd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rkck.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsimp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gear1.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gear2.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_odeiv.h
)

set(ode-initval_SOURCES ${SOURCES} PARENT_SCOPE)

set(ode-initval_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
