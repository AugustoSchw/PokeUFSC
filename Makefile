compile: ./main.cpp
	g++ -c ./src/shared.cpp
	g++ -c ./src/Char.cpp
	g++ -c ./src/Game.cpp
	g++ -c ./main.cpp
	g++ main.o Char.o Game.o shared.o -o app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

run:
	./app

clean:
	rm *.o app

