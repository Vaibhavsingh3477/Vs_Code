print ("Vaibhav Singh 2100910100180")

import numpy as np
A = [[12, 7, 3],
	[4, 5, 6],
	[7, 8, 9]]

B = [[5, 8, 1, 2],
	[6, 7, 3, 0],
	[4, 5, 9, 1]]

result= [[0,0,0,0],
		[0,0,0,0],
		[0,0,0,0]]

result = np.dot(A,B)

for r in result:
	print(r)
