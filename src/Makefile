 CC = gcc

CFLAGS = -Wall -g


all: dijkstra_visualizer


dijkstra_visualizer: main.o graph.o dijkstra.o visualizer.o

$(CC) $(CFLAGS) -o dijkstra_visualizer main.o graph.o dijkstra.o visualizer.o


main.o: main.c graph.h dijkstra.h visualizer.h

$(CC) $(CFLAGS) -c main.c


graph.o: graph.c graph.h

$(CC) $(CFLAGS) -c graph.c


dijkstra.o: dijkstra.c dijkstra.h graph.h

$(CC) $(CFLAGS) -c dijkstra.c


visualizer.o: visualizer.c visualizer.h graph.h

$(CC) $(CFLAGS) -c visualizer.c


 clean:

rm -f *.o dijkstra_visualizer


.PHONY: clean
