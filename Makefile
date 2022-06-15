build:
	g++ *.cpp -static -o test.exe
	make run
release:
	g++ *.cpp -static -O2 -o release.exe

run:
	./test.exe

clean:
	rm *.exe

fix:
	git rm -r --cached .
	git add .
	git commit -m "Fix Gitignore again"