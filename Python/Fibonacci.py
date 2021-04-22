n = int(input("Please enter a number: "))
ft = 0
st = 1

print("The fibonacci series upto", n, "terms: ")
print(ft,", ", st)
for i in range(3,n+1):
	nt = ft + st
	print(", ", nt)
	ft = st
	st = nt
print("End of program!")
