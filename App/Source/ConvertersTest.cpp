// (c) Spyridon Zervos


#include<iostream>

#include "Core\Double2CString.h"

int main(int argc, char* argv[])
{
	double X{7.66};
	int Size{0};
    const char* Cstring = Converters::DoubleToCstring(X, Size);
	
	for (int i = 0; i < Size; ++i)
    {
        std::cout << Cstring[i];
    }
	
	return 0;
}