#include<iostream>
#include<cstring>
const int MAX_SIZE = 500;


bool isAlphabeticalNumericalSymbol(const char ch)
{
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
	{
		return true;
	}
	return false;
}

char* toLowerCase(char* str)
{
	char* ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr - 'A' + 'a';
		}
		ptr++;
	}
	return str;
}
void myStrCpy(char* dest, char* source)
{
	if (dest == nullptr || source == nullptr )
	{
		return;
	}
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

bool myStrNCmp(const char* str1, const char* str2, int length)
{

	while (length > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		length--;
	}
	return 0;//if they are the same
}
void mostCommonWord(char* str, char* result)
{
	char mostCommonWord[MAX_SIZE] = "";
	int maxCount = 0;
	int currentCount = 0;

	char* currentStr = str;

	while (*currentStr != '\0')
	{
		if (isAlphabeticalNumericalSymbol(*currentStr))//ako imame duma
		{
			char currentWord[100];
			int i = 0;
			while (isAlphabeticalNumericalSymbol(*currentStr))//ako namerim duma q slagame w tozi masiw
			{
				currentWord[i] = *currentStr;
				i++;
				currentStr++;
			}

			currentWord[i] = '\0';//terminirame masiwa

			currentCount = 0;

			char* innerStr = str;//to check if the word has occured again

			while (*innerStr != '\0')
			{
				
				if (isAlphabeticalNumericalSymbol(*innerStr))
				{
						if (myStrNCmp(innerStr, currentWord, i) == 0)
						{
							currentCount++;
						}
				}
				innerStr++;
			}

			if (currentCount > maxCount)
			{
				maxCount = currentCount;
				myStrCpy(mostCommonWord, currentWord);
			}
		}
		else
		{
			currentStr++;
		}
	}
	myStrCpy(result, mostCommonWord);
}

int main()
{
	char array[MAX_SIZE];
	std::cin.getline(array, MAX_SIZE);

	char mostCommon[MAX_SIZE] = "";
	mostCommonWord(array, mostCommon);

	if (*mostCommon!='\0')
	{
		std::cout << mostCommon << std::endl;
	}

	return 0;
}