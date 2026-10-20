letters = 'abcdefghijklmnopqrstuvwxyz'
value = 1
for letter in letters:
    for i in range(100):
        globals()[letter + str(i)] = value
        value += 1

print(a0, a1, a99, b0, b99, m50, z0, z99)
names = [letter + str(i) for letter in letters for i in range(100)]
values = [globals()[name] for name in names]
print(len(names), len(set(values)), min(values), max(values))
