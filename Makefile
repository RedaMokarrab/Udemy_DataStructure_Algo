.PHONY: clean All

All:
	@echo "----------Building project:[ 072_MergeSortedArrays - Release ]----------"
	@cd "072_MergeSortedArrays" && "$(MAKE)" -f  "072_MergeSortedArrays.mk"
clean:
	@echo "----------Cleaning project:[ 072_MergeSortedArrays - Release ]----------"
	@cd "072_MergeSortedArrays" && "$(MAKE)" -f  "072_MergeSortedArrays.mk" clean
