

all: main

main.o: main.c
	gcc -o main.o -c main.c

point.o: point.c point.h
	gcc -o point.o -c point.c

triangle.o: triangle.c triangle.h point.h
	gcc -o triangle.o -c triangle.c

main: main.o triangle.o point.o
	gcc -o main main.o triangle.o point.o

clean:
	rm -f -f *.o ./main