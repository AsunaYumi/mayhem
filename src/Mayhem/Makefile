
ifndef config
	config=debug
endif

OUTDIR = ../../bin/$(config)/$(platform)
OUTFILE  = $(OUTDIR)/mayhem.dll
OUTFILE2 = $(OUTDIR)/mayhem.lib
LIBS = $(OUTDIR)/glfw3.dll -lopengl32 # -l$(OUTDIR)/libglfw3.a -l$(OUTDIR)/libglfw3dll.a
INCLUDES = -I. -I../../vendor/spdlog/include -I../Mayhem -I.. -I../../vendor/GLFW/include
STANDART = c++17
FILES = 

ifeq (windows,$(platform))
	DEFINES += -DMH_PLATFORM_WINDOWS -DMH_BUILD_LIB -DMH_ENABLE_ASSERTS
	FILES += platform/windows/*.cpp
endif

ifeq ($(config),debug)
	DEFINES += -DMH_DEBUG
endif
ifeq ($(config),release)
	DEFINES += -DMH_RELEASE
endif
ifeq ($(config),dist)
	DEFINES += -DMH_DIST
endif

build:
#	@echo Compiling shared
	@g++ -o $(OUTFILE)  $(FILES) *.cpp $(LIBS) $(INCLUDES) $(DEFINES) -std=$(STANDART) -shared -Wall
#	@echo Compiling static
#	@g++ -o $(OUTFILE2) $(FILES) *.cpp $(LIBS) $(INCLUDES) $(DEFINES) -std=$(STANDART) -static -Wall
