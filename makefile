CC = gcc
CFLAGS = -Wall -g

all: mains maindloop maindrec libclassrec.so libclassloops.so libclassrec.a libclassloops.a main.o basicClassification.o basicClassification.o advancedClassificationRecursion.o advancedClassificationLoop.o

mains: main.o libclassrec.a 
maindloop:main.o libclassloops.so

maindrec:main.o libclassrec.so


libclassrec.so:basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so:basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.a:basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

main.o: main.c NumClass.h
	gcc -Wall -g -c main.c -o main.o

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c -o basicClassification.o

advancedClassificationRecursion.o:advancedClassificationRecursion.c NumClass.h
		gcc -Wall -g -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o

advancedClassificationLoop.o:advancedClassificationLoop.c NumClass.h
		gcc -Wall -g -c advancedClassificationLoop.c -o advancedClassificationLoop.o

.PHONY:clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec