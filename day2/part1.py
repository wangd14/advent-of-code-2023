f = open("input.txt", "r")

sumId = 0
sumMult = 0
count=0
for line in f:

    l = line.split()
    print(l)

    tmpId = int(l[1][:-1])
    print(tmpId)

    tmpBlue = 0
    tmpRed = 0
    tmpGreen = 0
    minTmpBlue = 0
    minTmpRed = 0
    minTmpGreen = 0

    validGame = True
    for i in range(2,len(l),2):
        tmpVal = int(l[i])
        tmpColor = l[i+1]
        if(tmpColor[:4] == "blue"):
            tmpBlue+=tmpVal
        elif(tmpColor[:3] == "red"):
            tmpRed+=tmpVal
        elif(tmpColor[:5] == "green"):
            tmpGreen+=tmpVal
        if(tmpColor[-1]==";"):
            print("Blue", tmpBlue, "Red", tmpRed, "Green", tmpGreen)
            minTmpBlue = max(minTmpBlue, tmpBlue)
            minTmpRed = max(minTmpRed, tmpRed)
            minTmpGreen = max(minTmpGreen, tmpGreen)
            if(tmpBlue<=14 and tmpRed <= 12 and tmpGreen <= 13):
                tmpBlue = 0
                tmpRed = 0
                tmpGreen = 0
            else:
                validGame=False
    print("Blue", tmpBlue, "Red", tmpRed, "Green", tmpGreen)
    minTmpBlue = max(minTmpBlue, tmpBlue)
    minTmpRed = max(minTmpRed, tmpRed)
    minTmpGreen = max(minTmpGreen, tmpGreen)
    if(tmpBlue<=14 and tmpRed <= 12 and tmpGreen <= 13):
        tmpBlue = 0
        tmpRed = 0
        tmpGreen = 0
    else:
        validGame=False
    
    if(validGame):
        print("Valid^")
        sumId+=tmpId
    mult = minTmpGreen*minTmpBlue*minTmpRed
    sumMult += mult
    print(mult)
    

    if(count==3):
        break
    #count+=1



print(sumId)
print(sumMult)