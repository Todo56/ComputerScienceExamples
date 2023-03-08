period = 0
carnum = 0
earned = 0
period = input("Input rental period\n")
carnum = input("Input the first carnum\n")
carnum = int(carnum)
while (carnum != 0):
    if(6 < int(period)):
        earned = earned + (float(period) * float(5000) * 0.75)
    else:
        earned = earned + (float(period) * float(5000))
    carnum = input("Input the next carnum\n")
    period = input("Input the next period\n")
    carnum = int(carnum)
print("Amount earned " + str(earned))
