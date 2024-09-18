
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/dft.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fft.c
)

set(INSTALL_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_complex.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_halfcomplex.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_real.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_dft_complex.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_dft_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_complex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_halfcomplex_float.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gsl_fft_real_float.h
)

set(fft_SOURCES ${SOURCES} PARENT_SCOPE)

set(fft_INSTALL_HEADERS ${INSTALL_HEADERS} PARENT_SCOPE)
