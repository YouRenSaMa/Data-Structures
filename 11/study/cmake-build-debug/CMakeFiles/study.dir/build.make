# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C\11\study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C\11\study\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/study.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/study.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/study.dir/flags.make

CMakeFiles/study.dir/main.cpp.obj: CMakeFiles/study.dir/flags.make
CMakeFiles/study.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C\11\study\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/study.dir/main.cpp.obj"
	D:\C\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\study.dir\main.cpp.obj -c D:\C\11\study\main.cpp

CMakeFiles/study.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/study.dir/main.cpp.i"
	D:\C\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C\11\study\main.cpp > CMakeFiles\study.dir\main.cpp.i

CMakeFiles/study.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/study.dir/main.cpp.s"
	D:\C\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C\11\study\main.cpp -o CMakeFiles\study.dir\main.cpp.s

# Object files for target study
study_OBJECTS = \
"CMakeFiles/study.dir/main.cpp.obj"

# External object files for target study
study_EXTERNAL_OBJECTS =

study.exe: CMakeFiles/study.dir/main.cpp.obj
study.exe: CMakeFiles/study.dir/build.make
study.exe: CMakeFiles/study.dir/linklibs.rsp
study.exe: CMakeFiles/study.dir/objects1.rsp
study.exe: CMakeFiles/study.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C\11\study\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable study.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\study.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/study.dir/build: study.exe

.PHONY : CMakeFiles/study.dir/build

CMakeFiles/study.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\study.dir\cmake_clean.cmake
.PHONY : CMakeFiles/study.dir/clean

CMakeFiles/study.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C\11\study D:\C\11\study D:\C\11\study\cmake-build-debug D:\C\11\study\cmake-build-debug D:\C\11\study\cmake-build-debug\CMakeFiles\study.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/study.dir/depend
