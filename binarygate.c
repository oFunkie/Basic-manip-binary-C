/* | = or ( one of of two input  A &not B = 1 */
/* & =  and ( both of input  A & B = 1 ) */
/* ~ = not ( reverse the bit  A -> B = B */
/* ^ = xnot ( same OR, but, if both input -> NOT ouput  A & B = 0, but A &not B = 1*/

#include <stdio.h>
int main()
{
    int flags = 8;                                                  /*Binary = 1000 (1x8, 0x4, 0x2, 0x1)*/
    flags = flags | 2;                                              /*Binary = 1000 | (or) 0010 = 1010 (1x8, 0x4, 1x2, 0x1)*/
    printf("Flag 1: %s\n", ((flags & 1) > 0 ) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0 ) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0 ) ? "ON" : "OFF");
    printf("Flag 4: %s\n\n", ((flags & 8) > 0 ) ? "ON" : "OFF");
    char mask = 15;                                                 /*Binary = 1111 (1x8, 1x4, 1x2, 1x1)*/
    flags = ~flags & mask;                                          /*Binary = ~ (1010 & (and) 1111 = 1010) (not) = 0101 (0x8, 1x4, 0x2, 1x1)*/
    printf("Flag 1: %s\n", ((flags & 1) > 0 ) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0 ) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0 ) ? "ON" : "OFF");
    printf("Flag 4: %s\n\n", ((flags & 8) > 0 ) ? "ON" : "OFF");
    printf("Flags decimal value is %d\n", flags);                   /*5*/
    flags = flags << 1;                                             /*Binary = 0101 <<1 (switched 1) = 1010 (1x8, 0x4, 1x2, 0x1)*/
    printf("Flags decimal value is now %d\n", flags);               /*10*/
    return 0;
}



