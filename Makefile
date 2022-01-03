.PHONY: clean All

All:
	@echo "----------Building project:[ AlgoAndDatastructures - Debug ]----------"
	@cd "AlgoAndDatastructures" && "$(MAKE)" -f  "AlgoAndDatastructures.mk"
clean:
	@echo "----------Cleaning project:[ AlgoAndDatastructures - Debug ]----------"
	@cd "AlgoAndDatastructures" && "$(MAKE)" -f  "AlgoAndDatastructures.mk" clean
