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
include CMakeFiles/chatA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chatA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chatA.dir/flags.make

CMakeFiles/chatA.dir/chatA.c.o: CMakeFiles/chatA.dir/flags.make
CMakeFiles/chatA.dir/chatA.c.o: ../chatA.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/chatA.dir/chatA.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chatA.dir/chatA.c.o -c /home/skl/CLionProjects/Practice/chatA.c

CMakeFiles/chatA.dir/chatA.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chatA.dir/chatA.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/skl/CLionProjects/Practice/chatA.c > CMakeFiles/chatA.dir/chatA.c.i

CMakeFiles/chatA.dir/chatA.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chatA.dir/chatA.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/skl/CLionProjects/Practice/chatA.c -o CMakeFiles/chatA.dir/chatA.c.s

# Object files for target chatA
chatA_OBJECTS = \
"CMakeFiles/chatA.dir/chatA.c.o"

# External object files for target chatA
chatA_EXTERNAL_OBJECTS =

chatA: CMakeFiles/chatA.dir/chatA.c.o
chatA: CMakeFiles/chatA.dir/build.make
chatA: CMakeFiles/chatA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable chatA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chatA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chatA.dir/build: chatA

.PHONY : CMakeFiles/chatA.dir/build

CMakeFiles/chatA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chatA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chatA.dir/clean

CMakeFiles/chatA.dir/depend:
	cd /home/skl/CLionProjects/Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug /home/skl/CLionProjects/Practice/cmake-build-debug/CMakeFiles/chatA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chatA.dir/depend

