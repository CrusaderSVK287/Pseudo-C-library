CC = gcc
CFLAGS = -Wall -Werror

ifeq "$(CC)" "gcc"
CFLAGS += -std=c11
endif

EXAMPLEDIR = examples/
EXECUTABLE = program

CCOMMAND = $(CC) $< $(CFLAGS) -o $(EXECUTABLE)

all: --buildbegin ifelse operators function loops switch operations bubblesort

--buildbegin:
ifeq "$(CC)" "gcc"
	@echo "----- Running C examples -----"
else
	@echo "----- Running C++ examples -----"
endif

ifelse: $(EXAMPLEDIR)ifelse.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

operators: $(EXAMPLEDIR)operators.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

function: $(EXAMPLEDIR)function.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

loops: $(EXAMPLEDIR)loops.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

switch: $(EXAMPLEDIR)switch.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

operations: $(EXAMPLEDIR)operations.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

bubblesort: $(EXAMPLEDIR)bubblesort.c
	@$(CCOMMAND)
	@echo --- $@ ---
	@./$(EXECUTABLE)
	@rm ./$(EXECUTABLE)

cpp:
	@make CC=g++ --no-print-directory