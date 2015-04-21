CXX = g++
CC = g++

all:		main

Student_info.o:	Student_info.cc Student_info.h

grade.o:	grade.cc grade.h median.h Student_info.h

median.o:	median.cc median.h

test_extract_fails.o: test_extract_fails.cpp test_extract_fails.h

main.o:	main.cc grade.h median.h Student_info.h test_extract_fails.h

main:		main.o grade.o median.o Student_info.o test_extract_fails.o

test:		all
	./main <../data/single_grade
	./main <../data/single_grade
	./main <../data/grades
	./main <../data/grades

clobber:
	rm -f *.o *.exe core main
