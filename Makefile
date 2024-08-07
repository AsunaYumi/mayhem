
ifndef config
	config=debug
endif

all: Mayhem App
	@:

Mayhem:
	@echo "==== Building Mayhem ($(config)) ===="
	@${MAKE} --no-print-directory -C src/Mayhem -f Makefile config=$(config) platform=$(platform) build

App:
	@echo "==== Building App ($(config)) ===="
	@${MAKE} --no-print-directory -C src/App -f Makefile config=$(config) platform=$(platform) build

clean:
	@${MAKE} --no-print-directory -C src/Mayhem -f Makefile clean
	@${MAKE} --no-print-directory -C src/App -f Makefile clean

help:
	@echo "Usage: make [config=name] [platform=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo "  dist"
	@echo ""
	@echo "PLATFORMS:"
	@echo "  windows"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   Mayhem"
	@echo "   App"
	@echo "   clean [deletes outputs]"
	@echo ""
