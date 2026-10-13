p = list(map(int, input().replace('/', ' ').split()))
while len(p) < 8:
    p += list(map(int, input().replace('/', ' ').split()))
a, b, c, d, e, f, g, h = p

n1 = a * d + c * b
d1 = b * d
n2 = e * h + g * f
d2 = f * h

diff = n1 * d2 - n2 * d1
if d1 * d2 < 0:
    diff = -diff

if diff > 0:
    print(1)
elif diff < 0:
    print(-1)
else:
    print(0)
