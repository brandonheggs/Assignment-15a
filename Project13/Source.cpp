// Brandon Heggs
//CIS 1202 501
//November 26, 2022

#include <iostream>
#include <string>
using namespace std;

class invalidCharacterExcpeption
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
	}

	catch (invalidCharacterExcpeption exception1)
	{
		cout << " ERROR: invalid charcter! ";
		return 0;
	}
}


main()
{ 

}