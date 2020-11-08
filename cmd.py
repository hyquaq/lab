import os


for i in range(1, 7):
    cmd = 'copy lab1_exercises1.c lab6_exercises'+str(i)+'.c'
    print(cmd);
    returned_value = os.system(cmd)
