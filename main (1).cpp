#include <iostream>
using namespace std;
int main(){
    printf("1. Hello\n");
    printf("\n2.  Hello\n");
    printf("   student\n");
    printf("\n3. \" My SirG\"\n ");
    printf("\n\n4.");
    int A,R;
    printf("give radius of circle");
    scanf("%d",&R);
    A=2*R*R;
    printf("\n Area of circle is %d having the radius %d\n",A,R);
    printf("\n5.");
    int x=printf("Name");
    printf("%d\n",x);
    printf("\n\n6.");
    string a="amit";
    string b="kumar";
    cout<<"Hello,"<<" "<<a<<" "<<b<<endl;
    printf("\n7. %%d");
    printf("\n8. \\n");
    int day,month,year;
    printf("\n\n10. Give Date in format- DD/MM/YYYY");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("%d/%d/%d\n",day,month,year);
    int h,m;
    printf("\n\n11. Give Time in format-HH:MM");
    scanf("%d:%d",&h,&m);
    printf("%d:%d",h,m);
    return 0;
}