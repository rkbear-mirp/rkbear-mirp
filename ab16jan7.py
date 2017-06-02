import math
n=1
while(n<10):
 x=10**(-n)
 y1=math.sqrt(x**2+1.0)-1.0
 y2=x**2/(math.sqrt(x**2+1.0)+1.0)
 y3=abs((y1-y2)/y2)
 n=n+1
 print(1/n,y3)
