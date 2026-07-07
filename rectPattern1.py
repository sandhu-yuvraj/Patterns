#Rectangular Pattern
n = int(input("Enter number of rows: "))
m = int(input("Enter number of columns: "))
for i in range(n+1):
    for j in range(1,m+1):
        print(j , end=" ")
    print()
