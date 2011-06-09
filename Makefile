CC = g++
COMPILE_OPTS = -I/usr/local/include
LINK_OPTS = -L/usr/local/lib -lcppunit -ldl
RUNNER = TestRunner

all:
	# Choose one of them: 'make first' or 'make last'.

first: fraction.first.o FractionTest.o TestRunner.o
	g++ $(LINK_OPTS) fraction.first.o FractionTest.o TestRunner.o -o $(RUNNER)
	./$(RUNNER)

last: fraction.last.o FractionTest.o TestRunner.o
	g++ $(LINK_OPTS) fraction.last.o FractionTest.o TestRunner.o -o $(RUNNER)
	./$(RUNNER)

fraction.first.o: fraction.h
fraction.last.o: fraction.h

.cpp.o:
	g++ $(COMPILE_OPTS) -c $< -o $@

clean:
	rm -f $(RUNNER) *.o

