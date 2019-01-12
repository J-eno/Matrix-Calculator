CXX = g++
CXXFLAGS = -g

Calc: Matrix.o
	$(CXX) $(CXXFLAGS) Matrix.o Calc.cpp -o Calc

Matrix.o: Matrix.cpp Matrix.h
	$(CXX) $(CXXFLAGS) -c Matrix.cpp

clean:
	rm *.o
	rm *~

run:
	./Calc
