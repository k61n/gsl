
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/beta.c
    ${CMAKE_CURRENT_SOURCE_DIR}/betainv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cauchy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cauchyinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/chisq.c
    ${CMAKE_CURRENT_SOURCE_DIR}/chisqinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/exponential.c
    ${CMAKE_CURRENT_SOURCE_DIR}/exponentialinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/exppow.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdist.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdistinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/flat.c
    ${CMAKE_CURRENT_SOURCE_DIR}/flatinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gamma.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gammainv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gauss.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gaussinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gumbel1.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gumbel1inv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gumbel2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gumbel2inv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/laplace.c
    ${CMAKE_CURRENT_SOURCE_DIR}/laplaceinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/logistic.c
    ${CMAKE_CURRENT_SOURCE_DIR}/logisticinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lognormal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lognormalinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/pareto.c
    ${CMAKE_CURRENT_SOURCE_DIR}/paretoinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rayleigh.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rayleighinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tdist.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tdistinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/weibull.c
    ${CMAKE_CURRENT_SOURCE_DIR}/weibullinv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/binomial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/poisson.c
    ${CMAKE_CURRENT_SOURCE_DIR}/geometric.c
    ${CMAKE_CURRENT_SOURCE_DIR}/nbinomial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/pascal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/hypergeometric.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_cdf.h
)

set(cdf_SOURCES ${SOURCES} PARENT_SCOPE)

set(cdf_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
