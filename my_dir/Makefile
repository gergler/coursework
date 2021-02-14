CC=g++
SOURCES=$(wildcard *.cpp)
OBJ=$(patsubst %.cpp,%.o,$(SOURCES))
EXEC=project

$(EXEC): $(OBJ)
        $(CC) -o $@ $^ -MD

include $(wildcard *.d)

.PHONY: clean

clean:
        rm -f *.d
        rm -f $(OBJ)
