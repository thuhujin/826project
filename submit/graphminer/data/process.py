import os
subdirs = [x[0] for x in os.walk(".")]
for subdir in subdirs:
    if subdir != '.' and subdir != "./email-EuAll":
        infile = open(subdir+"/kcore_conncomp.csv", 'r')
        line = infile.readline()
        count = 0
        components = []
        while line:
            con_com_id = int(line.split(',')[1])
            if con_com_id not in components:
                components.append(con_com_id)
            line = infile.readline()
            count = count + 1
        print subdir, count, len(components)
