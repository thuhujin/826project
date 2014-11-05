1. First run the following command, which will set up the environment necessary for the project.
  source setup-proj.bash

2. put the gm_main.py, makefile, preprocess.py, preprocess_unit.py, inputfilelist.txt, inputfilelist_unit.txt in the graphminer folder.

put the input file name in inputfilelist.txt, and input files in graphMiner folder, or put corresponding path/filename
in inputfilelist.txt and corresponding files in their paths

3. Then in the ./826-proj/graphminer folder, run
  make
Then there will be output csv files for both the test data wiki-Vote and soc-Epinion1 in folder their respective output
folders.The result are also output to the stdout.

run the following command to see result for input in inputfilelist.txt
  python preprocess.py < inputfilelist.txt
  python preprocess_unit.py < inputfilelist_unit.txt
or run
  make all
