#User function template for Python

class Solution:    
    #Function to reverse every sub-array group of size k.
    def reverseInGroups(self, arr, N, K):
        l1 =[]
        for i in range (0,N,K):
            a=[]
            a =arr[i:i+K]
            l1 =l1+a[::-1]
        for i in range (0,N):
            arr[i]=l1[i]
        return l1