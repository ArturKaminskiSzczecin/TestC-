#include<iostream>
#include<string>


int test(std::string b){
    int l = b.length();
    int x;
    char temp;
    std::string new_str = "";
    
    for(int i = 0; i < l; i++){
        for(int j=1; j < l; j++){
            if (b.at(j -1)> b.at(j)){
                temp = b.at(j-1);
                b.at(j-1) =b.at(j);
                b.at(j) = temp;
            }
        } 
    }
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
