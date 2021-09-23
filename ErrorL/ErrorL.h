#pragma once


#ifdef ERRORL_EXPORTS
#define ERRORL_API __declspec(dllexport)
#else
#define ERRORL_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

__declspec(dllexport) string getError();

__declspec(dllexport) string getError_with_recomendation(int n_of_recomendation);