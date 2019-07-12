file(GLOB_RECURSE libCyber_source_files src/*)
add_library(libCyber ${libCyber_source_files})

target_include_directories(libCyber PUBLIC include)

