#include "ErrorL.h"
#include "pch.h"
#include <string>

using namespace std;

__declspec(dllexport) string getError()
{
	return "ERROR";
}


__declspec(dllexport) string getError_with_recomendation(int n_of_recomendation)
{
	if (n_of_recomendation == 1)
	{
		return "ERROR! TRY AGAIN WITH DIFFERENT INPUT";
	}
	if (n_of_recomendation == 2)
	{
		return "ERROR! CAN NOT DIVIDE BY ZERO";
	}
	else
	{
		return getError();
	}
}
