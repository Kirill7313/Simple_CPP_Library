CC = g++
IF1 = Main.cpp
IF2 = ProjectLib.cpp
RES = result

all:
	$(CC) $(IF1) $(IF2) -o $(RES)
clean:
	rm $(RES)
