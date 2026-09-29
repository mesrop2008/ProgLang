rows = [list(map(int, input().split())) for i in (1, 2, 3)]
print("1) rows:        ", rows)
cols = list(zip(*rows))
print("2) zip(*rows):  ", cols)
sums = list(map(sum, cols))
print("3) map(sum,...):", sums)
print("4) print(*sums):", *sums)
