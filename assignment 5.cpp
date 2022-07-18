#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int s;
    printf("1.\n");
    printf("give a no.");
    cin>>s;
    for(int i=0;i<=s;i++){
        printf("%d My SirG\n",i);
    }
    printf("\n\n");
    printf("2.\n");
        int d;
        printf("give a no.");
        cin>>d;
       for(int i=1;i<=d;i++){
        printf("%d\n",i);
    }
        
     printf("\n\n");
    printf("3.\n");  
         int e;
        printf("give a no.");
        cin>>e;
     for(int i=e;i>0;i--){
        printf("%d\n",i);
    }
    
     printf("\n\n");
    printf("4.\n");
     int f;
      printf("give a no.");
    cin>>f;
    for(int i=1;i<=f;i++){
        printf("%d ",2*i-1);
        
    }
    
     printf("\n\n");
    printf("5.\n");
     int t;
      printf("give a no.");
    cin>>t;
    if(t%2==1){
    int noiio=t;
    printf("%d\n",noiio);
    for(int i=1;i<10;i++){
        noiio=noiio-2;
        printf("%d\n",noiio);
    }
    }else cout<<"given no is not odd";
    
       
    printf("\n\n");
    printf("6.\n");
      int b;
      printf("give a no.");
    cin>>b;
     int nio=2;
    printf("%d\n",nio);
    for(int i=1;i<b;i++){
        nio=nio+2;
        printf("%d\n",nio);
}
     printf("\n\n");
    printf("7.\n");
     int n;
      printf("give a no.");
    cin>>n;
    if(n%2==0){
    int noio=n;
    printf("%d\n",noio);
    for(int i=0;0>=i<=10;i++){
        noio=noio-2;
        printf("%d\n",noio);
    }
    }else cout<<"given no is not even";
    
      printf("\n\n");
    printf("8.\n");
      int m;
      printf("give a no.");
    cin>>m;
       for(int i=1;i<=m;i++){
           int sqr;
           sqr=i*i;
        printf("the sqr of %d is %d\n",i,sqr);
    }
    
      printf("\n\n");
    printf("9.\n");
    int k;
      printf("give a no.");
    cin>>k;
       for(int i=1;i<=k;i++){
           int cube;
           cube=i*i*i;
        printf("the cube of %d is %d\n",i,cube);
    }
    
     printf("\n\n10.");
     int l;
      printf("give a no.");
    cin>>l;
    printf("\n table of %d\n",l);
       for(int i=1;i<=10;i++){
           int table;
           table=l*i;
        printf(" %d * %d = %d\n",l,i,table);
    }
    
}


    