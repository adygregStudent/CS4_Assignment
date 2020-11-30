/*
    Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
    Calculate percentage and grade according to following:
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage <  40% : Grade F.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

int main (void) {

    float phy, chem, bio, math, comp, per;

    printf("Enter [Physics Marks]     :: ");
    scanf("%f", &phy);
    printf("Enter [Chemistry Marks]   :: ");
    scanf("%f", &chem);
    printf("Enter [Biology Marks]     :: ");
    scanf("%f", &bio);
    printf("Enter [Mathematics Marks] :: ");
    scanf("%f", &math);
    printf("Enter [Computer Marks]    :: ");
    scanf("%f", &comp);

    per = (phy+chem+bio+math+comp)/5;

    if(per>=90)
        printf("Grade :: A [%.2f]", per);
    else if(per>=80)
        printf("Grade :: B [%.2f]", per);
    else if(per>=70)
        printf("Grade :: C [%.2f]", per);
    else if(per>=60)
        printf("Grade :: D [%.2f]", per);
    else if(per>=40)
        printf("Grade :: E [%.2f]", per);
    else
        printf("Grade :: F [%.2f]", per);
    

    return 0;

}