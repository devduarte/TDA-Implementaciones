# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TDA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TDA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TDA.dir/flags.make

CMakeFiles/TDA.dir/main.c.obj: CMakeFiles/TDA.dir/flags.make
CMakeFiles/TDA.dir/main.c.obj: CMakeFiles/TDA.dir/includes_C.rsp
CMakeFiles/TDA.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TDA.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TDA.dir\main.c.obj   -c C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\main.c

CMakeFiles/TDA.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TDA.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\main.c > CMakeFiles\TDA.dir\main.c.i

CMakeFiles/TDA.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TDA.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\main.c -o CMakeFiles\TDA.dir\main.c.s

# Object files for target TDA
TDA_OBJECTS = \
"CMakeFiles/TDA.dir/main.c.obj"

# External object files for target TDA
TDA_EXTERNAL_OBJECTS =

TDA.exe: CMakeFiles/TDA.dir/main.c.obj
TDA.exe: CMakeFiles/TDA.dir/build.make
TDA.exe: CMakeFiles/TDA.dir/linklibs.rsp
TDA.exe: CMakeFiles/TDA.dir/objects1.rsp
TDA.exe: CMakeFiles/TDA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TDA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TDA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TDA.dir/build: TDA.exe

.PHONY : CMakeFiles/TDA.dir/build

CMakeFiles/TDA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TDA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TDA.dir/clean

CMakeFiles/TDA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug C:\Users\Diego\Desktop\Diego\facu\algo1\TDA-Implementaciones\TDA\cmake-build-debug\CMakeFiles\TDA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TDA.dir/depend
