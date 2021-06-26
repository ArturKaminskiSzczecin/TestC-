#include <string>
#include <iostream>

std::string to_camel_case(std::string text) {
    std::cout << "program start" << std::endl;
  std::string text1(text);
    char a = '_';
    char b = '-';
    int x = 0;
    int z =0;
    for(char const i: text){
        if ((i != a)&& (i != b)){
            std::cout << i << '\n';
            text1[x] = i;
            x++;
        }
        else if (i == '\0'){
            text1[x] = '\0';
            break;
        }
        else{
            std::cout << z++ << std::endl;
            std::cout << z << '\n';
        }

  }
    text1.erase(text1.end() - z, text1.end());
    return text1;
}
int main(){
    std::string text = "the_stealth_warrior";
    std::cout << to_camel_case(text) << '\n';
    std::string tex = "The-Stealth-Warrior";
    std::cout << to_camel_case(tex) << '\n';
    std::string t = "aCatWasPippi";
    std::cout << to_camel_case(t) << '\n';

}
