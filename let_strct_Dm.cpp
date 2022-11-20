/* There are five players from which the Most Valuable Player (MVP) is to be chosen.
 Each player is to be judged by 3 judges, who would assign a rank to each player. 
 The player whose sum of ranks is highest is chosen as MVP. 
 Write a program to implement this scheme. */

 #include<stdio.h>
 int i,j;

rank(int A[][3],int sum[])
 {
     int m;
     for(i=0;i<5;i++)
     {
         m=0;
        for(j=0;j<3;j++)
        {
            if(j==0)printf("\n");
            printf("Judge%d gave Player%d ranks :",j+1,i+1);
            scanf("%d",&A[i][j]);
            m+=A[i][j];
        }
        sum[i] = m;
     }
 }

 MVP(int sum[],int *z,int *pos)
 {
     *z=sum[0];
     for(i=1;i<5;i++)
     {
         *z = *z > sum[i] ? *z:sum[i];
         *pos = *z > sum[i] ? *pos:i;
     }
 }
 int main()
 {
     int A[5][3],sum[5];
     int max,pos=0;
     rank(A,sum);
     MVP(sum,&max,&pos);
     printf("\nMVP is Player %d with Rank %d\n\n",pos+1,max);
     return 0;
 }