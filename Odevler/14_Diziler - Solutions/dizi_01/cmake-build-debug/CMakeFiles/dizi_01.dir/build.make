# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dizi_01.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/dizi_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dizi_01.dir/flags.make

CMakeFiles/dizi_01.dir/dizi_01.c.obj: CMakeFiles/dizi_01.dir/flags.make
CMakeFiles/dizi_01.dir/dizi_01.c.obj: CMakeFiles/dizi_01.dir/includes_C.rsp
CMakeFiles/dizi_01.dir/dizi_01.c.obj: ../dizi_01.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dizi_01.dir/dizi_01.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\dizi_01.dir\dizi_01.c.obj -c "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\dizi_01.c"

CMakeFiles/dizi_01.dir/dizi_01.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dizi_01.dir/dizi_01.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\dizi_01.c" > CMakeFiles\dizi_01.dir\dizi_01.c.i

CMakeFiles/dizi_01.dir/dizi_01.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dizi_01.dir/dizi_01.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\dizi_01.c" -o CMakeFiles\dizi_01.dir\dizi_01.c.s

# Object files for target dizi_01
dizi_01_OBJECTS = \
"CMakeFiles/dizi_01.dir/dizi_01.c.obj"

# External object files for target dizi_01
dizi_01_EXTERNAL_OBJECTS =

dizi_01.exe: CMakeFiles/dizi_01.dir/dizi_01.c.obj
dizi_01.exe: CMakeFiles/dizi_01.dir/build.make
dizi_01.exe: D:/Programming\ Lectures\ CSDernegi/odevler/libfutility.a
dizi_01.exe: CMakeFiles/dizi_01.dir/linklibs.rsp
dizi_01.exe: CMakeFiles/dizi_01.dir/objects1.rsp
dizi_01.exe: CMakeFiles/dizi_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable dizi_01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dizi_01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dizi_01.dir/build: dizi_01.exe
.PHONY : CMakeFiles/dizi_01.dir/build

CMakeFiles/dizi_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dizi_01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dizi_01.dir/clean

CMakeFiles/dizi_01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01" "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01" "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug" "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug" "D:\Programming Lectures CSDernegi\odevler\14_Diziler - Solutions\dizi_01\cmake-build-debug\CMakeFiles\dizi_01.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dizi_01.dir/depend

