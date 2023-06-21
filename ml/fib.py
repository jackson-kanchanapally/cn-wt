n = int(input("Enter length of Fibonacci series: "))
num1 = 0
num2 = 1
count=0
while(count<n):
    print (num1)
    num3=num1+num2
    num1=num2
    num2=num3
    count+=1