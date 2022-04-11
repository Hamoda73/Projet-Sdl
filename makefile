prog:enemy.o  main.o
	gcc enemy.o main.o -o proggg -lSDL  -lSDL_image -g
main.o:main.c 
	gcc -c main.c -g
enemy.o:enemy.c
	gcc -c enemy.c -g
