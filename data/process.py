import sys
for line in sys.stdin:
    num1 = line.split("\t")[0]
    num2 = line.split("\t")[1]

    l = (num1) + "," + (num2)
    sys.stdout.write(l)

python process.py < as-skitter.ungraph-75000.txt > 1.txt
python process.py < ca-AstroPh.txt > 2.txt
python process.py < cit-HepPh.txt > 3.txt
python process.py < cit-HepTh.txt > 4.txt
python process.py < com-amazon.ungraph-75000.txt > 5.txt
python process.py < com-dblp.ungraph-75000.txt > 6.txt
python process.py < email-Enron.ungraph.txt > 7.txt
python process.py < email-EuAll.txt > 8.txt
python process.py < p2p-Gnutella31.txt > 9.txt
python process.py < soc-Slashdot0811-75000.txt > 10.txt
