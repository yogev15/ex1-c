FLAGS= -Wall -g

power.o: power.c Mymath.h
	gcc $(FLAGS) -c power.c

basicMath.o: basicMath.c Mymath.h
	gcc $(FLAGS) -c basicMath.c
	
main.o: main.c Mymath.h
	gcc $(FLAGS) -c main.c
	
mymaths: power.o basicMath.o
	ar -rcs libymymath.a power.o basicMath.o
		
mymathd: power.o basicMath.o
	gcc $(FLAGS)-shared -o libmyMath.so power.o basicMath.o

mains: main.o mymaths
	gcc $(FLAGS) -o mains main.o libmyMath.a
		
maind: main.o mymathd
	gcc $(FLAGS)-o maind main.o ./libmyMathd.so

all: mains maind mymaths mymathd

.PHONEY: clean all
clean: 
	rm -f *.o *.a *.so maind mains
