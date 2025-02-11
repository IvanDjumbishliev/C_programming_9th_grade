safeint.o: safeint.c safeint.h
	gcc -c safeint.c

safeadd.exe: safeadd.o safeint.o
	gcc -o safeadd.exe safeadd.o safeint.o

safedivide.exe: safedivide.o safeint.o
	gcc -o safedivide.exe safedivide.o safeint.o

safesubstract.exe: safesubstract.o safeint.o
	gcc -o safesubstract.exe safesubstract.o safeint.o

safemultiply.exe: safemultiply.o safeint.o
	gcc -o safemultiply.exe safemultiply.o safeint.o

safesubstract.o: safesubstract.c safeint.h until.h
	gcc -c safesubstract.c -o safesubstract.o

safedivide.o: safedivide.c safeint.h until.h
	gcc -c safedivide.c -o safedivide.o

safemultiply.o: safemultiply.c safeint.h until.h
	gcc -c safemultiply.c -o safemultiply.o

safeadd.o: safeadd.c safeint.h until.h
	gcc -c safeadd.c -o safeadd.o

clean:
	del *.o *.exe