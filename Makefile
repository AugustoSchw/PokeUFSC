# Wildcard faz ele retornar todos os arquivos .cpp de src
SRC := $(wildcard ./src/*.cpp) ./main.cpp

# Objetivo (todos .o de src)
OBJ := $(SRC:.cpp=.o)

TARGET := app

CXX := g++

# Flags necessarias para execucao
CXXFLAGS := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

# Regra em que ele vai compilar o executavel
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(CXXFLAGS)

# Utilizacao da regra criada nas linhas 9 e 10 (% é coringa, ou seja, qualquer arquivo terminando em .o a partir de um .cpp)
%.o: %.cpp
	$(CXX) -c $< -o $@
	

# .PHONY: Tudo listado nessa linha a seguir se tratam de regras de comandos
.PHONY: clean run

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f ./src/*.o ./main.o $(TARGET)