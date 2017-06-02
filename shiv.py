#interpolation
x=float(input("enter value of x:"))
c1=8+(8-20.6)/(2.1-1)
c2=-25.66896
m1=(20.6-8)/(2.1-1)
m2=(13.6-20.6)/(5.0-2.1)
if(x<=2.1 and x>=1):
    y=m1*x+c1
    print(x,y)
elif(x<=5.0 and x>=2.1):
    y=m2*x+c2
    print(x,y)
