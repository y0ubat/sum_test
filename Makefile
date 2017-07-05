sum_1_100: sum.o main.o
	gcc -o sum_1_100 sum.o main.o
sum.o:	sum.c sum.h
	gcc -c -o sum.o sum.c
main.o:	main.c sum.h
	gcc -c -o main.o main.c
