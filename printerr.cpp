#include<iostream>
#include<string>
class Printer
{
    char correct[14] = {"abcdefghijklm"};
public:
     std::string printerError(const std::string &s);
};
 std::string Printer::printerError(const std::string &s){
    int i = 0;
    int j = 0;
    int err =0;
    while(s[i]){
        while(correct[j]){
            if (s[i] != correct[j]){
                err++;
            }
            j++;
        }
        j = 0;    
        i++;
    }
    std::stringstream ss;
    ss << err;
    std::string errs = ss.errs();
    return errs;
}
int main(){
    
    Printer p;
    char error[] = {"aaaxbbbbyyhwawiwjjjwwm"};
    std::cout << p.printerError(error) << std::endl;
}
