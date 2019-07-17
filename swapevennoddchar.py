u=input()
o=len(u)
c=[]
for y in range(0,o,2):
    c.append(u[y:y+2][::-1])
print(''.join(c))
