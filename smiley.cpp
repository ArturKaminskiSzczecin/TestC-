#include<iostream>
#include <vector>
#include<cstring>
int countSmileys(std::vector<std::string> arr)
{
    std::vector<std::string> smileyArr= {";-)",";)",";~D",":D", ":~)", ";~)", ":)", ";-D",":-D",":-)",":~D",";D"};
  int count =0;
  for(int j =0; j < smileyArr.size(); j++){
    for (int i =0; i < arr.size(); ++i){
        if ((smileyArr[j].compare(arr[i])) == 0){
        count++;
        std::cout << smileyArr[i];
        std::cout << arr[i];
        }
        std::cout << "\n";
    }
 
 }   
  return count;
}
int main(){
    std::vector<std::string> smf = {":C", ":~)", ";~)", ":)"};
    std::cout << countSmileys(smf) << '\n';
  //countSmileys(smf);
    std::vector<std::string> xmf {";>", ":o)", ";o)", ";(", ":-)", ";(", ";("};
}
