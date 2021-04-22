#include <iostream>
using namespace std;
int main (void)
{

    int i,AcimaM = 0;
    float MaiorN=0, Nota[4], Soma, Media, MenorN = 5;
    for(i=0;i<4;i++)
    {
        cout<<"Digite a nota do aluno "<<i+1<<":"<<endl;
        cin>>Nota[i];

        	if(Nota[i]>MaiorN)
        	{
            	MaiorN = Nota[i];
        	}
       		else if(Nota[i]<MenorN)
        	{
            	MenorN = Nota[i];
        	}	
        Soma = Soma + Nota[i];
        Media= Soma / 4;
        	if(Nota[i]>Media)
        	{
            	AcimaM++;
        	}

    }
    cout<<"A maior nota e: "<<MaiorN<<endl;
    cout<<"A menor nota e: "<<MenorN<<endl;
    cout<<"A media das notas e: "<<Media<<endl;
    cout<<"Notas acima da media: "<<AcimaM<<endl;
    return 0;
}
