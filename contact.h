#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 20
#define MAX 1000
#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;
void InitContact(Contact* pa);
void AddContact(Contact* pa);
void PrintContact(const Contact* pa);
void DELContact(Contact* pa);
void SearchContact(Contact* pa);
void ModifyContact(Contact* pa);
void ExitContact(Contact* pa);
