#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int addfunc(int x, int y){
		return x + y;
	}
	
	int subfunc(int x, int y){
		return x - y;		
	}
	int mulfunc(int x, int y){
		return x*y;
	}
	int divfunc(int x, int y){
		return x/y;
	}

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	char op;
	int (*calcfunc)(int, int);
	
	printf("Input Calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	

	
	switch(op)
		{
			case '+' :
				calcfunc = addfunc;
				break;
				
			case '-' : 
				calcfunc = subfunc;
				break;
				
			case '*' :
				calcfunc = mulfunc;
				break;
				
			case '/' :
				calcfunc = divfunc;
				break;	
		}
		
	printf("result : %i\n", calcfunc(num1, num2));
		
	return 0;
}
