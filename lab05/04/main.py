from decimal import Decimal

x = 99.99
print(x / 10)
print(x / 10 + 0.001)
print(int(x / 10 + 0.001))
print(f"{x:.20f}")

print(round(x / 10 + 0.001))

x = Decimal("99.99")
print(int(x / 10 + Decimal("0.001")))
