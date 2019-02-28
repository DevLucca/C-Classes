#include<stdio.h>
#include<math.h>
#include<string.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	float p1[18], tr1[18],tar1[18],tar2[18],tar3[18],somap1,somatr1,somatar1,somatar2,somatar3,somatotal,media;
	char salvar[1];
		for ( int a = 1; a < 19; a++){
			printf("Insira p1, tr1, tar1, tar2 e tar3 do aluno %d : \n",a);
			scanf("%f %f %f %f %f", &p1[a], &tr1[a], &tar1[a], &tar2[a], &tar3[a]);
		}
		//--------------------------------------------------------------------------
		printf("Deseja salvar? (y/n): \n");
		scanf("%s",&salvar);
		if((strcmp("y",salvar))==0){
			printf("Cadastro concluido!\n");
			
			for(int a=0; a<19; a++){
				somap1=somap1+p1[a]*0.1;
			}
			printf("Soma das P1's: %f\n",somap1);
			for(int a=0; a<19; a++){
				somatr1=somatr1+tr1[a]*0.2;
			}
			printf("Soma das TR1's: %f\n",somatr1);
			for(int a=0; a<19; a++){
				somatar1=somatar1+tar1[a]*0.05;
			}
			printf("Soma das TAR1's: %f\n",somatar1);
			for(int a=0; a<19; a++){
				somatar2=somatar2+tar2[a]*0.05;
			}
			printf("Soma das TAR2's: %f\n",somatar2);
			for(int a=0; a<19; a++){
				somatar3=somatar3+tar3[a]*0.05;
			}
			printf("Soma das TAR3's: %f\n",somatar3);
			
			somatotal = somap1 + somatr1 + somatar1 + somatar2 + somatar3;
			
			media = somatotal/18;
			
			printf("A media e %f\n",media);
		}else{
		printf("Nao foi salvo!");}
	return 0;
}
