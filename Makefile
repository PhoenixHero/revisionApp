build:
	g++ *.cpp -static
	make run
	make clean
release:
	g++ *.cpp -static -O3

run:
	./a.exe

clean:
	rm a.exe