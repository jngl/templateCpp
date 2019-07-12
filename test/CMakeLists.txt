enable_testing()

file(GLOB_RECURSE testLibCyber_source_files src/*)
add_executable(testLibCyber ${testLibCyber_source_files})

target_link_libraries(testLibCyber libCyber catch)
