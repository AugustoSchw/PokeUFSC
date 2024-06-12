compile: ./main.cpp
	g++ -c ./src/char.cpp
	g++ -c ./main.cpp
	g++ main.o char.o -o app -lsfml-graphics -lsfml-window -lsfml-system

run:
	./app

clean:
	rm *.o app

