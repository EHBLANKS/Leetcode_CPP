#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>  // For std::max
int main(){

	std::unordered_map<char,int> charIndex;
	std::string str = "abcdaeg";
	int i = 0;
	int ans = 0;
	for(int j = 0; j < str.size(); ++j){

		if(charIndex[str[j]] > 0){
			i = std::max(charIndex[str[j]], i);
		}

		ans = std::max(ans, j-i+1);
		charIndex[str[j]] = j+1;

	}
	
	std::cout << "the longest string found is:" << ans << std::endl;
	return 0;	

}
