#include <iostream>
#include <string>
//using namespace std;

int main() {
	// Complete the program
	std::string a;
    char x;
    std::string b= "";
    int i;

    while( std::cin >> x)
    {
        if ( x!= '\n' )
	{
		i=0;	
        	a[i] = x;
	    	i++;
        }
	std::cout << a.length() << std::endl;
	std::cout << a << std::endl;
        break;
    }
    
    return 0;
}
