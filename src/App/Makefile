
debug: build run

build:
	g++ *.cpp -std=c++20 -o ../../out/app.exe -I../ ../../out/engine.dll -DMH_PLATFORM_WINDOWS -I../../vendor/spdlog/include

run: ../../out/app.exe
	../../out/app.exe