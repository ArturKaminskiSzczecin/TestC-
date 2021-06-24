#include <iostream>

using namespace std;

/**
 * Napisz program, który wypisze następujący tekst: 
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */


void vPrinter(void)
{
    int j =0;
    int arr[][6] = {{1,'\0'},{1,2,'\0'},{1,2,3,'\0'},{1,2,3,4,'\0'},{1,2,3,4,5,'\0'}};
    for(int i = 0; i <5; i ++){
        while(arr[i][j] != '\0'){
            cout << arr[i][j];
            j++;
        }
        j = 0; 
        cout << '\n'; 
    }
    cout << '\n';
    return;
}

int main()
{
    cout << "Hello, GlobalLogic!" << endl;
    
    vPrinter();
    
    return 0;
}

