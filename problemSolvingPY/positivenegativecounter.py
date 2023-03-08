posCount = 0
negCount = 0
while True:
    number =int(input("Input the next number"))
    if(number > 0):
        posCount += 1
    if(0 > number):
        negCount += 1
    if(number == 0):
        break;

print("Positive Numbers:" + str(posCount) + "   Negative Numbers:" + str(negCount))
