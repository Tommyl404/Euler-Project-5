#include <iostream>

using namespace std;


void main()
{
	int theAnswerTheyGaveMe = 2520; //will be my starting point because i already know it can div with 1-10

	int foundIt = 0; // this flag will only be 1 if i had a num that div with all 11-20 nums

	while (foundIt == 0)
	{
		int canItBeDiv = 1; //this will stay one ONLY if the loop pass 11-20 num and didn't break

		theAnswerTheyGaveMe = theAnswerTheyGaveMe + 2520; // i know the answer for the 11-20 numbers will need to div with the answer of 1-10 too

		for (int i = 11; i <= 20; i++) //the main loop
		{
			if (theAnswerTheyGaveMe % i != 0) //if the num does not div with all 11-20 num then we need to exit the loop
			{
				canItBeDiv = 0; //this will make sure the progrem knows that this iteration failed

				break;
			}
		}

		if (canItBeDiv == 1) // if it fin the loop without failling in the iterations of the mod then we have found it!
			foundIt = 1; // makes us stop the loop
	}


	cout << theAnswerTheyGaveMe; //print the answer

}