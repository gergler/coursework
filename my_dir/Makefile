CC=g++
SOURCES=$(wildcard *.cpp)
OBJS=$(SOURCES:%.cpp=%.o)
DEPS=$(SOURCES:%.cpp=%.d)
EXEC=project

.PHONY: clean all

all: $(EXEC)

%.o: %.cpp
	$(CC) -c -MMD $<

$(EXEC): $(OBJS)
	$(CC) -o $@ $^

-include $(DEPS)

clean:
	-rm -f $(DEPS)
	-rm -f $(OBJS)

