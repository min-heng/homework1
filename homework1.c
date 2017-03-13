#include <stdio.h>
int main(void){
    FILE *fp=fopen("homework1.txt","w");
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            fprintf(fp,"%d * %d = %d\n",i,j,i*j);
	}
    }
    return 0;
}
