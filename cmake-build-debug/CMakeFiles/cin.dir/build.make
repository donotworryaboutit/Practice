# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/skl/Desktop/clion-2021.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/skl/Desktop/clion-2021.1.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/skl/CLionProjects/Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/skl/CLionProjects/Practice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cin.dir/flags.make

CMakeFiles/cin.dir/cin.cpp.o: CMakeFiles/cin.dir/flags.make
CMakeFiles/cin.dir/cin.cpp.o: ../cin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cin.dir/cin.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cin.dir/cin.cpp.o -c /home/skl/CLionProjects/Practice/cin.cpp

CMakeFiles/cin.dir/cin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cin.dir/cin.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skl/CLionProjects/Practice/cin.cpp > CMakeFiles/cin.dir/cin.cpp.i

CMakeFiles/cin.dir/cin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cin.dir/cin.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skl/CLionProjects/Practice/cin.cpp -o CMakeFiles/cin.dir/cin.cpp.s

# Object files for target cin
cin_OBJECTS = \
"CMakeFiles/cin.dir/cin.cpp.o"

# External object files for target cin
cin_EXTERNAL_OBJECTS =

cin: CMakeFiles/cin.dir/cin.cpp.o
cin: CMakeFiles/cin.dir/build.make
cin: CMakeFiles/cin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cin.dir/build: cin

.PHONY : CMakeFiles/cin.dir/build

CMakeFiles/cin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cin.dir/clean

CMakeFiles/cin.dir/depend:
	cd /home/skl/CLionProjects/Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles/cin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cin.dir/depend
