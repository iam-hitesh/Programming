x = int(input().strip())
y = list(map(int,input().strip().split(" ")[:x]))
y.sort()
p=0

temp = y[x-1]

for i in range(len(y)):
    if( temp==y[i]):
        p+=1
print(p)
