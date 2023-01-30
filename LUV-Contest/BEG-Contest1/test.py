import math

n = int(input("Enter number n: "))

for k in range(0, n+1):
    # get the coefficients
    # will never generate a neg cff
    cff = int(math.factorial(n)) // int(math.factorial(n - k)
                                        * math.factorial(k))
    
    print(f"{cff}\t")
    
    
