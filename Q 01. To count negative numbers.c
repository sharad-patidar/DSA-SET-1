 #include<stdio.h>
 void main()
 {
     int a[]={1,5,-4,3,4,-6};
     int n=sizeof a/sizeof a[0];
     int count =0;
     printf("index of negative number is:");
     for(int i=0; i<n;i++)
     {
         if (a[i]<0)
         {
             printf("%d ",i);
             count+=1;
         }
     }
     printf("\ncount:%d",count);
 }