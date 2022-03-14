GCC = gcc
PYTHON = python3
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ifeq ($(OS),Windows_NT)     # is Windows OS - file system uses backward slash
    BLANK :=
	fileSys_delim = \$(BLANK)
else						# OS is not windows - file system uses foward slash
    BLANK :=
	fileSys_delim = /$(BLANK)	
endif
rel_project_dir := SimpleCalcProgram
rel_updtScrpt_subMod_dir := Prototype-Update-Script
rel_project_dir := $(strip $(rel_project_dir)$(fileSys_delim))
rel_updtScrpt_subMod_dir := $(strip $(rel_updtScrpt_subMod_dir)$(fileSys_delim))

# build and check status
build:
	$(GCC) $(rel_project_dir)main.c $(rel_project_dir)AddSubtract.c $(rel_project_dir)MultDiv.c $(rel_project_dir)PowLog.c -o $(rel_project_dir)build -lm
	$(PYTHON) $(rel_updtScrpt_subMod_dir)prototype_update_script.py https://github.com/gman114/Test-Repository-ver3.git

# test makefile variables
test1:
	@echo $(mkfile_path)
	@echo $(fileSys_delim)
	@echo $(rel_project_dir)
	@echo $(rel_updtScrpt_subMod_dir)

# test update script
test2:
	$(PYTHON) $(rel_updtScrpt_subMod_dir)prototype_update_script.py https://github.com/gman114/Test-Repository-ver3.git

clean:
	rm $(rel_project_dir)build