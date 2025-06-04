h = input()
dna = input()
prot = input()
p = int(input())

for i in range(p):
    ab = input().split(" ")
    a = int(ab[0])
    b = int(ab[1])
    if a > b:
        a, b = b, a

    tam = a - b
    new_prot = prot[a-1:b+tam]
    print(sum([1 for j in range(len(dna)-tam) if new_prot == dna[j:j+tam+1]]))
 