.PHONY: clean All

All:
	@echo "----------Building project:[ 14_02_BreadthFirstSearch - Debug ]----------"
	@cd "14_02_BreadthFirstSearch" && "$(MAKE)" -f  "14_02_BreadthFirstSearch.mk"
clean:
	@echo "----------Cleaning project:[ 14_02_BreadthFirstSearch - Debug ]----------"
	@cd "14_02_BreadthFirstSearch" && "$(MAKE)" -f  "14_02_BreadthFirstSearch.mk" clean
