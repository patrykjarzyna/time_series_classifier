find_package(TensorflowCC REQUIRED)
include_directories(include)
file(GLOB SOURCES src/*.cpp)
add_executable(main main.cpp ${SOURCES})
# Link the Tensorflow library.
target_link_libraries(main TensorflowCC::TensorflowCC)
