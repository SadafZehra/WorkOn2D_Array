#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int rows1,cols1,rows2,cols2,i,j;
	printf("Enter the first matrix:\n");
	printf("Enter total no of rows:");
	scanf("%d", &rows1);
	printf("Enter total no of columns:");
	scanf("%d", &cols1);
	int arr1[rows1][cols1];
		for(i=0;i<rows1;i++)
		for(j=0;j<cols1;j++)	
		{
			
			printf("Enter element m%d%d ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	
	printf("Enter the second matrix:\n");
	printf("Enter total no of rows:");
	scanf("%d", &rows2);
	printf("Enter total no of columns:");
	scanf("%d", &cols2);
	int arr2[rows2][cols2],mul[rows1][cols2];	
	

	for(i=0;i<rows2;i++)
		for(j=0;j<cols2;j++)
		{
		
		
			printf("Enter element m%d%d ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
	    }
	    if(cols1 != rows2)
	    {
	    	printf("Multiplication is not possible.");
		}
		else
		{
		
	      printf("The multiply of two matrix:\n");
	
        	for(i=0;i<rows1;i++)
         	{	
		       for(j=0;j<cols2;j++)
		         {
			          int k,multiply = 0;
                      for(k=0;k<rows2;k++)
		               { 
 		                  	multiply += arr1[i][k] * arr2[k][j];
		               }
		          	mul[i][j] = multiply;
			        multiply = 0;
		        	printf("%d \t ",mul[i][j]);
			
	             }
	         printf("\n");
            }
         }
		
	return 0;
}
