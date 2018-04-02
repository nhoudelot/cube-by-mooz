CFLAGS = `sdl-config --cflags`
LDLIBS = `sdl-config --libs`
all:
	g++ $(CFLAGS) $(LDLIBS) cube.C -o cube -lm -lGL -Wall -ansi -O3
	@cat ./Readme.txt
	cat cube.C | perl -pe 's/\s//g' | wc -c