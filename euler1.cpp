#include "iostream" // less than and greater than are disabled

using namespace std;

int main(int argc, char** argv)
{
	    unsigned int sum = 0;
	    int i;
	        for(i=1; i < 1000; ++i)
			if(!(i % 3) || !(i % 5))		            
			sum += i;
		    std::cout << sum;
		        return 0;
}
