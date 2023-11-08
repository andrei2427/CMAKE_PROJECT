add_library(
    header
    Device.cpp
    User.cpp
)
target_include_directories(header PUBLIC "${PROJECT_SOURCE_DIR}/hpp")