all:	moj

lib:	lib/libmojlib.a

lib/libmojlib.a:	src/mojlib.c 
		gcc -c src/mojlib.c -o bin/mojlib.o -I./include
		ar rcs lib/libmojlib.a bin/mojlib.o

moj:	src/mojprog.c lib
	gcc -I./include -L./lib -o mojprog src/mojprog.c  -lmojlib
