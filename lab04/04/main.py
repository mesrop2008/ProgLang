a = 'a'
a = chr(ord(a) + 10)
print(a, end='')
a = chr(ord(a) + 250)
print(a)
print(ord('a'), ord('a') + 10, ord('k') + 250, hex(ord(a)))
