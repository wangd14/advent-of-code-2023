f = open("input.txt", "r")

sum=0
for line in f:
    line = line.strip()
    sub = 0
    for i in range(0,len(line)):
        if(line[i].isdigit()):
            sum+=(int)(line[i])*10
            sub+=(int)(line[i])*10
            break
    for i in range(len(line)-1, -1, -1):
        if(line[i].isdigit()):
            sum+=(int)(line[i])
            sub+=(int)(line[i])
            break
    print("line:",line.strip())
    print("subSum:", sub)
    print()

print(sum)