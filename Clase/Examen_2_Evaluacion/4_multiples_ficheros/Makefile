compilar: main.o interface.o
	gcc -o tu_nombre main.o

main.o:
	gcc -c main.cpp

interface.o:
	gcc -c interface.cpp

.PHONY: clean

clean:
	rm -rf *.o
