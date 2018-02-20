n,m,x=map(int,raw_input().split())
arr=map(int,raw_input().split())
if m==1:
  print 2**n-1
else:
  nums=[0]*m
  for a in arr:
    old=nums[:]
    nums[a%m]+=1
    for i in xrange(m):
      nums[(i*a)%m]+=old[i]
  print nums[x]
