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
include CMakeFiles/parent-child-ipc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/parent-child-ipc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parent-child-ipc.dir/flags.make

CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o: CMakeFiles/parent-child-ipc.dir/flags.make
CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o: ../parent-child-ipc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o -c /home/skl/CLionProjects/Practice/parent-child-ipc.c

CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/skl/CLionProjects/Practice/parent-child-ipc.c > CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.i

CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/skl/CLionProjects/Practice/parent-child-ipc.c -o CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.s

# Object files for target parent-child-ipc
parent__child__ipc_OBJECTS = \
"CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o"

# External object files for target parent-child-ipc
parent__child__ipc_EXTERNAL_OBJECTS =

parent-child-ipc: CMakeFiles/parent-child-ipc.dir/parent-child-ipc.c.o
parent-child-ipc: CMakeFiles/parent-child-ipc.dir/build.make
parent-child-ipc: CMakeFiles/parent-child-ipc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable parent-child-ipc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parent-child-ipc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parent-child-ipc.dir/build: parent-child-ipc

.PHONY : CMakeFiles/parent-child-ipc.dir/build

CMakeFiles/parent-child-ipc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/parent-child-ipc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/parent-child-ipc.dir/clean

CMakeFiles/parent-child-ipc.dir/depend:
	cd /home/skl/CLionProjects/Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles/parent-child-ipc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/parent-child-ipc.dir/depend
