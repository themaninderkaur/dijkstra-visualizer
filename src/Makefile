CC = gcc
CFLAGS = -Wall -g
OBJ = main.o dijkstra.o graph.o visualizer.o

all: dijkstra_visualizer

dijkstra_visualizer: $(OBJ)
	$(CC) $(CFLAGS) -o dijkstra_visualizer $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o dijkstra_visualizer
