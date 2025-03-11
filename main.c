#include <stdio.h>
#include <stdlib.h>

double PHYsiCS_AVE(){
        int asS, CW, midT, EOT;
        printf("======PHYSICS=======\n");
        printf("ENter the scores for assignments\n");
        scanf("%d",&asS);
        printf("ENter the scores for course work\n");
        scanf("%d",&CW);
        printf("ENter the scores for mid term\n");
        scanf("%d",&midT);
        printf("ENter the scores for end of term\n");
        scanf("%d",&EOT);
        int SUm = asS+CW+midT+EOT;
    double avERage= (double)SUm/4;

return avERage;
}
double maTH_AVE(){
     int ass, cW, MidT, EoT;
      printf("\n======MATHEMATICS=======\n");
    printf("ENter the scores for assignments\n");
    scanf("%d",&ass);
    printf("ENter the scores for course work\n");
    scanf("%d",&cW);
    printf("ENter the scores for mid term\n");
    scanf("%d",&MidT);
    printf("ENter the scores for end of term\n");
    scanf("%d",&EoT);
    int SUM = ass+cW+MidT+EoT;
    double avERage= (double)SUM/4;

return avERage;
}
double CHem_AVE(){
    int AsS, Cw, miDT, EOt;
    printf("\n======CHEMISTRY=======\n ");
    printf("ENter the scores for assignments\n");
    scanf("%d",&AsS);
    printf("ENter the scores for course work\n");
    scanf("%d",&Cw);
    printf("ENter the scores for mid term\n");
    scanf("%d",&miDT);
    printf("ENter the scores for end of term\n");
    scanf("%d",&EOt);
    int sUm = AsS+Cw+miDT+EOt;
    double avERage= (double)sUm/4;

return avERage;
}



int main(){
    double PHY = PHYsiCS_AVE();
    printf("Average for Physics is = %.2lf\n", PHY);
    double CHEM= CHem_AVE();
    printf("Average for chemistry is = %.2lf\n", CHEM);
    double MATH= maTH_AVE();
    printf("Average for mathematics is = %.2lf\n", MATH);
    return 0;
}
