print('Enter the operation to perform : \n1. for addition \n2. for substraction \n3. for multiplication \n4. for division')
op = int(input())

print('Enter a number : ')
a = int(input())

print('Enter a number : ')
b = int(input())

print('The result of the operation is ')
if(op == 1):
    print(a+b)
elif(op == 2):
    print(a-b)
elif(op == 3):
    print(a*b)
elif(op == 4):
    print(a/b)
else:
   print("Please check your option!")


