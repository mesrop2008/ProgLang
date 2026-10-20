a = 'Hello world'
b = a
c = a[:]
print(id(a), id(b), id(c))
print(b is a, c is a)

a += '!'
print(a, b, c)
print(id(a), id(b), id(c))

x = [1, 2, 3]
y = x
z = x[:]
print(y is x, z is x)
x.append(4)
print(x, y, z)
