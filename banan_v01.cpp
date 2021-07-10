#include<iostream>
#include<string>
#include<algorithm>

int test(std::string b){
    int l = b.length();
    int x;
    char temp;
    std::sort(b.begin(), b.end());
    std::string new_str; 
    new_str.push_back(b.at(0));
    int a = 0;
    for(int i = 1; i < l; i++){
        if(b.at(i) != new_str.at(a)){
            new_str.push_back(b.at(i));
            a++;
        }
    }
    x = l - new_str.length();
    return x;
}



int main(){

    std::cout << test("ananas") << "\n";

    return 0;

}
