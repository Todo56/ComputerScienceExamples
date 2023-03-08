weighting = 10
total = 0
count = 0
while True:
    digit = input("Input the next digit")
    value = digit * weighting
    total = total + int(value)
    weighting = weighting -1
    count = count +1
    if count == 9:
        break;
remainder = total % 11
checkDigit = 11 - remainder
if checkDigit == 10:
    checkDigit = -1
print(checkDigit)
