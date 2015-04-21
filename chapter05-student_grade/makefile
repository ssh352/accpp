CXX = g++
CC = g++

all:		main 

Student_info.o:	Student_info.cc Student_info.h

grade.o:	grade.cc grade.h median.h Student_info.h

extract_fails.o:	extract_fails.cc extract_fails.h Student_info.h

main.o:	 main.cc grade.h median.h Student_info.h extract_fails.h

median.o:	median.cc median.h

main:	main.o grade.o median.o Student_info.o extract_fails.o

test:		all
	./main <../data/single_grade
	./main <../data/single_grade
	./main <../data/grades
	./main <../data/grades

clobber:
	rm -f *.o *.exe core main
