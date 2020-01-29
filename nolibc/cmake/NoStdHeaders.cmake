add_library(no_std_headers INTERFACE)

target_compile_options(
    no_std_headers INTERFACE
    $<$<COMPILE_LANGUAGE:C>:-nostdinc>
    $<$<COMPILE_LANGUAGE:CXX>:-nostdinc++>
)
