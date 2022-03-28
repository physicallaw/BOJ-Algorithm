while True:
    try:
        n = int(input())
        i = 1
        while (i % n != 0):
            i = i * 10 + 1
        print(len(str(i)))
    except:
        break