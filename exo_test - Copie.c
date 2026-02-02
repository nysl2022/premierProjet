#include<stdio.h>
#include<string.h>
#define N 1000

typedef struct
{
	int jour;
	char mois[10];
	int annee;
}Date;

typedef struct 
{
	char code[7];
	char nom[30];
	char prenom[30];
	char sexe;
	Date date_naissance;
	char categorie;
	float salaire_brut;
	float salaire_net;
}Employe;

int main()
{
	//NINTEDEM STEVE 24P1030 HN_SI
	
	Employe e[N];
	int i,indiMieux=0;
	
	for(i=0;i<N;i++)
	{
		printf("Employee %d\n",i+1);
		printf("Entrez le code :");
		scanf("%s",e[i].code);
		printf("Entrez le nom :");
		scanf("%s",e[i].nom);
		printf("Entrez le prenom :");
		scanf("%s",e[i].prenom);
		printf("Entrez le sexe (M pour maxulin ou F pour feminin)");
		scanf("%c",&e[i].sexe);
		printf("Entrez votre date de naissance ");
			printf("jour : ");
			scanf("%d",&e[i].date_naissance.jour);
			printf("mois : ");
			scanf("%s",e[i].date_naissance.mois);
			printf("annee : ");
			scanf("%d",&e[i].date_naissance.annee);
		printf("Entrez la categorie (A ; B ou C ):");
		scanf("%c",&e[i].categorie);
		printf("Entrez le salaire brut ");
		scanf("%f",&e[i].salaire_brut);
		
		for(int i=0;i<N;i++)
		{
			float reduction = 0;
			switch(e[i].categorie)
			{
				case 'A':reduction = 0.05;
				break;
				case 'B':reduction = 0.03;
				break;
				case 'C':reduction = 0.02;
				break;
			}
			e[i].salaire_net=e[i].salaire_brut*(1-reduction-0.005);
		}
		
		
		
	 /*for(i=0;i<N;i++)
	 {
	 	if(e[i].categorie =='A')
	 	{
	 		salNet[i]=((e[i].salaire_brut(1-0.055))+e[i].salaire_brut*0.05);
	 	}
	 	else if(e[i].categorie =='B')
	 	{
	 		salNet[i]=((e[i].salaire_brut(1-0.03))+e[i].salaire_brut*0.05);
	 	}
	 	else if(e[i].categorie =='C')
	 	{
	 		salNet[i]=((e[i].salaire_brut(1-0.02))+e[i].salaire_brut*0.05);
	 	}
	 }*/
	 
	}
        int max_index = 0;
        
        for(i = 1; i < N; i++) 
        {
            if(e[i].salaire_net > e[max_index].salaire_net) max_index = i;
        }
        
        printf("\nEmploye le plus paye :\n");
        printf("code: %s | Salaire: %.2f €\n", 
            e[max_index].code,
            e[max_index].salaire_net);
        
        char nom[50],prenom[50];
        printf("Entrez le nom et le prenom a rechercher: ");
        scanf("%s%s",nom,prenom);
        for(i=0;i<N;i++)
        {
        	if(strcmp(nom,e[i].nom)==0 && strcmp(prenom,e[i].prenom)==0)
        	{
        		printf("Trouve : code %s,Salaire %.2f\n",e[i].code,e[i].salaire_net);
        		break;
        	}
        }
	return 0;
}
	 	
	

		
	
	
