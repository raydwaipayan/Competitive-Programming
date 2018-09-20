n=int(input())
a=[]
b=[]
for i in range(n):
    a=[]
    inp=input().split(' ')
    for j in range(n):
        a.append(inp[j])
    b.append(a)
c=1
for i in range(n):
    for j in range(n):
        if(j>=c):
            print(0,end="")
        else:
            print(b[i][j],end="")
        if(j!=n-1):
            print(" ", end="")
    if(i==n-1):
        break
    print()
    c=c+1
