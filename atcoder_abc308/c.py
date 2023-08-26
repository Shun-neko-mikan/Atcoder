import decimal

n = int(input())
a = []
b = []
for i in range(n):
    ai, bi = map(int, input().split())
    a.append(ai)
    b.append(bi)

ans = []
for i in range(n):
    tmp1 = a[i] + b[i]
    # a[i]/tmp1を小数点第15位まで求める
    tmp2 = decimal.Decimal(a[i]) / decimal.Decimal(tmp1)
    ans.append((float(tmp2), -(i+1)))

ans.sort(reverse=True)

for i in range(n):
    print(-ans[i][1], end=" ")
    print(ans[i][0])
