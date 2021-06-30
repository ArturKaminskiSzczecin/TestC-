#include<iostream>
#include<string>
#include<cstring>
std::string encrypt(std::string text, int n)
{
    int l = text.length();
    int x = 0, i=0;
    char text1[l+1];
    int y = l/2;
    if(n <= 0){
        for(int j =0; j <l; j++){
         text1[j] = text[j];
        }
         return text1;
    }
    else{
            while(text[i] != '\0'){
                //std::cout << "while started" << std::endl;
                if ((i %2) != 0){
                    text1[x]= text[i];
                    x++;
                }
                else {
                    text1[y]= text[i];
                    y++;
                }
                i++;
            }
            i =0;
                text1[y] = '\0';
                n--;
                std::cout << n << '\n';
                encrypt(text1,n);
            }
        return text1;
    
}
std::string decrypt(std::string encryptedText, int n)
{
    return encryptedText;
}

int main(){
    char text[] = "This is a test!";
    std::cout << encrypt( text, 0) << '\n';
    std::cout << encrypt( text, 1) << '\n';
    std::cout << encrypt( text, 2) << '\n';
    std::cout << encrypt( text, 3) << '\n';
    std::cout << encrypt( text, 4) << '\n';
    //std::cout << encrypt( text, -1) << '\n';

}
