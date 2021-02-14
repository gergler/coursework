CC=g++
SOURCES=$(wildcard *.cpp)
OBJ=$(patsubst %.cpp,%.o,$(SOURCES))
EXEC=project

.PHONY: clean all

all: $(EXEC)

%.o: %.cpp
        $(CC) -c -MD $<

$(EXEC): $(OBJ)
        $(CC) -o $@ $^

include $(wildcard *.d)

clean:
        rm -f *.d
        rm -f $(OBJ)
