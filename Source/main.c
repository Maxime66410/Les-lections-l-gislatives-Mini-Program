#include <stdio.h>
#include <stdlib.h>

float Pourcentage_1, Pourcentage_2, Pourcentage_3, Pourcentage_4;


int main()
{
	printf("Veuillez saisie les points des candidats\n");
	scanf("&f, &f, &f, &f", &Pourcentage_1, &Pourcentage_2, &Pourcentage_3, &Pourcentage_4);

	if(Pourcentage_1 > 50.0)
	{
		printf("Candidat 1 elu");
	}
	else
	{
		if(Pourcentage_1 < 12.5)
		{
			printf("Candidat 1 eliminer");
		}
		else
		{
			if(Pourcentage_1 > Pourcentage_2 && Pourcentage_1 > Pourcentage_3 && Pourcentage_1 && Pourcentage_4)
			{
				printf("Candidat 1 : ballotage favorable");
			}
			else
			{
				printf("Candidat 1 : ballotage defavorable");
			}
		}
	}
	return 0;
}
