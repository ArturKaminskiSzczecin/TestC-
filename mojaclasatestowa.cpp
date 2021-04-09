#include<iostream>
#include<string>

class User{
	private:
		std::string name = "Artur";
		int age = 5;
	public:
		void userAsk();
		void setAge(int newAge){
			this->age = newAge;
		}
		void getName(){
		std::cout << this->name << ": " << this->age << std::endl;
                }
	};
	void User::userAsk(){
		std::cout << "What is his age" << std::endl;
	}
int main(){
	User artur;
	artur.getName();
	artur.setAge(10);
	artur.getName();
	artur.userAsk();
	return 0;
}
