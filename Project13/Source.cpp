// Brandon Heggs
//CIS 1202 501
//November 26, 2022

#include <iostream>
#include <string>
using namespace std;

class invalidCharacterExcpeption
{

};

class invalidRangeException
{

};
class invaldCaseTransitionException
{

};

char character(char start, int offset)
{
	int startAsciiValue = int(start);
	int target = startAsciiValue + offset;
	try
	{
		if(startAsciiValue < 65 || (startAsciiValue > 90 && startAsciiValue < 97) || startAsciiValue > 122) 
		{
			throw invalidCharacterExcpeption();
		
		}
		else if (target < 65 || (target > 90 && target < 97) || target > 122)
		{
			throw invalidRangeException();
		}
		else if ((target >= 65 && target <= 90 && startAsciiValue >= 95 && startAsciiValue <= 122) || (target >= 95 && target <= 122 && startAsciiValue >= 65 && startAsciiValue <= 90 ))
		{
			throw invaldCaseTransitionException();
		}
	}

	catch (invalidCharacterExcpeption exception1)
	{
		cout << " ERROR: invalid charcter! ";
		return 0;
	}
	catch (invalidRangeException exception2)
	{
		cout << " Error: invalid range! ";
	}
	catch (invaldCaseTransitionException exception3)
	{
		cout << "Error: invald case transition! ";
	}
	return char(target);
}


main()
{
	character('a', 1);
	character('a', -1);
	character('Z', -1);
	character('?', 5);

	return 0;

}