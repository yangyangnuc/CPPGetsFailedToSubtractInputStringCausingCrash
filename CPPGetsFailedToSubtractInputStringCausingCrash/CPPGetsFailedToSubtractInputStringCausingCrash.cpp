// CPPGetsFailedToSubtractInputStringCausingCrash.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <Windows.h>


void inputSomething()
{
	char inputResult[3] = "";
	gets(inputResult);

	printf("%s",inputResult);
}


int _tmain(int argc, _TCHAR* argv[])
{

	inputSomething();


	system("pause");
	return 0;
}

