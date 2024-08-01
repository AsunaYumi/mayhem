
debug: build run

build:
	g++ src/main.cpp -std=c++20 -o out/engine.exe -lwinmm

run: 
	./out/engine.exe
