a=int(input("Enter Specific Number : "))
for i in range(a):
    for j in range(a):
        if ((i==j) or (i+j==a-1)):
            print("*",end=" ")
        else:
           print(" ",end=" ")
    print()

