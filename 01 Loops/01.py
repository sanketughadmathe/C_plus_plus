n = int(input("Enter the value of n: \n"))

# print(type(n))
for i in range(n):
    for j in range(n):
        if (i == 0 or i == n-1):
            print("* ", end="")
        elif (j == 0 or j == n-1):
            print("* ", end="")
        else:
            print(" ")
        print("*", end="")
    # print("\n")
