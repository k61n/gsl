
set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const_cgs.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const_mks.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const_cgsm.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const_mksa.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_const_num.h
)

set(const_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
