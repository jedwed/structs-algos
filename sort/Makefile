CC = gcc
CFLAGS = -Wall -Werror -ggdb
DEPS = sort.h 
TARGETS = bubble_sort insertion_sort selection_sort quick_sort merge_sort random_quick_sort

all: $(TARGETS)

bubble_sort: bubble_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^
	
insertion_sort: insertion_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^

selection_sort: selection_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^

quick_sort: quick_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^

merge_sort: merge_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^

random_quick_sort: random_quick_sort.o main.o sort_helpers.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(TARGETS)
