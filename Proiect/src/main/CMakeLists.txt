add_executable(
    main_builder
    main.cpp
)

target_link_libraries(main_builder PRIVATE header)

#target_include_directories(main_builder PUBLIC "${PROJECT_SOURCE_DIR}/hpp")
#target_include_directories(main_builder PUBLIC "${PROJECT_SOURCE_DIR}/cpp")