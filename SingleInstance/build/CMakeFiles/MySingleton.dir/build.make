# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.1

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xiahui/Desktop/caoren

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xiahui/Desktop/caoren/build

# Include any dependencies generated for this target.
include CMakeFiles/MySingleton.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MySingleton.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MySingleton.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MySingleton.dir/flags.make

CMakeFiles/MySingleton.dir/codegen:
.PHONY : CMakeFiles/MySingleton.dir/codegen

CMakeFiles/MySingleton.dir/main.cpp.o: CMakeFiles/MySingleton.dir/flags.make
CMakeFiles/MySingleton.dir/main.cpp.o: /Users/xiahui/Desktop/caoren/main.cpp
CMakeFiles/MySingleton.dir/main.cpp.o: CMakeFiles/MySingleton.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/xiahui/Desktop/caoren/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MySingleton.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MySingleton.dir/main.cpp.o -MF CMakeFiles/MySingleton.dir/main.cpp.o.d -o CMakeFiles/MySingleton.dir/main.cpp.o -c /Users/xiahui/Desktop/caoren/main.cpp

CMakeFiles/MySingleton.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MySingleton.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiahui/Desktop/caoren/main.cpp > CMakeFiles/MySingleton.dir/main.cpp.i

CMakeFiles/MySingleton.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MySingleton.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiahui/Desktop/caoren/main.cpp -o CMakeFiles/MySingleton.dir/main.cpp.s

CMakeFiles/MySingleton.dir/Singleton.cpp.o: CMakeFiles/MySingleton.dir/flags.make
CMakeFiles/MySingleton.dir/Singleton.cpp.o: /Users/xiahui/Desktop/caoren/Singleton.cpp
CMakeFiles/MySingleton.dir/Singleton.cpp.o: CMakeFiles/MySingleton.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/xiahui/Desktop/caoren/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MySingleton.dir/Singleton.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MySingleton.dir/Singleton.cpp.o -MF CMakeFiles/MySingleton.dir/Singleton.cpp.o.d -o CMakeFiles/MySingleton.dir/Singleton.cpp.o -c /Users/xiahui/Desktop/caoren/Singleton.cpp

CMakeFiles/MySingleton.dir/Singleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MySingleton.dir/Singleton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiahui/Desktop/caoren/Singleton.cpp > CMakeFiles/MySingleton.dir/Singleton.cpp.i

CMakeFiles/MySingleton.dir/Singleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MySingleton.dir/Singleton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiahui/Desktop/caoren/Singleton.cpp -o CMakeFiles/MySingleton.dir/Singleton.cpp.s

# Object files for target MySingleton
MySingleton_OBJECTS = \
"CMakeFiles/MySingleton.dir/main.cpp.o" \
"CMakeFiles/MySingleton.dir/Singleton.cpp.o"

# External object files for target MySingleton
MySingleton_EXTERNAL_OBJECTS =

MySingleton: CMakeFiles/MySingleton.dir/main.cpp.o
MySingleton: CMakeFiles/MySingleton.dir/Singleton.cpp.o
MySingleton: CMakeFiles/MySingleton.dir/build.make
MySingleton: CMakeFiles/MySingleton.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/xiahui/Desktop/caoren/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MySingleton"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MySingleton.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MySingleton.dir/build: MySingleton
.PHONY : CMakeFiles/MySingleton.dir/build

CMakeFiles/MySingleton.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MySingleton.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MySingleton.dir/clean

CMakeFiles/MySingleton.dir/depend:
	cd /Users/xiahui/Desktop/caoren/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xiahui/Desktop/caoren /Users/xiahui/Desktop/caoren /Users/xiahui/Desktop/caoren/build /Users/xiahui/Desktop/caoren/build /Users/xiahui/Desktop/caoren/build/CMakeFiles/MySingleton.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MySingleton.dir/depend

