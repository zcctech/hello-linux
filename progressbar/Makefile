IN=proc.exe
CC=gcc
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
LFLAGS=-o
FLAGS=-c
RM=rm -f
$(BIN):$(OBJ)
	$(CC) $(LFLAGS) $@ $^
%.o:%.c
	$(CC) $(FLAGS) $<

.PHONY:clean
clean:
	$(RM) $(OBJ) $(BIN) 

