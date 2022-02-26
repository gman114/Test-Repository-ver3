GCC = gcc
PYTHON = python3
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

#$(PYTHON) prototype_update_script.py https://github.com/gman114/Test-Repository-ver3.git

#build
#and check status
build:
	$(GCC) main.c AddSubtract.c MultDiv.c PowLog.c -o build -lm
	
test:
	@echo $(mkfile_path)
	
clean:
	rm build