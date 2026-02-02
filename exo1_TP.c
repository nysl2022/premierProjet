#include<stdio.h>
#include<ctype.h>
#define N 12
int main()
{
	//NINTEDEM STEVE 24P1030 HN_SI
	
	int i;
	/*int n;
	printf("Entrez le nombre de caractere a lire : ");
	scanf("%n",&n);*/
	char c[N];
	
	printf("Entrer une phrase(max %d caractere) :\n",N);
	scanf("%[^\n]",c);/* lire toute la ligne sans utiliser fgets , ici on lit jusqu'au \n sans inclure le saut de ligne*/
	
	for(i=0;i<N;i++)
	{
		if (isspace(c[i])){c[i]='$';}
		else if(isupper(c[i])){c[i]=tolower(c[i]);}
		else if(islower(c[i])){c[i]=toupper(c[i]);}
	}
	printf("\nTexte transforme :\n%s\n",c);
	return 0;
}
		
