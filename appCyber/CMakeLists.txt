
file(GLOB_RECURSE appCyber_source_files src/*)
add_executable(appCyber ${appCyber_source_files})
target_link_libraries(appCyber libCyber)
