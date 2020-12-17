.PHONY: clean All

All:
	@echo "----------Building project:[ pb57_ex3 - Debug ]----------"
	@cd "pb57_ex3" && "$(MAKE)" -f  "pb57_ex3.mk"
clean:
	@echo "----------Cleaning project:[ pb57_ex3 - Debug ]----------"
	@cd "pb57_ex3" && "$(MAKE)" -f  "pb57_ex3.mk" clean
