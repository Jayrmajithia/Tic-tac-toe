x=[[0,0,0],[0,0,0],[0,0,0]];
m=[[" "," "," "],[" "," "," "],[" "," "," "]];
def check():
	for i in range(0,3):
		sum1=0;
		for j in range(0,3):
			sum1=sum1+x[j][i];
		if sum1==3 or sum1==-3 :
			break;
	for i in range(0,3):
		sum2=0;
		for j in range(0,3):
			sum2=sum2+x[i][j];
		if sum2==3 or sum2==-3 : 
			break;
	sum3=x[0][0]+x[1][1]+x[2][2];
	sum4=x[0][2]+x[1][1]+x[2][0];
	if sum1==3 or sum2==3 or sum3==3 or sum4==3:
		return 3;
	elif sum1==-3 or sum2==-3 or sum3==-3 or sum4==-3:
		return -3;
	else:
		return sum3;
c=input("Enter your choice x/o:");
t=0;
while t<9:
	for i in range(0,3):
		print(m[i]);
	print(t);
	a=int(input("Enter the row number:"))-1;
	b=int(input("Enter the column number:"))-1;
	if x[a][b]==0:
		if c=="x" : 
			x[a][b]=1;
			m[a][b]=c;
		else :
			x[a][b]=-1;
			m[a][b]=c;
	else:
		print("Data is already entered");
		continue;
	t=t+1;
	if check()==3 or check()==-3:	
		print(c+" choice holder is winner");
		break;
	if c=="x":
		 c="o";
	else: 
		c="x";
if t==9 and (check()!=3 or check()!=-3):
	print("draw match");
elif t==9 and check()==3:
	print("x choice holder is winner");
elif t==9 and check()==-3:
	print("o choice holder is winner");