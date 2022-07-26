#include <stdio.h>
#define  DOT 120
#define  DASH 360
#define  F 550

int main()

{
	int c;
	
	while(1)
	{
		c=getchar();
		
		if (c==97) /*letter a*/
			{
			Beep(F, DOT);
			Beep(F, DASH);	
			} 
		if (c==98) /* letter b*/
			{
			Beep(F, DASH); 
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DOT);
			}
		if (c==99) /* letter c*/
			{
			Beep(F, DASH); 
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DOT);
			}
		if (c==100) /* letter d*/
			{
			Beep(F, DASH); 
			Beep(F, DOT);
			Beep(F, DOT);
			}
		if (c==101) /* letter e*/
			{
			Beep(F, DOT); 
			}
		if (c==102) /* letter f*/
			{
			Beep(F, DOT); 
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DOT);
			}
		if (c==103) /* letter g*/
			{
			Beep(F, DASH); 
			Beep(F, DASH);
			Beep(F, DOT);
			}	
		if (c==104) /* letter h*/
			{
			Beep(F, DOT); 
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DOT);
			}
		if (c==105) /* letter i*/
			{
			Beep(F, DOT); 
			Beep(F, DOT);
			}
		if (c==106) /* letter j*/
			{
			Beep(F, DOT); 
			Beep(F, DASH);
			Beep(F, DASH);
			Beep(F, DASH);
			}
		if (c==107) /* letter k*/
			{
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DASH);
			}	
		if (c==108) /* letter l*/
			{
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DOT);
			}
		if (c==109) /* letter m*/
			{
			Beep(F, DASH);
			Beep(F, DASH);
			}	
		if (c==110) /* letter n*/
			{
			Beep(F, DASH);
			Beep(F, DOT);
			}	
		if (c==111) /* letter o*/
			{
			Beep(F, DASH);
			Beep(F, DASH);
			Beep(F, DASH);
			}
		if (c==112) /* letter p*/
			{
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DASH);
			Beep(F, DOT);
			}
		if (c==113) /* letter q*/
			{
			Beep(F, DASH);
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DASH);
			}
		if (c==114) /* letter r*/
			{
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DOT);
			}
		if (c==115) /* letter s*/
			{
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DOT);
			}
		if (c==116) /* letter t*/
			{
			Beep(F, DASH);
			}
		if (c==117) /* letter u*/
			{
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DASH);
			}
		if (c==118) /* letter v*/
			{
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DASH);
			}
		if (c==119) /* letter w*/
			{
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DASH);
			}
		if (c==120) /* letter x*/
			{
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DOT);
			Beep(F, DASH);
			}
		if (c==121) /* letter y*/
			{
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DASH);
			Beep(F, DASH);
			}
		if (c==122) /* letter z*/
			{
			Beep(F, DASH);
			Beep(F, DASH);
			Beep(F, DOT);
			Beep(F, DOT);
			}		
	}		
		
	return 0;
}
