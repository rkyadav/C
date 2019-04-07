#include <stdio.h>

int main()
{
	enum gender {male, female};

	emum gender myGender;

	myGender = male;

	enum gender anotherGender = female;

	bool isMale = (myGender == anotherGender);

	char myCharacter = '\n';

	printf("%c", myCharacter);

	return EXIT_SUCCESS;

}