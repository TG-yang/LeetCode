# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/149. Max Points on a Line"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/149__Max_Points_on_a_Line.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/149__Max_Points_on_a_Line.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/149__Max_Points_on_a_Line.dir/flags.make

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o: CMakeFiles/149__Max_Points_on_a_Line.dir/flags.make
CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/149. Max Points on a Line/main.cpp"

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/149. Max Points on a Line/main.cpp" > CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.i

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/149. Max Points on a Line/main.cpp" -o CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.s

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.requires

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.provides: CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/149__Max_Points_on_a_Line.dir/build.make CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.provides

CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.provides.build: CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o


# Object files for target 149__Max_Points_on_a_Line
149__Max_Points_on_a_Line_OBJECTS = \
"CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o"

# External object files for target 149__Max_Points_on_a_Line
149__Max_Points_on_a_Line_EXTERNAL_OBJECTS =

149__Max_Points_on_a_Line: CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o
149__Max_Points_on_a_Line: CMakeFiles/149__Max_Points_on_a_Line.dir/build.make
149__Max_Points_on_a_Line: CMakeFiles/149__Max_Points_on_a_Line.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 149__Max_Points_on_a_Line"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/149__Max_Points_on_a_Line.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/149__Max_Points_on_a_Line.dir/build: 149__Max_Points_on_a_Line

.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/build

CMakeFiles/149__Max_Points_on_a_Line.dir/requires: CMakeFiles/149__Max_Points_on_a_Line.dir/main.cpp.o.requires

.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/requires

CMakeFiles/149__Max_Points_on_a_Line.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/149__Max_Points_on_a_Line.dir/cmake_clean.cmake
.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/clean

CMakeFiles/149__Max_Points_on_a_Line.dir/depend:
	cd "/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/149. Max Points on a Line" "/Users/wenyangzheng/CLion/149. Max Points on a Line" "/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug" "/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug" "/Users/wenyangzheng/CLion/149. Max Points on a Line/cmake-build-debug/CMakeFiles/149__Max_Points_on_a_Line.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/149__Max_Points_on_a_Line.dir/depend

