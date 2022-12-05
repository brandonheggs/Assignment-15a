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

	catch ( invalidCharacterExcpeption)
	{
		cout << "ERROR: invalid charcter! ";
		return ' ';
	}
	catch (invalidRangeException)
	{
		cout << "ERROR: invalid range! ";
		return ' ';
	}
	catch (invaldCaseTransitionException)
	{
		cout << "ERROR: invald case transition! ";
		return ' ';
	}
	return char(target);
}


int main()
{
	cout << character('a', 1) << endl;
	cout << character('a', -1) << endl;
	cout << character('Z', -1) << endl;
	cout << character('?', 5) << endl;

	return 0;

}