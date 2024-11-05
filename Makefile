PROGRAM_NAME = compiledCode
OBJECT_FILES = $(PROGRAM_NAME).o
CPPFLAGS = -std=c++23 -g

$(PROGRAM_NAME): main.cpp
	clang++ $(CPPFLAGS) -o $(PROGRAM_NAME) main.cpp

.PHONY: clean run

clean:
	rm -rf *.o *.dSYM $(PROGRAM_NAME)

run: $(PROGRAM_NAME)
	./$(PROGRAM_NAME) $(ARGS)
