from math import sqrt
def prime(n):
    if n<=1:
        return False
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            return False
    return True
class Solution:
    def isSumOfTwo (self, N):
        # code here 
        if prime(2) and prime(N-2):
            return 'Yes'
        for i in range(1,(N//2)+1,2):
            if prime(N-i) and prime(i):
                return 'Yes'
        return 'No'
