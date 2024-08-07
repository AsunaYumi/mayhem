
ifndef config
	config=debug
endif

OUTDIR = ../../bin/$(config)/$(platform)
OUTFILE = $(OUTDIR)/app.exe
LIBS = $(OUTDIR)/mayhem.dll -lopengl32
INCLUDES = -I../../vendor/spdlog/include -I.. -I../../vendor/GLFW/include
STANDART = c++17

ifeq (windows,$(platform))
	DEFINES += -DMH_PLATFORM_WINDOWS
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
	@g++ -o $(OUTFILE) *.cpp  $(LIBS) $(INCLUDES) $(DEFINES) -std=$(STANDART)
