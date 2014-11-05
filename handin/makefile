all:
	chmod a+rwx `pwd`
	python preprocess.py < inputfilelist.txt

unit:
	chmod a+rwx `pwd`
	python preprocess_unit.py < inputfilelist_unit.txt

install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm *.pyc
