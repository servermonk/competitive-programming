    from decimal import Decimal
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    d={}
    cnt=0
    m=0
    for i in range(n):
        if a[i]==0:
            if b[i]==0:
                cnt+=1
            continue
        else:
            x=(Decimal(b[i])/Decimal(a[i]))
            # print(x)
            d[x]=d.get(x,0)+1
            m=max(m,d.get(x,0))
    print(cnt+m)