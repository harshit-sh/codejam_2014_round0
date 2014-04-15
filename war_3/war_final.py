# war_final.py
# created by : Harshit Sharma

def fairWar( l1,l2 ):
	l1.sort()
	l2.sort()
	points = 0
	n = len(l1)
	if n == 1:
		if l1[0] > l2[0]:
			points = points + 1
		return points
	else:
		i = 0
		while i < len(l2):
			if l2[i] > l1[0]:
				l2.pop(i)
				l1.pop(0)
			else:
				points = points + 1
				i += 1
		return points


def getNum(l1,l2):
	l1.sort()
	l2.sort()
	m = l2[0]
	if len(l1) > 1:
		for i in range(len(l1)):
			if l1[i] > m:
				return i
				break
	return False
	

def final2(l1,l2,points):
	i= 0
	if max(l1) < max(l2):
		if l1[0] < l2[-1]:
			l2.pop()
			l1.pop(0)
		else:
			points = points + 1
			i += 1
	return points 
	

def final3(l1,l2,points):
	i = 0
	if max(l1) > max(l2):
		i = 0
		points = points + 1
		l1.pop(getNum(l1,l2))
		l2.pop(0)
	return points
	

def deceitWar(l1,l2):
	l1.sort()
	l2.sort()
	points = 0
	k = 0
	n = len(l1)
	if n == 1:
		if l1[0] > l2[0]:
			points = points + 1
		return points
	else:
		while(len(l1) != 0):
			k = final2(l1,l2,k)
			if(len(l2) == 0):
				break
			k = final3(l1,l2,k)
		return k
		

input_file = open("D-small-attempt2.in","r");
output_file = open("D-small-attempt1.out","a");

m = input_file.readline()

for i in range(int(m)):
	int1 = input_file.readline();
	k = input_file.readline();
	l1 = [float(j) for j in k.split()]
	k2 = input_file.readline();
	l2 = [float(j) for j in k2.split()]
	l3 = [m for m in l1]
	l4 = [j for j in l2]
	output_file.write("Case #" + str(i+1) + ": " + str(deceitWar(l1,l2)) + " " + str(fairWar(l3,l4)))
	output_file.write('\n')
