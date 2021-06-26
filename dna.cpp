#include <string>
#include<iostream>

std::string DNAStrand(const std::string& dna)
{
    std::string text(dna);
    std::string rtext(dna);
    int i =0;
    while(text[i] != '\0'){
        switch(text[i]){
            case 'A' :
                rtext[i] = 'T';
                break;
            case 'C' :
                rtext[i] = 'G';
                break;
            case 'G' :
                rtext[i] = 'C';
                break;
            case 'T' :
                rtext[i] = 'A';
                break;
        }
        i++;
        
    }
    return rtext;
}

int main(){
    char dna[]={"ATTGC"};
    std::cout << DNAStrand( dna) << '\n';
    std::string dna1("GTAT");
    std::cout << DNAStrand( dna1) << '\n';
}
