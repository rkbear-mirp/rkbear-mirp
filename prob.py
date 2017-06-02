x0=0.0
xn=1.0
n=int(input('enter the value of x'))
s=0
h=float((xn-x0)/n)



for i in range (0,n):
       xi=0+i*h
       def f(xi):
          return xi


for i in range (1,n):
         s=s+f(xi)


def f(x0):
     return x0
def f(xn):
     return xn

v=h*(s+(f(x0)+f(xn))/2)
print(v)
print((v-0.5)/0.5)


