/* name: Mohakala Mohakala
student number: 201903193
Email address: lawrencemohakala@gmail.com
contact: +266 5044 9460
   */


#include<stdio.h>
#include<stdbool.h>

// the program that reverse the number
int Reverseprime[10];
	int num=1;
	int square;

bool primNum(int n){
	int temp=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			temp++;
	}
	return (temp==2? true:false);
}

int Reversenum(int n)
{
	int reverse=0;
	while(n!=0)
	{
		reverse=reverse*10+n%10;
		n/=10;
	}
	return reverse;
}
bool checkpal(int n, int m)
{
	if(n==m)
		return true;
	else 
		return false;
}

bool CheckSquare(int m)
{
	bool check=false;
	for(int i=1; i<=m; i++){
		if(m/i==i && m%i==0){
			if(primNum(i)){
				check=true;
			}
			else {
				check=false;
			}
		}
}
	return check;
}

int main(){

	
	
	printf("The first 10 squares are:\n");
	for(int i=0; i<=9; i++){
		//cout<<"hghghghg";
		while(i<10){
			if(primNum(num))
			{
				
				square=num*num;
				if(checkpal(square, Reversenum(square))){
					num++;
				}
				else{
					if(CheckSquare(Reversenum(square)))
					  {
					
					  	Reverseprime[i]=square;
					  	num++;
					  	break;
					  }
					  else{
					  	num++;
					  }
					
				}				
				 
			}
			else num++;
		
		}
	}

		for(int i=0; i<10; i++)
	{

		printf("(%d)%d\n",i+1, Reverseprime[i] );
	}
	return 0;

}