#include <stdio.h>
#include <stdlib.h>

using namespace std;
 
int main()
{
	FILE *plikWe, *plikWy;
	plikWe=fopen("tekst.txt","r");
	plikWy=fopen("zaszyfrowany.txt","w");
	
	int wspol;
	scanf("%d", &wspol);
	char i, k;
 	
 	while(fscanf(plikWe, "%c",&i)!=EOF)
	{
		if(i>=65 && i<=90-wspol) 
			k=int(i)+wspol; 
		else if(i>=91-wspol && i<=90) 
			k=int(i)-26+wspol; 
		else if(i>=97 && i<=122-wspol) 
			k=int(i)+wspol; 
		else if(i>=123-wspol && i<=122) 
			k=int(i)-26+wspol; 	
		fprintf(plikWy,"%c",k);
	}

	fclose(plikWe);
	fclose(plikWy);
	return 0;
}
