#include<stdio.h>
void main()
{
    int marks,a,b,c,d,e,f,award,total_marks;
    float percentage;
    printf("enter a marks of 6 subjects");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    award=a+b+c+d+e+f;
    printf("total marks awarded=%d\n",award);
    total_marks=600;
    percentage=award*100.0/total_marks;
    printf("percentage=%f\n",percentage);
    if(percentage>=90)
    {
        printf("grade=A+");
    }
    else if(percentage>=80)
    {
        printf("grade=A");
    } 
    else if(percentage>=70)
    {
        printf("grade=B+");
    }
    else if(percentage>=60)
    {
        printf("grade=B");
    }
    else if(percentage>=50)
    {
        printf("grade=c+");
    }
    else
    {
        printf("student is fail");
    }
}