#include<iostream>
#include <sstream>
int hexToDec(std::string hexString)
{
    int num;
    std::stringstream ss;
    ss << hexString;
    ss >> std::hex >> num;
    std::cout << num << '\n';
    char A='A';
    printf("ASCII value of %c = %d\n", A, A);

    return 0;
}

int main(){
    hexToDec("0011");
}
