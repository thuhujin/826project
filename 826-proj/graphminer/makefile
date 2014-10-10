all:
	chmod a+rwx `pwd`
	python preprocess.py < inputfilelist.txt
install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm *.pyc
