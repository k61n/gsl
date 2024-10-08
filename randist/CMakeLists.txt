
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/bernoulli.c
    ${CMAKE_CURRENT_SOURCE_DIR}/beta.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bigauss.c
    ${CMAKE_CURRENT_SOURCE_DIR}/binomial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/cauchy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/chisq.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dirichlet.c
    ${CMAKE_CURRENT_SOURCE_DIR}/discrete.c
    ${CMAKE_CURRENT_SOURCE_DIR}/erlang.c
    ${CMAKE_CURRENT_SOURCE_DIR}/exponential.c
    ${CMAKE_CURRENT_SOURCE_DIR}/exppow.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fdist.c
    ${CMAKE_CURRENT_SOURCE_DIR}/flat.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gamma.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gauss.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gausszig.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gausstail.c
    ${CMAKE_CURRENT_SOURCE_DIR}/geometric.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gumbel.c
    ${CMAKE_CURRENT_SOURCE_DIR}/hyperg.c
    ${CMAKE_CURRENT_SOURCE_DIR}/laplace.c
    ${CMAKE_CURRENT_SOURCE_DIR}/levy.c
    ${CMAKE_CURRENT_SOURCE_DIR}/logarithmic.c
    ${CMAKE_CURRENT_SOURCE_DIR}/logistic.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lognormal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/multinomial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/mvgauss.c
    ${CMAKE_CURRENT_SOURCE_DIR}/nbinomial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/pareto.c
    ${CMAKE_CURRENT_SOURCE_DIR}/pascal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/poisson.c
    ${CMAKE_CURRENT_SOURCE_DIR}/rayleigh.c
    ${CMAKE_CURRENT_SOURCE_DIR}/shuffle.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sphere.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tdist.c
    ${CMAKE_CURRENT_SOURCE_DIR}/weibull.c
    ${CMAKE_CURRENT_SOURCE_DIR}/landau.c
    ${CMAKE_CURRENT_SOURCE_DIR}/binomial_tpe.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wishart.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_randist.h
)

set(randist_SOURCES ${SOURCES} PARENT_SCOPE)

set(randist_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
