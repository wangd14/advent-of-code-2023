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
        if(i+2<len(line)):
            if(line[i:i+3]=="one"):
                sum+=1*10
                sub+=1*10
                break
            elif(line[i:i+3]=="two"):
                sum+=2*10
                sub+=2*10
                break
            elif(line[i:i+3]=="six"):
                sum+=6*10
                sub+=6*10
                break
        if(i+3<len(line)):
            if(line[i:i+4]=="four"):
                sum+=4*10
                sub+=4*10
                break
            elif(line[i:i+4]=="five"):
                sum+=5*10
                sub+=5*10
                break
            elif(line[i:i+4]=="nine"):
                sum+=9*10
                sub+=9*10
                break
        if(i+4<len(line)):
            if(line[i:i+5]=="three"):
                sum+=3*10
                sub+=3*10
                break
            elif(line[i:i+5]=="seven"):
                sum+=7*10
                sub+=7*10
                break
            elif(line[i:i+5]=="eight"):
                sum+=8*10
                sub+=8*10
                break
    for i in range(len(line)-1, -1, -1):
        if(line[i].isdigit()):
            sum+=(int)(line[i])
            sub+=(int)(line[i])
            break
        if(i-2>0):
            if(line[i-2:i+1]=="one"):
                sum+=1
                sub+=1
                break
            elif(line[i-2:i+1]=="two"):
                sum+=2
                sub+=2
                break
            elif(line[i-2:i+1]=="six"):
                sum+=6
                sub+=6
                break
        if(i-3>0):
            if(line[i-3:i+1]=="four"):
                sum+=4
                sub+=4
                break
            elif(line[i-3:i+1]=="five"):
                sum+=5
                sub+=5
                break
            elif(line[i-3:i+1]=="nine"):
                sum+=9
                sub+=9
                break
        if(i-4>0):
            if(line[i-4:i+1]=="three"):
                sum+=3
                sub+=3
                break
            elif(line[i-4:i+1]=="seven"):
                sum+=7
                sub+=7
                break
            elif(line[i-4:i+1]=="eight"):
                sum+=8
                sub+=8
                break
    print("line:",line.strip())
    print("subSum:", sub)
    print()

print(sum)  