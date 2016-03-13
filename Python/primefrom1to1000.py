# checks if numbers between 1 and 1000 are prime, 
# prints them if they're prime
#!/usr/bin/python

for num in range(1,1000):
   for i in range(2,num):
      if num % i == 0:
         j = num / i
         break
   else:
      print num, 'is a prime number'
