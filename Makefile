run: main.cpp
	clang++ -o run.o main.cpp -g

.PHONY: clean
clean:
	rm -rf *.o *.dSYM/
