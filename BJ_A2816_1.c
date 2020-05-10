#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void One(int *);
void Two(int *);
void Three(int *,char **);
void Four(int *,char **);

int main(void){
	int N, point=0, K1pt, K2pt;
	char ** Chanel;

	scanf("%d", &N);

	Chanel = (char **)calloc(sizeof(char *),N);
	for(int i=0;i<N;i++)
		Chanel[i] = (char *)calloc(sizeof(char),11);

	for(int i=0;i<N;i++){
		scanf("%s", Chanel[i]);
		if(!strcmp(Chanel[i],"KBS1"))
			K1pt = i;
		else if(!strcmp(Chanel[i],"KBS2"))
			K2pt = i;
	}
	//printf("%s %d %d\n",Chanel[0], K1pt, K2pt);

	if(K1pt<K2pt){
		for(int i=point;i<K1pt;i++)
			Three(&point,Chanel);
		if(point!=1)
			Two(&point);
		if(strcmp(Chanel[0],"KBS1")){
			for(int i=point;i>0;i--)
				Four(&point,Chanel);
			One(&point);
		}
		for(int i=point;i<K2pt;i++)
			Three(&point,Chanel);
		if(strcmp(Chanel[1],"KBS2")){
			Two(&point);
			for(int i=point;i>1;i--)
				Four(&point,Chanel);
		}
	}
	else if(!(strcmp(Chanel[0],"KBS2"))&&!(strcmp(Chanel[1],"KBS1")))
		Three(&point,Chanel);
	else{
		for(int i=point;i<K2pt;i++)
			Three(&point,Chanel);
		if(point!=1)
			Two(&point);
		if(strcmp(Chanel[0],"KBS2")){
			for(int i=point;i>0;i--)
				Four(&point,Chanel);
			One(&point);
		}
		for(int i=point;i<K1pt;i++)
			Three(&point,Chanel);
		Two(&point);
		for(int i=point;i>0;i--)
			Four(&point,Chanel);
	}
	return 0;
}
void One(int * a){
	(*a)++;
	printf("1");
}
void Two(int * b){
	(*b)--;
	printf("2");
}
void Three(int * c, char ** ch){
	char tmp[11];
	strcpy(tmp,ch[(*c)]);
	strcpy(ch[(*c)],ch[(*(c)+1)]);
	strcpy(ch[(*(c)+1)],tmp);
	//printf("%s %s\n",ch[(*c)],ch[(*(c)+1)]);
	(*c)++;
	printf("3");
}
void Four(int * d, char ** ch){
	char tmp[11];
	strcpy(tmp,ch[(*d)]);
	strcpy(ch[(*d)],ch[(*(d)-1)]);
	strcpy(ch[(*(d)-1)],tmp);
	(*d)--;
	printf("4");
}
