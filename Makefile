SRC := $(wildcard ./src/*.cpp) ./main.cpp	#wildcard faz ele retornar todos os arquivos .cpp de src
OBJ := $(SRC:.cpp=.o)	#objetivo (todos .o de src)

TARGET := app	#executavel

CXX := g++
CXXFLAGS := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network		#flags necessarias para execucao

$(TARGET): $(OBJ)	# Regra em que ele vai compilar o executavel
	$(CXX) $(OBJ) -o $(TARGET) $(CXXFLAGS)

%.o: %.cpp	# Utilizacao da regra criada nas linhas 9 e 10 (% é coringa, ou seja, qualquer arquivo terminando em .o a partir de um .cpp)
	$(CXX) -c $< -o $@

.PHONY: clean run	#.PHONY: Tudo listado nessa linha a seguir se tratam de regras de comandos

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f ./src/*.o ./main.o $(TARGET)