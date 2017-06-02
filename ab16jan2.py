print('Give me a number:')
x=int(input())
sum=0
fac=1
i=1
while (i<=x):
 sum=sum+i
 fac=fac*i
 i=i+1
print('Sum of Numbers from 1 to',x,'is',sum)
print('Factorial of',x,'is',fac)
