#Triangular Pattern
row = int(input("Enter number of rows: "))
for row in range (1,row+1):
    for col in range (row):
        print(row, end=" ")
    print()
