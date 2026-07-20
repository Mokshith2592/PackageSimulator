CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Iinclude
SRC := $(wildcard src/*.cpp)

ifeq ($(OS),Windows_NT)
TARGET := PackageSimulator.exe
CLEAN_CMD := powershell -Command "Remove-Item -Force -ErrorAction SilentlyContinue '$(TARGET)'"
else
TARGET := PackageSimulator
CLEAN_CMD := rm -f $(TARGET)
endif

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	$(CLEAN_CMD)

.PHONY: all run clean
