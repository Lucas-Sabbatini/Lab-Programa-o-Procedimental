#include <stdio.h>

int main()
{
    char entrada[50];
    fgets(entrada,50,stdin);
    
    
    for(int i=0;i<50;i++){
        if(entrada[i]=='r'&&entrada[i+1]=='r'){
            entrada[i]=='l';
            for(int j=i+1;j<50;j++){

                entrada[j]=entrada[j+1];
            }
        }
        
        if(entrada[i]=='r'&&!(entrada[i+1]=='\n'||entrada[i+1]==' ')){
            entrada[i] = 'l';
        }
        else if(entrada[i]=='R'&&!(entrada[i+1]=='\n'||entrada[i+1]==' ')){
            entrada[i] = 'L';
        }
    }
    
    printf("%s",entrada);
    return 0;
}
