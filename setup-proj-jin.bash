PREFIX=826-proj
POSTGRESPORT=5432

# this works on AWS server
mkdir 826-proj
sudo apt-get update
sudo apt-get install make
sudo apt-get install unzip
sudo apt-get install Bison
sudo apt-get install Flex
sudo apt-get install python-dev
sudo apt-get install libreadline-dev
sudo apt-get install zlib1g-dev
export LD_LIBRARY_PATH=/home/ubuntu/826-proj/postgres/lib/
# sudo vim /etc/profile
# add export LD_LIBRARY_PATH=/home/ubuntu/phase2/postgres/lib/ to the file

cd $PREFIX
PREFIX=`pwd`
wget https://github.com/postgres/postgres/archive/master.zip
unzip master.zip
rm -f master.zip
cd postgres-master
./configure --prefix=$PREFIX/postgres/
make -j 2
make install
cd $PREFIX
rm -rf postgres-master
./postgres/bin/initdb -D $PREFIX/postgres/data/
./postgres/bin/postgres -p $POSTGRESPORT -D $PREFIX/postgres/data/ >logfile 2>&1 &
sleep 3
./postgres/bin/psql -U `whoami` -p $POSTGRESPORT -d postgres -c "ALTER USER `whoami` WITH PASSWORD 'password'"
export PATH=$PREFIX/postgres/bin/:$PATH
echo "export PATH=$PREFIX/postgres/bin/:$PATH" >> $HOME/.bashrc

wget https://pypi.python.org/packages/source/p/psycopg2/psycopg2-2.5.4.tar.gz
tar -xvf psycopg2-2.5.4.tar.gz
rm -f psycopg2-2.5.4.tar.gz
cd psycopg2-2.5.4
python setup.py install --home=$PREFIX
export PYTHONPATH=$PREFIX/lib/python
echo "export PYTHONPATH=$PREFIX/lib/python" >> $HOME/.bashrc
export POSTGRESPORT=$POSTGRESPORT
echo "export POSTGRESPORT=$POSTGRESPORT" >> $HOME/.bashrc
cd $PREFIX
rm -rf psycopg2-2.5.4

sudo apt-get install s3cmd
s3cmd --configure
s3cmd get s3://826projectdata/ . --recursive

tar -xvf data.tar.gz
tar -xvf datasets-phase3.tar.gz
tar -xvf graphminer.tar.gz
rm -f graphminer.tar.gz
cd graphminer
sed -i "s/^GM_DB_USER.*/GM_DB_USER = \"`whoami`\"/" gm_params.py
sed -i "s/^GM_DB_PORT.*/GM_DB_PORT = $POSTGRESPORT/" gm_params.py
make all
