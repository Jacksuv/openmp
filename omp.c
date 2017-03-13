#include <omp.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
        int i,j,m,n,p,q=0;
        int a[99][99];
	srand((unsigned)time(NULL));
	#pragma omp parallel for
		for(m=0;m<100;m++)
		{
		    for(n=0;n<100;n++)
		    {
		 	p=rand()%100;
		        a[m][n]=p;

		    }

		 }


		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
			    if(a[i][j]>40)
				q++;
			}
			    
		 }
  
	printf("q=%d",q);

	float h=q/10000.0;
        printf("persent=%f\n",h);
        return 0;
}
