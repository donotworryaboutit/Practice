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
include CMakeFiles/fifo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fifo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fifo.dir/flags.make

CMakeFiles/fifo.dir/fifo.c.o: CMakeFiles/fifo.dir/flags.make
CMakeFiles/fifo.dir/fifo.c.o: ../fifo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fifo.dir/fifo.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fifo.dir/fifo.c.o -c /home/skl/CLionProjects/Practice/fifo.c

CMakeFiles/fifo.dir/fifo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fifo.dir/fifo.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/skl/CLionProjects/Practice/fifo.c > CMakeFiles/fifo.dir/fifo.c.i

CMakeFiles/fifo.dir/fifo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fifo.dir/fifo.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/skl/CLionProjects/Practice/fifo.c -o CMakeFiles/fifo.dir/fifo.c.s

# Object files for target fifo
fifo_OBJECTS = \
"CMakeFiles/fifo.dir/fifo.c.o"

# External object files for target fifo
fifo_EXTERNAL_OBJECTS =

fifo: CMakeFiles/fifo.dir/fifo.c.o
fifo: CMakeFiles/fifo.dir/build.make
fifo: CMakeFiles/fifo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable fifo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fifo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fifo.dir/build: fifo

.PHONY : CMakeFiles/fifo.dir/build

CMakeFiles/fifo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fifo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fifo.dir/clean

CMakeFiles/fifo.dir/depend:
	cd /home/skl/CLionProjects/Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles/fifo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fifo.dir/depend
