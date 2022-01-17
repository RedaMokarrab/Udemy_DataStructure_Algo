.PHONY: clean All

All:
	@echo "----------Building project:[ FacebookInterview - Debug ]----------"
	@cd "FacebookInterview" && "$(MAKE)" -f  "FacebookInterview.mk"
clean:
	@echo "----------Cleaning project:[ FacebookInterview - Debug ]----------"
	@cd "FacebookInterview" && "$(MAKE)" -f  "FacebookInterview.mk" clean
