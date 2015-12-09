//
//  main.cpp
//  lianbiao.2
//
//  Created by 20141105044y on 15/12/9.
//  Copyright © 2015年 20141105044y. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    char sex;
    char born;
    student *next;
    
};

int main(int argc, const char * argv[]) {
    student A,B,C,D;
    student *p,*q,*head;
    scanf("%s%d",A.name,&A.born);
    scanf("%s%d",B.name,&B.born);
    scanf("%s%d",C.name,&C.born);
    scanf("%s%d",D.name,&D.born);
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=0;
    head=&A;
    p=head;
    while(p!=0)
    {
        printf("%s %d\n",p->name,p->born);
        p=p->next;
    }
    
    return 0;
}
