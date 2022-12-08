#include <stdio.h>
int main(){
	
	int num ;
	
	printf("Enter Number of Element for Array \n");
	scanf("%d", &num);
	
	int a[num];
	
	printf("Now Enter Values for Array\n");
	
	for(int i = 0 ; i < num ; i++)
	{
		scanf("%d", a[i]);
	}
	
	int max = a[0] ;
	
	//finding maximum number in given array for Frequency Array ;
	
	for(int i = 0 ; i < num ; i++)
	{
		if(max < a[i]) 
			max = a[i] ;
	}
	
	int frequency[max+1];
	int x = 0 ;
	
	for(int i = 0 ; i < max+1 ; i++) 
	{
	
	int count = 0 ; 
	
	for(int i = 0 ; i < num ; i++) 
	{
		if ( x == a[i])
		count++ ;
	}
	
	frequency[x] = count ;
	x++ ;
	
	}
	
	printf("Frequency Array \n");
	for(int i = 0 ; i < max+1 ; i++) // Printing Value of Frequency Array ;
	{
	    printf("%d ", frequency[i]);
	}
	
	return 0;
}
