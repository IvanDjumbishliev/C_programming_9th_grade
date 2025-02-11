all: help.exe strcompare.exe strconcat.exe strlength.exe

help.exe: main.o main.c
	gcc main.o -o help.exe 

main.o: main.c
	gcc -c main.c -o main.o

mystrings.o: mystrings.c
	gcc -c mystrings.c -o mystrings.o

strcompare.exe: mystrings.o strcompare.c
	gcc mystrings.o strcompare.c -o strcompare.exe

strconcat.exe: mystrings.o strconcat.c
	gcc mystrings.o strconcat.c -o strconcat.exe

strlength.exe: mystrings.o strlength.clean
	gcc mystrings.o strlength.c -o strlength.exe

clean:
	del *.o *.exe