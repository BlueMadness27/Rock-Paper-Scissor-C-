CXX	=	g++
CXXFLAGS	=	-Wall	-std=c++17

TARGET	=	rps

OBJS=	Main.o	RPSGame.o

$(TARGET):	$(OBJS)
	$(CXX)	$(CXXFLAGS)	-o	$(TARGET)	$(OBJS)

main.o: Main.cpp RPSGame.hpp
	$(CXX) $(CXXFLAGS) -c Main.cpp

RPSGame.o:	RPSGame.cpp	RPSGame.hpp
	$(CXX)	$(CXXFLAGS)	-c	RPSGame.cpp

clean:
	rm	-f	*.o	$(TARGET)
