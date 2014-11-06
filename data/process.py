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

mkdir index0
mkdir index1
mkdir index2
mkdir index3
mkdir index4
mkdir index5
mkdir index6
mkdir index7
mkdir index8
mkdir indexall

cp makefile index0
cp makefile index1
cp makefile index2
cp makefile index3
cp makefile index4
cp makefile index5
cp makefile index6
cp makefile index7
cp makefile index8
cp makefile indexall

        mkdir output1
        mkdir output2
        mkdir output3
        mkdir output4
        mkdir output5
        mkdir output6
        mkdir output7
        mkdir output8
        mkdir output9
        mkdir output10
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/as-skitter.ungraph-75000.txt --dest_dir `pwd`/output1  --unweighted --undirected > log1.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/ca-AstroPh.txt --dest_dir `pwd`/output2  --unweighted --undirected > log2.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/cit-HepPh.txt --dest_dir `pwd`/output3  --unweighted --undirected > log3.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/cit-HepTh.txt --dest_dir `pwd`/output4  --unweighted --undirected > log4.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/com-amazon.ungraph-75000.txt --dest_dir `pwd`/output5  --unweighted --undirected > log5.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/com-dblp.ungraph-75000.txt --dest_dir `pwd`/output6  --unweighted --undirected > log6.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/email-Enron.ungraph.txt --dest_dir `pwd`/output7  --unweighted --undirected > log7.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/email-EuAll.txt --dest_dir `pwd`/output8 --unweighted --undirected > log8.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/p2p-Gnutella31.txt --dest_dir `pwd`/output9  --unweighted --undirected > log9.txt
        python gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/soc-Slashdot0811-75000.txt --dest_dir `pwd`/output10  --unweighted --undirected > log10.txt
