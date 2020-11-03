import os

for i in range(1, 13 + 1):
    os.rename('exercises'+str(i)+'.c', 'lab1_exercises'+str(i)+'.c')
