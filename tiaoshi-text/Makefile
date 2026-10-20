CC=gcc
process=proc.exe
arc=$(wildcard *.c)
obj=$(arc:.c=.o)
$(process):$(obj)
	$(CC) -o $@ $^
%.o:%.c
	$(CC) -c $< -o $@
.PHONY:clean
clean:
	rm -f $(obj) $(process)
