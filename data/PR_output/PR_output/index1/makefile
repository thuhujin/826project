all:
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/as-skitter.ungraph-75000.txt --dest_dir `pwd`/output1  --unweighted --undirected > log1.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/ca-AstroPh.txt --dest_dir `pwd`/output2  --unweighted --undirected > log2.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/cit-HepPh.txt --dest_dir `pwd`/output3  --unweighted --undirected > log3.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/cit-HepTh.txt --dest_dir `pwd`/output4  --unweighted --undirected > log4.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/com-amazon.ungraph-75000.txt --dest_dir `pwd`/output5  --unweighted --undirected > log5.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/com-dblp.ungraph-75000.txt --dest_dir `pwd`/output6  --unweighted --undirected > log6.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/email-Enron.ungraph.txt --dest_dir `pwd`/output7  --unweighted --undirected > log7.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/email-EuAll.txt --dest_dir `pwd`/output8 --unweighted --undirected > log8.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/p2p-Gnutella31.txt --dest_dir `pwd`/output9  --unweighted --undirected > log9.txt
	python ../../gm_main.py --file /afs/andrew.cmu.edu/usr14/jinh/phase2/data/soc-Slashdot0811-75000.txt --dest_dir `pwd`/output10  --unweighted --undirected > log10.txt

unit:
	chmod a+rwx `pwd`
	python preprocess_unit.py < inputfilelist_unit.txt

install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm *.pyc

