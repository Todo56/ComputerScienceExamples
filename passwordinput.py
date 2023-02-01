def start():
    password = input("Input password")
    secondPassword = input("Input your password again")
    if(password  != secondPassword):
        print("Your passwords do not match")
    else:
        for x in range(3):
            inputPassword = input("Enter password")
            if inputPassword == password:
                return True
    return False

if(start()):
    print("Correct password") 
else:
    print("Incorrect password 3 times booo")
