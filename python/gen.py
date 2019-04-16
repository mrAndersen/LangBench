import time

strings = open("../set.txt", "r").read().split("\n")

i = 0
start = int(round(time.time() * 1000))

for string in strings:
    if string.find("abcde") != -1:
        i += 1

end = int(round(time.time() * 1000)) - start
print("Python in {}ms - {}".format(end, i))
