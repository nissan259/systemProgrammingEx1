all: mains maindrec maindloop loops loopd recursives recursived

mains: main.o libclassrec.a
	gcc -o mains main.o libclassrec.a

maindrec: main.o libclassrec.so
	gcc -o maindrec main.o ./libclassrec.so

maindloop: main.o libclassloops.so
	gcc -o maindloop main.o ./libclassloops.so

loops: libclassloops.a

loopd: libclassloops.so

recursives: libclassrec.a

recursived: libclassrec.so

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o


libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o  libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so : basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o




main.o: main.c NumClass.h
	gcc -Wall -g -c main.c -o main.o

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c -o basicClassification.o

advancedClassificationLoop.o: advancedClassificationLoop.c  NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c  -o advancedClassificationLoop.o

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o


clean:
	rm -f *.o *.a *.so mains maindrec maindloop

.PHONY: all clean