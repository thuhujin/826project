# from gm_main import *
import os
import sys
def main():
  inputcontent = sys.stdin.read().splitlines()
  for line in inputcontent:
    argv = line.split()[0]
    inputfilename = argv
    outputfilename = inputfilename[:-3] + "output" + ".txt"
    inputfile = open(inputfilename, 'r')
    outputfile = open(outputfilename, 'w')
    lines = inputfile.read().splitlines()
    for line in lines:
      if "#" not in (line):
        src_id = line.split()[0]
        dst_id = line.split()[1]
        outputfile.write(src_id+", "+dst_id+"\n")
    inputfile.close()
    outputfile.close()
    os.system("python gm_main.py --file `pwd`/" + outputfilename +
    " --dest_dir `pwd`/output --belief_file `pwd`/priorsbelief.txt --unweighted --undirected")
    os.system("cp -rf `pwd`/output `pwd`/" + outputfilename[:-4])
main()
