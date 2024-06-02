#include <iostream>
#include <vector>

int main(){

	std::vector<char> input = {'a','b','c'};
	char temp;
	int length = input.size()/2;
	//reverse it
	for(int i = 0; i < length; i++){
		
		temp = input[input.size()-1-i];
		input[input.size()-1-i] = input[i];
		input[i] = temp;
	}

	return 0;

}
