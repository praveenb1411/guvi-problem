z,x=input().split()
z1=list(z)
x1=list(x)
c=0
for n in range(0,len(z)):
    if z[n] != x[n]:
        c+=1
if c==1:
    print('yes')
else: 
    print('no')
