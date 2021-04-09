#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			cout << "Constructor called!" << "\n";
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		~Person()
		{
			cout << "Destructor called!" << "\n";
		}
//		void printPerson(){
//			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
//		}
	
};

class Student :  public Person{
	private:
        
         
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() 
{
	Person artur;
	return 0;
}
