# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/time_series/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/time_series/src/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.o -c /tmp/time_series/src/main.cpp

CMakeFiles/main.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/main.cpp > CMakeFiles/main.dir/main.i

CMakeFiles/main.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/main.cpp -o CMakeFiles/main.dir/main.s

CMakeFiles/main.dir/DataPreparator.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataPreparator.o: ../DataPreparator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/DataPreparator.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataPreparator.o -c /tmp/time_series/src/DataPreparator.cpp

CMakeFiles/main.dir/DataPreparator.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataPreparator.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataPreparator.cpp > CMakeFiles/main.dir/DataPreparator.i

CMakeFiles/main.dir/DataPreparator.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataPreparator.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataPreparator.cpp -o CMakeFiles/main.dir/DataPreparator.s

CMakeFiles/main.dir/DataPreparatorPredict.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataPreparatorPredict.o: ../DataPreparatorPredict.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/DataPreparatorPredict.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataPreparatorPredict.o -c /tmp/time_series/src/DataPreparatorPredict.cpp

CMakeFiles/main.dir/DataPreparatorPredict.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataPreparatorPredict.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataPreparatorPredict.cpp > CMakeFiles/main.dir/DataPreparatorPredict.i

CMakeFiles/main.dir/DataPreparatorPredict.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataPreparatorPredict.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataPreparatorPredict.cpp -o CMakeFiles/main.dir/DataPreparatorPredict.s

CMakeFiles/main.dir/DataPreparatorTrain.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataPreparatorTrain.o: ../DataPreparatorTrain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/DataPreparatorTrain.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataPreparatorTrain.o -c /tmp/time_series/src/DataPreparatorTrain.cpp

CMakeFiles/main.dir/DataPreparatorTrain.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataPreparatorTrain.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataPreparatorTrain.cpp > CMakeFiles/main.dir/DataPreparatorTrain.i

CMakeFiles/main.dir/DataPreparatorTrain.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataPreparatorTrain.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataPreparatorTrain.cpp -o CMakeFiles/main.dir/DataPreparatorTrain.s

CMakeFiles/main.dir/DataReader.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataReader.o: ../DataReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/DataReader.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataReader.o -c /tmp/time_series/src/DataReader.cpp

CMakeFiles/main.dir/DataReader.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataReader.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataReader.cpp > CMakeFiles/main.dir/DataReader.i

CMakeFiles/main.dir/DataReader.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataReader.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataReader.cpp -o CMakeFiles/main.dir/DataReader.s

CMakeFiles/main.dir/DataSet.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataSet.o: ../DataSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/DataSet.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataSet.o -c /tmp/time_series/src/DataSet.cpp

CMakeFiles/main.dir/DataSet.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataSet.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataSet.cpp > CMakeFiles/main.dir/DataSet.i

CMakeFiles/main.dir/DataSet.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataSet.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataSet.cpp -o CMakeFiles/main.dir/DataSet.s

CMakeFiles/main.dir/DataSetPredict.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataSetPredict.o: ../DataSetPredict.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/DataSetPredict.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataSetPredict.o -c /tmp/time_series/src/DataSetPredict.cpp

CMakeFiles/main.dir/DataSetPredict.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataSetPredict.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataSetPredict.cpp > CMakeFiles/main.dir/DataSetPredict.i

CMakeFiles/main.dir/DataSetPredict.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataSetPredict.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataSetPredict.cpp -o CMakeFiles/main.dir/DataSetPredict.s

CMakeFiles/main.dir/DataSetTrain.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/DataSetTrain.o: ../DataSetTrain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/DataSetTrain.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/DataSetTrain.o -c /tmp/time_series/src/DataSetTrain.cpp

CMakeFiles/main.dir/DataSetTrain.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/DataSetTrain.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/DataSetTrain.cpp > CMakeFiles/main.dir/DataSetTrain.i

CMakeFiles/main.dir/DataSetTrain.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/DataSetTrain.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/DataSetTrain.cpp -o CMakeFiles/main.dir/DataSetTrain.s

CMakeFiles/main.dir/Evaluator.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Evaluator.o: ../Evaluator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/Evaluator.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/Evaluator.o -c /tmp/time_series/src/Evaluator.cpp

CMakeFiles/main.dir/Evaluator.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Evaluator.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/Evaluator.cpp > CMakeFiles/main.dir/Evaluator.i

CMakeFiles/main.dir/Evaluator.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Evaluator.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/Evaluator.cpp -o CMakeFiles/main.dir/Evaluator.s

CMakeFiles/main.dir/ExperimentRunner.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/ExperimentRunner.o: ../ExperimentRunner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/main.dir/ExperimentRunner.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/ExperimentRunner.o -c /tmp/time_series/src/ExperimentRunner.cpp

CMakeFiles/main.dir/ExperimentRunner.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/ExperimentRunner.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/ExperimentRunner.cpp > CMakeFiles/main.dir/ExperimentRunner.i

CMakeFiles/main.dir/ExperimentRunner.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/ExperimentRunner.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/ExperimentRunner.cpp -o CMakeFiles/main.dir/ExperimentRunner.s

CMakeFiles/main.dir/Model.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Model.o: ../Model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/main.dir/Model.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/Model.o -c /tmp/time_series/src/Model.cpp

CMakeFiles/main.dir/Model.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Model.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/time_series/src/Model.cpp > CMakeFiles/main.dir/Model.i

CMakeFiles/main.dir/Model.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Model.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/time_series/src/Model.cpp -o CMakeFiles/main.dir/Model.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.o" \
"CMakeFiles/main.dir/DataPreparator.o" \
"CMakeFiles/main.dir/DataPreparatorPredict.o" \
"CMakeFiles/main.dir/DataPreparatorTrain.o" \
"CMakeFiles/main.dir/DataReader.o" \
"CMakeFiles/main.dir/DataSet.o" \
"CMakeFiles/main.dir/DataSetPredict.o" \
"CMakeFiles/main.dir/DataSetTrain.o" \
"CMakeFiles/main.dir/Evaluator.o" \
"CMakeFiles/main.dir/ExperimentRunner.o" \
"CMakeFiles/main.dir/Model.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.o
main: CMakeFiles/main.dir/DataPreparator.o
main: CMakeFiles/main.dir/DataPreparatorPredict.o
main: CMakeFiles/main.dir/DataPreparatorTrain.o
main: CMakeFiles/main.dir/DataReader.o
main: CMakeFiles/main.dir/DataSet.o
main: CMakeFiles/main.dir/DataSetPredict.o
main: CMakeFiles/main.dir/DataSetTrain.o
main: CMakeFiles/main.dir/Evaluator.o
main: CMakeFiles/main.dir/ExperimentRunner.o
main: CMakeFiles/main.dir/Model.o
main: CMakeFiles/main.dir/build.make
main: /usr/local/lib/libtensorflow_cc.so.2
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/time_series/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /tmp/time_series/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/time_series/src /tmp/time_series/src /tmp/time_series/src/build /tmp/time_series/src/build /tmp/time_series/src/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
