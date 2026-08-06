#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,md,ex,mdf,mdn, x;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    
    x = (n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0);
    md = x/10.0;
    
    printf("Media: %.1lf\n", md);
    
    if(md >= 7.0){
        printf("Aluno aprovado.\n");
    }
        
        else if(md < 5){
            printf("Aluno reprovado.\n");
            }
            
            else {
                printf("Aluno em exame.\n");
                    scanf("%lf", &ex);
                     printf("Nota do exame: %.1lf\n", ex);
                         mdn = (md+ex)/2.0;
                
            
            
        
                
                if(mdn >= 5.0){
                printf("Aluno aprovado.\n");
                    
                }
                
                else {
                printf("Aluno reprovado.\n");
                    
                }
                printf("Media final: %.1lf\n", mdn);
            }
            
    
        

    return 0;
}
