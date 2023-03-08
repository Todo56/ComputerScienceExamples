myList = [27, 19, 36, 42, 16, 89, 21,16,55]
upperBound = 8
lowerBound = 0
item = int(input("Please enter item to be found"))
found = False
index = lowerBound
while True:
    if item == myList[index]:
        found = True
    index = index + 1
    if found == True or upperBound < index:
        break;
if found:
    print("Item found in index " + str(index-1))
else:
    print("Item not found")

