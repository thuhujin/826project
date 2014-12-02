import os
infile = open("com-dblp.ungraph-75000.txt", 'r')

line = infile.readline()
count = 0
components = []
while line:
    con_com_id = int(line.split(',')[1])
    if con_com_id not in components:
        components.append(con_com_id)
    con_com_id = int(line.split(',')[0])
    if con_com_id not in components:
        components.append(con_com_id)
    line = infile.readline()
    count = count + 1
    if count % 5000 == 2500:
        print count
print subdir, count, len(components)
