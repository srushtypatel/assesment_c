// Write a program to make multiplication of 2-D Matrix 

#include <stdio.h>
int main()
{
	
	 printf("\n ...............................Multiplication...............................\n\n\n");
    int i, j, k,a1[i][j], a2[i][j], mul[i][j];
    
     printf("\n ...............................Matrix-1...............................");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\n enter first matrix element:");
            scanf("%d",&a1[i][j]);
        }
        
     	printf("\n");
    }
    printf("\n ...............................Matrix-2...............................");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\n enter second matrix element:");
            scanf("%d",&a2[k][j]);
        }
     	 printf("\n"); 
  
    }
  
    printf("\n ...............................Multiplication-Matrix...............................");
    printf("\n\n");
    for (i=0; i<2; i++) 
	{
        for (j=0;j<2;j++)
		 {
            mul[i][j] = 0;
            for (k=0;k<2;k++) 
			{
                mul[i][j]+=a1[i][k]*a2[k][j];
            }
            printf(" %d ",mul[i][j]); 
        }
        printf("\n"); 
    }
    
     
}
