x = int(raw_input())
count = 0
if x<11:
	print(0)
	exit()
y = 1
a = 0
while(int(str(y) + str(y)) <= x):
	y = y+1
	a = a+1
print(a)


