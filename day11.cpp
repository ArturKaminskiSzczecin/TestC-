#include <bits/stdc++.h>
#include<vector>

using namespace std;

void print(std::vector<vector <int>> const &input);
 


int main()
{
    vector<vector<int>> arr(6);

    std::cout << "\n new vector arr size " << arr.size() << std::endl;
   // print(arr);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
    std::cout << "\nresize vector arr size " << arr.size() << std::endl;
   // print(arr);
	std::cout << "\ni =" << i << " ";
        for (int j = 0; j < 6; j++) {
		std::cin >> arr[i][j];
	}

	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    std::cout << std::endl;
    for (int a=0; a< arr.size(); a++){
	    for(int b=0; b < 6; b++){
	    	std::cout << arr[a][b] << " ";
	    }
	    std::cout << std::endl;
    }
    std::cout << "\nvector arr size " << arr.size() << std::endl;
   // print(arr);
	return 0;
}
/*
void print(std::vector<vector <int>> const &input)
{
    for (int i = 0; i < input.size(); i++){
    std::cout << input.at(i) << " ";
    }
    std::cout << std::endl;
}
*/
