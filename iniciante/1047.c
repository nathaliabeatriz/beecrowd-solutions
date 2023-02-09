#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf, htotal, mtotal;
    
    scanf("%d",&hi);
    scanf("%d",&mi);
    scanf("%d",&hf);
    scanf("%d",&mf);
    
    htotal = hf-hi;
    mtotal = mf-mi;
    
    if(htotal<0)
    {
        htotal = (24 - hi) + hf;
    }
    
    if(mtotal<0)
    {
        mtotal = 60 +(mf - mi);
        if(hf!=hi)
        {
        	htotal--;
		}
		else
		{
			htotal = (24 - hi) + hf;
			htotal--;
		}
        
    }
    
    if(hi==hf && mi==mf)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", htotal, mtotal);
    }
 
    return 0;
}
