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
CMAKE_SOURCE_DIR = "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/21_1_linear_search_donald_knuth.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/21_1_linear_search_donald_knuth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/21_1_linear_search_donald_knuth.dir/flags.make

CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj: CMakeFiles/21_1_linear_search_donald_knuth.dir/flags.make
CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj: CMakeFiles/21_1_linear_search_donald_knuth.dir/includes_C.rsp
CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj: ../21_1_linear_search_donald_knuth.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\21_1_linear_search_donald_knuth.dir\21_1_linear_search_donald_knuth.c.obj -c "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\21_1_linear_search_donald_knuth.c"

CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\21_1_linear_search_donald_knuth.c" > CMakeFiles\21_1_linear_search_donald_knuth.dir\21_1_linear_search_donald_knuth.c.i

CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\21_1_linear_search_donald_knuth.c" -o CMakeFiles\21_1_linear_search_donald_knuth.dir\21_1_linear_search_donald_knuth.c.s

# Object files for target 21_1_linear_search_donald_knuth
21_1_linear_search_donald_knuth_OBJECTS = \
"CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj"

# External object files for target 21_1_linear_search_donald_knuth
21_1_linear_search_donald_knuth_EXTERNAL_OBJECTS =

21_1_linear_search_donald_knuth.exe: CMakeFiles/21_1_linear_search_donald_knuth.dir/21_1_linear_search_donald_knuth.c.obj
21_1_linear_search_donald_knuth.exe: CMakeFiles/21_1_linear_search_donald_knuth.dir/build.make
21_1_linear_search_donald_knuth.exe: D:/Programming\ Lectures\ CSDernegi/odevler/libfutility.a
21_1_linear_search_donald_knuth.exe: CMakeFiles/21_1_linear_search_donald_knuth.dir/linklibs.rsp
21_1_linear_search_donald_knuth.exe: CMakeFiles/21_1_linear_search_donald_knuth.dir/objects1.rsp
21_1_linear_search_donald_knuth.exe: CMakeFiles/21_1_linear_search_donald_knuth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 21_1_linear_search_donald_knuth.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\21_1_linear_search_donald_knuth.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/21_1_linear_search_donald_knuth.dir/build: 21_1_linear_search_donald_knuth.exe
.PHONY : CMakeFiles/21_1_linear_search_donald_knuth.dir/build

CMakeFiles/21_1_linear_search_donald_knuth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\21_1_linear_search_donald_knuth.dir\cmake_clean.cmake
.PHONY : CMakeFiles/21_1_linear_search_donald_knuth.dir/clean

CMakeFiles/21_1_linear_search_donald_knuth.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth" "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth" "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug" "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug" "D:\Programming Lectures CSDernegi\odevler\ders_odevleri\21_1_linear_search_donald_knuth\cmake-build-debug\CMakeFiles\21_1_linear_search_donald_knuth.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/21_1_linear_search_donald_knuth.dir/depend

