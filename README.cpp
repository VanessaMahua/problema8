# problema8

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void mayuscula (char*);

int main()
{
	char word[20];
	cout << "Entrada por teclado : " ; cin.getline(word,20);
	mayuscula(word );
	
	cout<<"Frase:	"<<word;
		
	return 0;
}
void mayuscula (char *p){
	while(*p !='\0')
	{
		if (*p==' ')
		{
			while(*p !='\0')
			{	
				p++;
				*p= toupper(*p);
				
			}
		}
		p++;
		
	}
	
}
