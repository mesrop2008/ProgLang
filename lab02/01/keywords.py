import keyword

for kw in ("def", "class", "for", "import", "None"):
    try:
        exec(kw + " = 1")
        print(kw, "- OK")
    except SyntaxError as e:
        print(kw, "- SyntaxError:", e.msg)

print("is keyword:", [(k, keyword.iskeyword(k)) for k in ("def", "class", "for", "import", "None")])
