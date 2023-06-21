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
# x=int(input("enter a number:"))
# a=0
# b=1

# for i in range(0,x):
#     sum=a+b
#     a=b
#     b=sum
  
#     print(sum)