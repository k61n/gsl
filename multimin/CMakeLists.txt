
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/fdfminimizer.c
    ${CMAKE_CURRENT_SOURCE_DIR}/steepest_descent.c
    ${CMAKE_CURRENT_SOURCE_DIR}/conjugate_fr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/conjugate_pr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/convergence.c
    ${CMAKE_CURRENT_SOURCE_DIR}/diff.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vector_bfgs.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vector_bfgs2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fminimizer.c
    ${CMAKE_CURRENT_SOURCE_DIR}/simplex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/simplex2.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_multimin.h
)

set(multimin_SOURCES ${SOURCES} PARENT_SCOPE)

set(multimin_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
