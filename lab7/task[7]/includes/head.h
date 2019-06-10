#include <stdio.h>
#include <string.h>
#include <locale.h>

enum mark
{
	Bad = 2, Norm, Good, Excel
};

union markVal
{
	_Bool acc;
	enum mark mark;
};

enum markType { Diff, notDiff };

struct markS
{
	enum markType type;
	union markVal value;
};

struct subInfo
{
	char name[60];
	char teacher[60];
	char time[9];
	struct markS str;
};

struct semInfo
{
	int year;
	int semestr;
	struct subInfo theor[10];
	struct subInfo prack[10];
};

struct ZACHETKA
{
	char firstName[60];
	char lastName[60];
	char daddyName[60];
	char number[15];
	struct semInfo semI[4];
};