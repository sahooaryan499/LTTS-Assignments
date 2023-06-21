/*Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/

#include<stdio.h>
struct box
{
    float vol,tsa;
};
int main(){
    struct box b1,*ptr;
    ptr=&b1;
    float len,bread,hgt;
    printf("Enter the length,breadth and height of the box(all in cm):");
    scanf("%f %f %f",&len,&bread,&hgt);
    b1.vol = len * bread * hgt;
    b1.tsa = (2*len*bread) + (2*len*hgt) + (2*bread*hgt);
    printf("Volume:%f and Total Surface Area:%f",b1.vol,b1.tsa);
    printf("\nIn pointer formart,Volume:%f and Total Surface Area:%f",ptr->vol,ptr->tsa);
}
