CXX = g++
CC = g++

all:		main 5-234 

Student_info.o:	Student_info.cc Student_info.h

grade.o:	grade.cc grade.h median.h Student_info.h

extract_fails.o:	extract_fails.cc extract_fails.h Student_info.h

test_extract_fails.o: test_extract_fails.cpp test_extract_fails.h

main.o:	 main.cc grade.h median.h Student_info.h extract_fails.h

5-234.o:	5-234.cpp grade.h median.h Student_info.h extract_fails.h test_extract_fails.h

median.o:	median.cc median.h

main:	main.o grade.o median.o Student_info.o extract_fails.o

5-234:	5-234.o grade.o median.o Student_info.o extract_fails.o test_extract_fails.o

test:		all
	./main <../data/single_grade
	./main <../data/single_grade
	./main <../data/grades
	./main <../data/grades

test-5-234:		all
	./5-234 <../data/single_grade
	./5-234 <../data/grades
	./5-234 <../data/grades_10.txt
	./5-234 <../data/grades_100.txt
	./5-234 <../data/grades_100.txt

clobber:
	rm -f *.o *.exe core main 5-234