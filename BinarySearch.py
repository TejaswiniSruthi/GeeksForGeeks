class Solution:	
	def binarysearch(self, arr, n, k):
		# code here
		l=0
		while(l<n):
		    m=(l+(n-1))//2
		    if arr[m]==k:
		        return m
		    if arr[m]>k:
		        n=m
		    else:
		        l=m+1
	    return -1
