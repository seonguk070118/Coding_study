n = int(input(), 16)
for i in range(1, 16):
    result = n * i
    print(f'{n:X}*{i:X}={result:X}')
