CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -Iinclude
TARGET = bin/ZadClassKcpp
SOURCES = main.cc $(wildcard src/*.cc)

all: $(TARGET)

$(TARGET): $(SOURCES)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
