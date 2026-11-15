#include<stdio.h>

int main(){
    
    int m, n; 
    int cont;
    char pdisp[105], ppres[105];
    
    scanf("%d%d", &n, &m);
    scanf("%s", pdisp);
    scanf("%s", ppres);//nao sei fazer for com isso nao
    
    for(int i = 0; i < n; i++){
        
        cont = 0;
        
        for(int j = 0; j < m; j++){
            
           if( pdisp[i] == ppres[j]){
               
               cont++;
               ppres[j] = '0';
               
               break;
               
           }
            
        }
        
       if( cont == 0 ){
           
           printf("%c", pdisp[i]);
           
       }
     
     
    }
    
    printf("\n");
    
    return 0;
}
