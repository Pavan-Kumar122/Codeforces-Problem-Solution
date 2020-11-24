def distinct_substring(str):
    res = set()

    for i in range(len(str)):
        for j in range(i + 1, len(str) + 1):
            res.add(str[i:j])
    return res


n, k = input().split()

s = str(input())

get_string = distinct_substring(s)

val = 0

for sub_str in get_string:
    if len(sub_str) == int(k):
        val += 1

print(val)
