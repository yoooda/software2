# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/user/Documents/GitHub/software2
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/TestingMotors



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = TestingMotors/$(MODE_DIR)/TestingMotors.out \
	 TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage.o


#Rules

# TestingMotors
ifeq ($(DEBUG_MODE),1)
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TestingMotors/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
TestingMotors/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
TestingMotors/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
TestingMotors/$(MODE_DIR)/% : IDE_DEFINES = 
TestingMotors/$(MODE_DIR)/% : PROJECT_TYPE = DKM
TestingMotors/$(MODE_DIR)/% : DEFINES = 
TestingMotors/$(MODE_DIR)/% : EXPAND_DBG = 0
TestingMotors/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
TestingMotors/$(MODE_DIR)/% : CPU = PPC603
TestingMotors/$(MODE_DIR)/% : TOOL_FAMILY = gnu
TestingMotors/$(MODE_DIR)/% : TOOL = gnu
TestingMotors/$(MODE_DIR)/% : TOOL_PATH = 
TestingMotors/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
TestingMotors/$(MODE_DIR)/% : LIBPATH = 
TestingMotors/$(MODE_DIR)/% : LIBS = 
TestingMotors/$(MODE_DIR)/% : OBJ_DIR := TestingMotors/$(MODE_DIR)

OBJECTS_TestingMotors = TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage.o

TestingMotors/$(MODE_DIR)/TestingMotors.out : $(OBJECTS_TestingMotors)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_TestingMotors) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_TestingMotors) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

TestingMotors/$(MODE_DIR)/TestingMotors_compile_file : $(FILE) ;

_clean :: TestingMotors/$(MODE_DIR)/TestingMotors_clean

TestingMotors/$(MODE_DIR)/TestingMotors_clean : 
	$(TRACE_FLAG)if [ -d "TestingMotors" ]; then cd "TestingMotors"; rm -rf $(MODE_DIR); fi


# TestingMotors_partialImage
ifeq ($(DEBUG_MODE),1)
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TestingMotors_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
TestingMotors_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
TestingMotors_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
TestingMotors_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
TestingMotors_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
TestingMotors_partialImage/$(MODE_DIR)/% : DEFINES = 
TestingMotors_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
TestingMotors_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
TestingMotors_partialImage/$(MODE_DIR)/% : CPU = PPC603
TestingMotors_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
TestingMotors_partialImage/$(MODE_DIR)/% : TOOL = gnu
TestingMotors_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
TestingMotors_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
TestingMotors_partialImage/$(MODE_DIR)/% : LIBPATH = 
TestingMotors_partialImage/$(MODE_DIR)/% : LIBS = 
TestingMotors_partialImage/$(MODE_DIR)/% : OBJ_DIR := TestingMotors_partialImage/$(MODE_DIR)

TestingMotors_partialImage/$(MODE_DIR)/Objects/TestingMotors/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_TestingMotors_partialImage = TestingMotors_partialImage/$(MODE_DIR)/Objects/TestingMotors/MyRobot.o

TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage.o : $(OBJECTS_TestingMotors_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_TestingMotors_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage_compile_file : $(FILE) ;

_clean :: TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage_clean

TestingMotors_partialImage/$(MODE_DIR)/TestingMotors_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "TestingMotors_partialImage" ]; then cd "TestingMotors_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := TestingMotors_partialImage/$(MODE_DIR)/Objects/TestingMotors/MyRobot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
