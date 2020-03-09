n,m = map(int,input().split())
arr = input().strip().split()
A = set(input().split())
B = set(input().split())
happiness = 0

for element in arr:
    if element in A: happiness += 1
    if element in B: happiness -= 1
print(happiness)
