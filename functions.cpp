#include "types.h"
#include "std/cstring"
//TODO: finish
extern "C" int strncmp(const char* str1, const char* str2, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		int val = str1[i] - str2[i];
		if (val != 0)
			return val;
		if (str1[i] == 0)
			break;
	}
	return 0;
}

extern "C" char* strncpy(char* destination, const char* source, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		destination[i] = source[i];
		if (source[i] == 0)
		{
			for (size_t k = i + 1; k < num; k++)
				destination[i] = 0;
			break;
		}
	}
	return destination;
}

extern "C" int memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	char const* char1 = static_cast<char const*>(ptr1);
	char const* char2 = static_cast<char const*>(ptr2);
	for (size_t i = 0; i < num; i++)
	{
		int val = char1[i] - char2[i];
		if (val != 0)
			return val;
	}
	return 0;
}
extern "C" void* memset(void* ptr, int value, size_t num)
{
	char* charPtr = static_cast<char*>(ptr);
	for (size_t i = 0; i < num; i++)
		charPtr[i] = static_cast<char>(value);
	return ptr;
}
extern "C" size_t strlen(const char* str)
{
	size_t len = 0;
	while (str[len] != 0)
		len++;
	return len;
}
extern "C" char* strcpy(char* destination, const char* source)
{
	for (size_t i = 0; ; i++)
	{
		destination[i] = source[i];
		if (source[i] == 0)
			break;
	}
	return destination;
}
extern "C" void* memcpy(void* destination, const void* source, size_t num)
{
	return std::memcpy(destination, source, num);
}
extern "C" char* strcat(char* destination, const char* source)
{
	size_t index;
	for (index = 0; destination[index] != 0; index++)
	{}
	strcpy(destination + index, source);
	return destination;
}
extern "C" int strcmp(const char* str1, const char* str2)
{
	return strncmp(str1, str2, static_cast<size_t>(-1));
}

extern "C" int isprint(int arg)
{
	if (arg >= '0' && arg <= '9')
		return true;
	else if (arg >= 'A' && arg <= 'Z')
		return true;
	else if (arg >= 'a' && arg <= 'z')
		return true;
	return false;
}

extern "C" int isxdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return true;
	else if (arg >= 'A' && arg <= 'F')
		return true;
	else if (arg >= 'a' && arg <= 'f')
		return true;
	return false;
}

extern "C" int toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return arg  ^ 0x40;
	return arg;
}

extern "C" int isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return true;
	else
		return false;
}

extern "C" int isspace(int ch)
{
	switch (ch)
	{
	case ' ':
	case '\f':
	case '\n':
	case '\r':
	case '\t':
	case '\v':
		return true;
	default:
		return false;
	}
}

extern "C" int tolower(int arg)
{
	if (arg >= 'A' && arg <= 'X')
		return arg | 0x40;
	return arg;
}