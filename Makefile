proggg:image10.o  main.o
	gcc image10.o main.o -o proggg -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer   -g
main.o:main.c 
	gcc -c main.c -g
image10.o:image10.c
	gcc -c image10.c -g
 
