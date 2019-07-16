a,b=input().split()
b=int(b)
a=int(a)
for i in range(a+1,b):
    if i%2 == 0:
        print(i,end=' ')
