q = int(input())
s = "1"
for i in range(q):
    que = input().split()
    if que[0] == 1:
        # x = input()
        s += str(que[1])
        print("aaaa"+que[2])
    elif que[0] == 2:
        s.lstrip()
    else:
        ans = int(s)
        ans = ans % 998244353
        print(ans)