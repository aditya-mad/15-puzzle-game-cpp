CXX = g++
CXXFLAGS = -I./include -std=c++17
SOURCES = main.cpp src/game.cpp src/input_taker.cpp src/menu.cpp src/renderer.cpp
OUTPUT = game.exe

all: $(OUTPUT)

$(OUTPUT): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)

run: $(OUTPUT)
	./$(OUTPUT)

.PHONY: all clean run
