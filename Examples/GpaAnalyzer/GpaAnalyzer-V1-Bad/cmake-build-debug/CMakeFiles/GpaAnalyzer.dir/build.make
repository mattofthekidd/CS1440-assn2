# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_SOURCE_DIR = /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GpaAnalyzer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GpaAnalyzer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GpaAnalyzer.dir/flags.make

CMakeFiles/GpaAnalyzer.dir/main.cpp.o: CMakeFiles/GpaAnalyzer.dir/flags.make
CMakeFiles/GpaAnalyzer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GpaAnalyzer.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GpaAnalyzer.dir/main.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/main.cpp

CMakeFiles/GpaAnalyzer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GpaAnalyzer.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/main.cpp > CMakeFiles/GpaAnalyzer.dir/main.cpp.i

CMakeFiles/GpaAnalyzer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GpaAnalyzer.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/main.cpp -o CMakeFiles/GpaAnalyzer.dir/main.cpp.s

CMakeFiles/GpaAnalyzer.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GpaAnalyzer.dir/main.cpp.o.requires

CMakeFiles/GpaAnalyzer.dir/main.cpp.o.provides: CMakeFiles/GpaAnalyzer.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GpaAnalyzer.dir/build.make CMakeFiles/GpaAnalyzer.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GpaAnalyzer.dir/main.cpp.o.provides

CMakeFiles/GpaAnalyzer.dir/main.cpp.o.provides.build: CMakeFiles/GpaAnalyzer.dir/main.cpp.o


# Object files for target GpaAnalyzer
GpaAnalyzer_OBJECTS = \
"CMakeFiles/GpaAnalyzer.dir/main.cpp.o"

# External object files for target GpaAnalyzer
GpaAnalyzer_EXTERNAL_OBJECTS =

GpaAnalyzer: CMakeFiles/GpaAnalyzer.dir/main.cpp.o
GpaAnalyzer: CMakeFiles/GpaAnalyzer.dir/build.make
GpaAnalyzer: CMakeFiles/GpaAnalyzer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GpaAnalyzer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GpaAnalyzer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GpaAnalyzer.dir/build: GpaAnalyzer

.PHONY : CMakeFiles/GpaAnalyzer.dir/build

CMakeFiles/GpaAnalyzer.dir/requires: CMakeFiles/GpaAnalyzer.dir/main.cpp.o.requires

.PHONY : CMakeFiles/GpaAnalyzer.dir/requires

CMakeFiles/GpaAnalyzer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GpaAnalyzer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GpaAnalyzer.dir/clean

CMakeFiles/GpaAnalyzer.dir/depend:
	cd /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug /Users/swc/Dropbox/UnderGit/cs1440s17-shared/Examples/GpaAnalyzer/GpaAnalyzer-V1-Bad/cmake-build-debug/CMakeFiles/GpaAnalyzer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GpaAnalyzer.dir/depend
