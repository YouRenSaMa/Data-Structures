# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C\7\7.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C\7\7.1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\7_1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\7_1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\7_1.dir\flags.make

CMakeFiles\7_1.dir\main.c.obj: CMakeFiles\7_1.dir\flags.make
CMakeFiles\7_1.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C\7\7.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/7_1.dir/main.c.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\7_1.dir\main.c.obj /FdCMakeFiles\7_1.dir\ /FS -c D:\C\7\7.1\main.c
<<

CMakeFiles\7_1.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7_1.dir/main.c.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\7_1.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C\7\7.1\main.c
<<

CMakeFiles\7_1.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7_1.dir/main.c.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\7_1.dir\main.c.s /c D:\C\7\7.1\main.c
<<

# Object files for target 7_1
7_1_OBJECTS = \
"CMakeFiles\7_1.dir\main.c.obj"

# External object files for target 7_1
7_1_EXTERNAL_OBJECTS =

7_1.exe: CMakeFiles\7_1.dir\main.c.obj
7_1.exe: CMakeFiles\7_1.dir\build.make
7_1.exe: CMakeFiles\7_1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C\7\7.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 7_1.exe"
	"D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\7_1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\7_1.dir\objects1.rsp @<<
 /out:7_1.exe /implib:7_1.lib /pdb:D:\C\7\7.1\cmake-build-debug\7_1.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\7_1.dir\build: 7_1.exe

.PHONY : CMakeFiles\7_1.dir\build

CMakeFiles\7_1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\7_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\7_1.dir\clean

CMakeFiles\7_1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\C\7\7.1 D:\C\7\7.1 D:\C\7\7.1\cmake-build-debug D:\C\7\7.1\cmake-build-debug D:\C\7\7.1\cmake-build-debug\CMakeFiles\7_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\7_1.dir\depend

