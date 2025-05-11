number = int(input())
mat = input().split(" ")

result = 0
while ("*" in mat):
    index = mat.index("*")
    op1 = mat[index-1]
    op2 = mat[index+1]

    nums1 = op1.split("/")
    nums2 = op2.split("/")
    res = int(nums1[0]) * int(nums2[0])
    res = f"{res}/{int(nums1[1] * int(nums2[1]))}"
    
    mat.insert(index, res)
    mat.remove("*")
    mat.remove(op1)
    mat.remove(op2)

while ("/" in mat):
    index = mat.index("/")
    op1 = mat[index-1]
    op2 = mat[index+1]

    nums1 = op1.split("/")
    nums2 = op2.split("/")
    res = int(nums1[0]) * int(nums2[1])
    res = f"{res}/{int(nums1[1]) * int(nums2[0])}"
    
    mat.insert(index, res)
    mat.remove("/")
    mat.remove(op1)
    mat.remove(op2)

ops = []
for i in range(0, len(mat)):
    if(mat[i] == "+"):
        ops.append(mat[i+1])
        nums1 = ops[0].split("/")
        num1 = int(nums1[0])
        denum1 = int(nums1[1])

        num2 = int(ops[1].split("/")[0])
        denum2 = int(ops[1].split("/")[1])

        mmc = int(denum2) *int(denum1)
        
        newNum1 = int((mmc/denum1) * num1)
        newNum2 = int((mmc/denum2) * num2)

        newNum = newNum1 + newNum2
        res = f"{newNum}/{mmc}"
        mat.insert(i, res)
        mat.remove("+")
        mat.remove(ops[0])
        mat.remove(ops[1])
        ops.clear()
    elif(mat[i] == "-"):
        pass
        ops.clear()
    else:
        ops.append(mat[i])


mat = mat[0].split("/")
numerador = int(mat[0])
denominador = int(mat[1])

while(True):
    if(numerador%2 == 0 and denominador%2 == 0):
        numerador /= 2
        denominador /=2
    elif (numerador%3 == 0 and denominador%3 == 0):
        numerador /= 3
        denominador /=3
    elif (numerador%5 == 0 and denominador%5 == 0):
        numerador /= 5
        denominador /=5
    elif (numerador%7 == 0 and denominador%7 == 0):
        numerador /= 7
        denominador /=7
    else:
        break

print(f"{int(numerador)}/{int(denominador)}")