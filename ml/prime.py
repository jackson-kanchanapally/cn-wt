a=int(input("Enter a val"))
if a>1:
    for i in range(2,int(a/2)+1):
        if (a%i)==0 :
            print(a,"Not a prime")
            break
        else:
            print("prime")
            break
    else:
        print(a, "is Prime Number.")
