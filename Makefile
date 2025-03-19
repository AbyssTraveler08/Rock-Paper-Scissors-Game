CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = main.cpp game_logic.cpp utils.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = rock_paper_scissors

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
