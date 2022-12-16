CC = gcc
CFLAGS = -Wall -Werror -std=c11

EXAMPLEDIR = examples/
EXECUTABLE = program

CCOMMAND = $(CC) $< $(CFLAGS) -o $(EXECUTABLE)

all: ifelse operators function loops switch operations bubblesort

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