CC = g++
CFLAGS = -g

OBJS = $(patsubst %.o, %.cpp, $(wildcard *.cpp))

EXE = objetos

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(EXE) -lncurses

%.o: %.c
	$(CC) $(CFLAGS) -C $< -lncurses
