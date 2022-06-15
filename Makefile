build:
	g++ *.cpp -static
	make run
release:
	g++ *.cpp -static -O3

run:
	./a.exe

clean:
	rm a.exe