#include<iostream>
#include<string>
std::string encrypt(std::string text, int n)
{
    int l = text.length();
    if(l%2 ==0)
        l++;
    int x = 0, i=0;
    char text1[l];
    int y = l/2;
    int count = 0;
    if(count < n){
            while(i < l){
                if ((i %2) != 0){
                    text1[x]= text[i];
                    x++;
                }
                else {
                    text1[y] = text [i];
                    y++;
                }
                i++;
            }
            i =0;
                text1[y] = '\0';
                count++;
                return encrypt(text1,--n);
    }
    else {
        return text;
    
    }
}
std::string decrypt(std::string encryptedText, int n)
{
    int l = encryptedText.length();
    if(l%2 ==0)
        l++;
    int x =0, count = 0, i =0;
    int y = l/2;
    char text[l];
    if(count < n){
        while( i < l){
            if((i%2) !=0){
                text[i] = encryptedText[x];
                x++;
            }
            else{
                text[i] = encryptedText[y];
                y++;
            }
            i++;
        }
        i =0;
            count++;
            text[y] = '\0';
            return decrypt(text, --n);
    }
    else{
        return encryptedText;
    }
}
int main(){
    char text[] = "D";
    std::cout << encrypt( text, 0) << '\n';
    std::cout << encrypt( text, 1) << '\n';
    std::cout << encrypt( text, 2) << '\n';
    std::cout << encrypt( text, 3) << '\n';
    std::cout << encrypt( text, 4) << '\n';
    std::cout << "empty" << encrypt( "", 3) << '\n';

    std::cout <<  decrypt("This is a test!", 0) << '\n';
    std::cout <<  decrypt("hsi  etTi sats!", 1) << '\n';
    std::cout <<  decrypt("s eT ashi tist!", 2) << '\n';
    std::cout << decrypt(" Tah itse sits!", 3) << '\n';
    std::cout << decrypt("This is a test!", 4) << '\n'; 
    std::cout << decrypt("This is a test!", -1) << '\n';
    std::cout << "failed test" << '\n';
    std::cout << encrypt("SCHHHLTFIEDYMSAPHSYROYDHWOPKOYLMAMOJXRUFGKNACOCE", 3) << '\n';
    std::cout << decrypt("SCHHHLTFIEDYMSAPHSYROYDHWOPKOYLMAMOJXRUFGKNACOCE", 2) << '\n';
}
