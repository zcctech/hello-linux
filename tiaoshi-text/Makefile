CC=gcc
Process=one.exe
arc=$(wildcard *.c)
obj=$(arc:.c=.o)

$(Process):$(obj)
	$(CC) $^ -o $@
%.o:%.c
	%(CC) -c $< -o $@
.PHONY:clean
clean:
	rm -f $(obj)  $(Process) 

