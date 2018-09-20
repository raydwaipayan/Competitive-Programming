str=input()
l=[]
for i in str.split(' '):
    if i not in l:
        l.append(i)
for i in l:
    print(i,end=" ")



    