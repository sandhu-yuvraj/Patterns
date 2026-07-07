#Rectangular Pattern
n = int(input("Enter number of rows: "))
m = int(input("Enter number of columns: "))
for i in range(1,n+1):
    for j in range(m):
        print(i , end=" ")
    print()
