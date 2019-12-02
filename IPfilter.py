with open("input.txt", "r") as f:
    p = f.read()
    p = p.split()

d = []
numbers = ["0", "1", "2", "3", "4", "5","6", "7"," 8", "9"]
with open("output.txt", "w") as f:
    for item in p:
         if "." in item:
            k = item.split(".")
            if len(k) == 4 and k[0][0] in numbers:
                d.append(item)

    c = set(d)

    for item in c:
        f.write(item + "\n")
