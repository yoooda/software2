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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/BascketBall



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
PROJECT_TARGETS = BascketBall/$(MODE_DIR)/BascketBall.out \
	 BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage.o


#Rules

# BascketBall
ifeq ($(DEBUG_MODE),1)
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
BascketBall/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
BascketBall/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
BascketBall/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
BascketBall/$(MODE_DIR)/% : IDE_DEFINES = 
BascketBall/$(MODE_DIR)/% : PROJECT_TYPE = DKM
BascketBall/$(MODE_DIR)/% : DEFINES = 
BascketBall/$(MODE_DIR)/% : EXPAND_DBG = 0
BascketBall/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
BascketBall/$(MODE_DIR)/% : CPU = PPC603
BascketBall/$(MODE_DIR)/% : TOOL_FAMILY = gnu
BascketBall/$(MODE_DIR)/% : TOOL = gnu
BascketBall/$(MODE_DIR)/% : TOOL_PATH = 
BascketBall/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
BascketBall/$(MODE_DIR)/% : LIBPATH = 
BascketBall/$(MODE_DIR)/% : LIBS = 
BascketBall/$(MODE_DIR)/% : OBJ_DIR := BascketBall/$(MODE_DIR)

OBJECTS_BascketBall = BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage.o

BascketBall/$(MODE_DIR)/BascketBall.out : $(OBJECTS_BascketBall)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_BascketBall) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_BascketBall) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

BascketBall/$(MODE_DIR)/BascketBall_compile_file : $(FILE) ;

_clean :: BascketBall/$(MODE_DIR)/BascketBall_clean

BascketBall/$(MODE_DIR)/BascketBall_clean : 
	$(TRACE_FLAG)if [ -d "BascketBall" ]; then cd "BascketBall"; rm -rf $(MODE_DIR); fi


# BascketBall_partialImage
ifeq ($(DEBUG_MODE),1)
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
BascketBall_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
BascketBall_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
BascketBall_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
BascketBall_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
BascketBall_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
BascketBall_partialImage/$(MODE_DIR)/% : DEFINES = 
BascketBall_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
BascketBall_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
BascketBall_partialImage/$(MODE_DIR)/% : CPU = PPC603
BascketBall_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
BascketBall_partialImage/$(MODE_DIR)/% : TOOL = gnu
BascketBall_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
BascketBall_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
BascketBall_partialImage/$(MODE_DIR)/% : LIBPATH = 
BascketBall_partialImage/$(MODE_DIR)/% : LIBS = 
BascketBall_partialImage/$(MODE_DIR)/% : OBJ_DIR := BascketBall_partialImage/$(MODE_DIR)

BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/ImageAnalyze.o : $(PRJ_ROOT_DIR)/ImageAnalyze.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_BascketBall_partialImage = BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBase.o \
	 BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBasedRobot.o \
	 BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/ImageAnalyze.o \
	 BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/OI.o

BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage.o : $(OBJECTS_BascketBall_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_BascketBall_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage_compile_file : $(FILE) ;

_clean :: BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage_clean

BascketBall_partialImage/$(MODE_DIR)/BascketBall_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "BascketBall_partialImage" ]; then cd "BascketBall_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBase.d BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/CommandBasedRobot.d BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/ImageAnalyze.d \
	 BascketBall_partialImage/$(MODE_DIR)/Objects/BascketBall/OI.d
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
