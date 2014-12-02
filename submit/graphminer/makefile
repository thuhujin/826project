all:
	chmod a+rwx `pwd`
	# sed -i 's/\t/ /g' ./data/ca-AstroPh.txt
	# sed -i 's/\t/ /g' ./data/cit-HepTh.txt
	# sed -i 's/\t/ /g' ./data/cit-HepPh.txt
	# sed -i 's/\t/ /g' ./data/email-Enron.ungraph.txt
	# sed -i 's/\t/ /g' ./data/email-EuAll.txt
	# sed -i 's/\t/ /g' ./data/p2p-Gnutella31.txt
	# awk -F "" -v OFS=""  '$$NF="" {print}1' ./data/cit-Cora.txt > ./data/cit-Cora.txt.new
	# sed -e '1d' ./data/soc-hamsterster.undir.txt > ./data/soc-hamsterster.undir.txt.new
	rm -rf output/as-Caida.undir
	rm -rf output/as-skitter.ungraph-75000
	rm -rf output/bio-protein-undir
	rm -rf output/ca-AstroPh
	rm -rf output/cit-Cora
	rm -rf output/cit-HepPh
	rm -rf output/cit-HepTh
	rm -rf output/com-amazon.ungraph-75000
	rm -rf output/com-dblp.ungraph-75000
	rm -rf output/email-Enron.ungraph
	rm -rf output/email-EuAll
	rm -rf output/p2p-Gnutella31
	rm -rf output/soc-digg
	rm -rf output/soc-flickr-75000
	rm -rf output/soc-hamsterster.undir
	rm -rf output/soc-pokec-75000
	rm -rf output/soc-Slashdot0811-75000
	rm -rf output/soc-Youtube-75000.undir
	rm -rf output/soft-jdkdependency
	rm -rf output/text-spanishbook
	mkdir as-Caida.undir
	mkdir as-skitter.ungraph-75000
	mkdir bio-protein-undir
	mkdir ca-AstroPh
	mkdir cit-Cora
	mkdir cit-HepPh
	mkdir cit-HepTh
	mkdir com-amazon.ungraph-75000
	mkdir com-dblp.ungraph-75000
	mkdir email-Enron.ungraph
	mkdir email-EuAll
	mkdir p2p-Gnutella31
	mkdir soc-digg
	mkdir soc-flickr-75000
	mkdir soc-hamsterster.undir
	mkdir soc-pokec-75000
	mkdir soc-Slashdot0811-75000
	mkdir soc-Youtube-75000.undir
	mkdir soft-jdkdependency
	mkdir text-spanishbook
	python gm_main.py --delim ' ' --file `pwd`/data/as-Caida.undir.txt --dest_dir `pwd`/as-Caida.undir --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --file `pwd`/data/as-skitter.ungraph-75000.txt --dest_dir `pwd`/as-skitter.ungraph-75000 --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --delim ' ' --file `pwd`/data/bio-protein-undir.txt --dest_dir `pwd`/bio-protein-undir --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --delim ' ' --file `pwd`/data/ca-AstroPh.txt --dest_dir `pwd`/ca-AstroPh --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/cit-Cora.txt.new --dest_dir `pwd`/cit-Cora --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/cit-HepPh.txt --dest_dir `pwd`/cit-HepPh --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/cit-HepTh.txt --dest_dir `pwd`/cit-HepTh --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --file `pwd`/data/com-amazon.ungraph-75000.txt --dest_dir `pwd`/com-amazon.ungraph-75000 --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --file `pwd`/data/com-dblp.ungraph-75000.txt --dest_dir `pwd`/com-dblp.ungraph-75000 --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --delim ' ' --file `pwd`/data/email-Enron.ungraph.txt --dest_dir `pwd`/email-Enron.ungraph --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --delim ' ' --file `pwd`/data/email-EuAll.txt --dest_dir `pwd`/email-EuAll --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/p2p-Gnutella31.txt --dest_dir `pwd`/p2p-Gnutella31 --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/soc-digg.txt --dest_dir `pwd`/soc-digg --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --file `pwd`/data/soc-flickr-75000.txt --dest_dir `pwd`/soc-flickr-75000 --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/soc-hamsterster.undir.txt.new --dest_dir `pwd`/soc-hamsterster.undir --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --file `pwd`/data/soc-pokec-75000.txt --dest_dir `pwd`/soc-pokec-75000 --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --file `pwd`/data/soc-Slashdot0811-75000.txt --dest_dir `pwd`/soc-Slashdot0811-75000 --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --file `pwd`/data/soc-Youtube-75000.undir.txt --dest_dir `pwd`/soc-Youtube-75000.undir --belief_file `pwd`/priorsbelief.txt --unweighted --undirected
	python gm_main.py --delim ' ' --file `pwd`/data/soft-jdkdependency.txt --dest_dir `pwd`/soft-jdkdependency --belief_file `pwd`/priorsbelief.txt --unweighted
	python gm_main.py --delim ' ' --file `pwd`/data/text-spanishbook.txt --dest_dir `pwd`/text-spanishbook --belief_file `pwd`/priorsbelief.txt --unweighted
	mkdir output
	mv as-Caida.undir/ output/
	mv as-skitter.ungraph-75000/ output/
	mv bio-protein-undir/ output/
	mv ca-AstroPh/ output/
	mv cit-Cora/ output/
	mv cit-HepPh/ output/
	mv cit-HepTh/ output/
	mv com-amazon.ungraph-75000/ output/
	mv com-dblp.ungraph-75000/ output/
	mv email-Enron.ungraph/ output/
	mv email-EuAll/ output/
	mv p2p-Gnutella31/ output/
	mv soc-digg/ output/
	mv soc-flickr-75000/ output/
	mv soc-hamsterster.undir/ output/
	mv soc-pokec-75000/ output/
	mv soc-Slashdot0811-75000/ output/
	mv soc-Youtube-75000.undir/ output/
	mv soft-jdkdependency/ output/
	mv text-spanishbook/ output/
	# make unit

unit:
	chmod a+rwx `pwd`
	rm -rf output/dataset1
	rm -rf output/dataset2
	rm -rf output/dataset3
	rm -rf output/dataset4
	rm -rf output/dataset5
	mkdir output/dataset1
	mkdir output/dataset2
	mkdir output/dataset3
	mkdir output/dataset4
	mkdir output/dataset5
	python preprocess_unit.py < inputfilelist_unit.txt
	rm -rf dataset1.output.txt
	rm -rf dataset2.output.txt
	rm -rf dataset3.output.txt
	rm -rf dataset4.output.txt
	rm -rf dataset5.output.txt
install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm *.pyc
