#include <iostream>
using namespace std;

int main ()
{
	float amount_dollar;
	
	cout<<"Enter Amount in Dollars: ";
	cin>>amount_dollar;
	
	cout<<"Amount in British: "<< 1.487 * amount_dollar<<endl;
	
	cout<<"Amount in French: "<<0.172 * amount_dollar<<endl;
	
	cout<<"Amount in Deutshemark: "<< 0.584 * amount_dollar<<endl;
	
	cout<<"Amount in Japanese: "<< 0.00955 * amount_dollar;
	 
	return 0;
}
