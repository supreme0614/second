# solution task 4 which about working with files
s = 0
for line in open("text.txt"):
    for i in range(len(line.split())):
        if len(line.split()[i]) < 5:
            s += 1
        elif len(line.split()[i]) == 5 and line.split()[i].count("."):
            s += 1
print(s)
