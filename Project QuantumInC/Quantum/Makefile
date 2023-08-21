CC = gcc
CFLAGS = -Wall -Wextra

# Source files
SRCS = main.c qubit.c quantum_register.c quantum_register.c matrix.c measurement.c error_models.c visualization.c simulation.c # Add more source files here

# Header files
HEADERS = qubit.h quantum_register.h quantum_register.h matrix.h measurement.h error_models.h visualization.h simulation.h# Add more header files here

# Object files
OBJS = $(SRCS:.c=.o)

# Executable
EXEC = main

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
