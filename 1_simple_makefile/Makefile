# Example - 1

# .DEFAULT_GOAL := generate

# .PHONY: all say_hello generate clean

# all: say_hello generate

# say_hello:
# 	@echo "Hello World"

# generate:
# 	@echo "Creating empty text files..."
# 	touch file-{1..10}.txt 

# clean:
# 	@echo "cleaning up..."
# 	rm *txt

##############################

# Example - 2

# CC := gcc
# CC := ${CC}

# all:
# 	@echo ${CC}

##############################

#Example - 3
# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CC = gcc                        # compiler to use

LINKERFLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all: ${BINS}

%: %.o
	@echo "Checking.."
	${CC} ${LINKERFLAG} $< -o $@

%.o: %.c
    @echo "Creating object.."
    ${CC} -c $<

clean:
    @echo "Cleaning up..."
    rm -rvf *.o ${BINS}