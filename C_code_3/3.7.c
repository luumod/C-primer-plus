// showf_pt.c --以两种方式显示float类型的值
#include <stdio.h>
int main(void)
{
	float aboat=32000.0;
	double abet=2.14e9;
	long double dip=5.32e-9;

	printf("%f can be written %e\n",aboat,aboat);
	printf("And it is %a in hexadecimal,power of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);

	return 0;
}
