CC = gcc
CFLAGS = -Wall -Werror

ifeq "$(CC)" "gcc"
CFLAGS += -std=c11
endif

EXAMPLEDIR = examples/
EXECUTABLE = program

CCOMMAND = $(CC) $< $(CFLAGS) -o $(EXECUTABLE)

all: --buildbegin
	@make ifelse operators function loops switch operations bubblesort --no-print-directory

--buildbegin:
ifeq "$(CC)" "gcc"
	@echo "----- Running C examples -----"
else
	@echo "----- Running C++ examples -----"
endif

%: $(EXAMPLEDIR)%.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

cpp:
	@make CC=g++ --no-print-directory