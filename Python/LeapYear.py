yr = int(input("Enter a year: "))
if(yr%4==0 and yr%100!=0 or yr%400==0):
    print("Leap Year")
else:
    print("Common Year")