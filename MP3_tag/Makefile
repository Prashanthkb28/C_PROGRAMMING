OBJ:=$(patsubst %.c, %.o, $(wildcard *.c))
r.exe : $(OBJ)
    gcc -o $@ $^
clean :
    rm *.exe *.o

