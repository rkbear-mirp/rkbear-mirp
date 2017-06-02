#include<stdio.h>
#include<stdlib.h>
int main(){
 
}

void gauss_seidal(){
int n,i,j,key=1;
 float er,A[50][50],b[50],x0[50],x[50];
 printf("\nEnter the order of matrix:");
 scanf("%d",&n);
 printf("\nPlease enter the stopping criteria");
 scanf("%f",&er);
 printf("\nEnter the coefficients in the matrix");
 for(i=0; i<n; i++)
  { for(j=0; j<n; j++)
     { 
       scanf("%f",&A[i][j]);
       
      }
   }
 printf("\nEnter the coefficients in B matrix");
 for (i=0; i<n; i++)
 {
  scanf("%f",&b[i]);
  }
 for (i=0; i<n; i++)
  {
   x0[i]=0;
   }
 
 while(key==1){
  key=0;

  for (i=0 ; i<n; i++)
  { float sum =b[i];
    for( j=0; j<n ;j++)
      { if(j!=i)
         { sum = sum - A[i][j] * x0[j];
            }
        }
    x[i]= sum / A[i][i];
     
    if (abs((x[i]-x0[i])/x[i])>er)
     { key =1;
       x0[i]=x[i];
      }
    }
  } 
  printf("Results:\n");
  for(i=0; i<n; i++)
   printf("\nx[%d]=%f",i,x[i]);
}
