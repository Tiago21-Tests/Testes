# makefile

all: first myapp run clean

first: 
	g++ -c ./src/my_vector.cpp -o ./objs/my_vector.o

myapp:
	g++ ./src/main.cpp ./objs/my_vector.o -o ./app/app.out

run:
	./app/app.out

clean:
	rm ./objs/*.o
