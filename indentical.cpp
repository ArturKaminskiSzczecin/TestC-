#include<iostream>
#include<string>
bool is_isogram(std::string str) {
    bool x = true;
  for(int l = 0; l < str.length(); l++){
    str[l] = tolower(str[l]);
    std::cout << str[l];
  }
    std::cout << '\n';
  for(int i = 0; i < str.length(); i++){
    for(int j =0; j < str.length(); j++){
      if((i !=j)&&(str[i] == str[j])){
            std::cout << str[i];
        x= false;
      }
    }
  }
  return x;
}

int main(){
    std::string text("Dermatoglyphics");
    std::cout << is_isogram(text) << '\n';
    std::string t("moose");
    std::cout << is_isogram(t) << '\n';
}
