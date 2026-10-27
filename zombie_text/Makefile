zombie_lab=zombie_lab.exe
CC=gcc
arc=$(wildcard *.c)
obj=$(arc:.c=.o)
$(zombie_lab):$(obj)
	$(CC) -o $@ $^
%.o:%.c
	$(CC) -c $< -o  $@
.PHONY:clean
clean:
	rm -f $(zombie_lab) $(obj)
