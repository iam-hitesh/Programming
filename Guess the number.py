secret_num = 5
while True:
	try:
		num=int(input('guess the no between 1 to 10 '))
		break
	except ValueError:
		print ('u did nt enter a no. ')	
	except:
		print ( " unknown error")	
if num==secret_num:
	print('you guessed it right')
elif num in [1,2,3,4,6,7,8,9,10]:
	print('your guess is wrong')
else:
	print ("enter the no. in the range 1 to 10")					
