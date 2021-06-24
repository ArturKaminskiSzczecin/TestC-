#include<iostream>
#include<vector>
#include<cstring>

std::string likes(const std::vector<std::string> &names)
{
    std::string retLike("");
    int n = size(names);
    std::cout << n << '\n';
    if(n == 0){
        retLike.append("no one likes this");
    }
    else{
        retLike.append(names[0]);
        if(n > 3){
            std::string num = std::to_string(n - 2);
            std::string n1(names[1]);
            retLike.append(", "); 
            retLike.append (n1);
            retLike.append (" and ");
            retLike.append (num);
            retLike.append (" others");
        }
        else if(n == 3){ 
            retLike.append(", "); 
            retLike.append(names[1]);
            retLike.append(" and ");
            retLike.append(names[2]);
            }
        else if(n ==2){
            retLike.append(" and ");
            retLike.append(names[1]);
        }
            retLike.append(" like this\n");
    }
            std::cout << retLike << '\n';
    return  retLike; // Do your magic!
}

int main(){
    const std::vector<std::string> names = {"Alex", "Jacob", "Mark", "Max"};
    const std::vector<std::string> n = {"Alex"};
    const std::vector<std::string> n1 = {"Alex", "Artur"};
        likes(names);
        likes(n);
        likes(n1);
            return 0;
}
