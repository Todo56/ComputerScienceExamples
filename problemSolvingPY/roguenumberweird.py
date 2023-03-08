rogueValue = -1
total = 0
count = 0

number = input("Input a number")

while number != rogueValue:
    count = count + 1
    total = total + int(number);
    number = input("Give it another try\n")

if(count > 0):
    average = total /count
    print("avg: " +str(average))
