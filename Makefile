all: my_dontrun.o
	cc my_dontrun.o
	./a.out

clean:
	rm *.o a.out
