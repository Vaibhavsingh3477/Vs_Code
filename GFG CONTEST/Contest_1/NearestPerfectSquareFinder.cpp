/*
#include <iostream>
#include <cmath>

int main() {
    int num_cases;
   // std::cout << "Enter the number of test cases: ";
    std::cin >> num_cases;

    for (int i = 0; i < num_cases; i++) {
        int number;
        // std::cout << "Enter test case #" << i+1 << ": ";
        std::cin >> number;

        int root = std::sqrt(number);
        int nearest_square = root * root;

        if (nearest_square >= number) {
            nearest_square = (root - 1) * (root - 1);
        }

       // std::cout << "The nearest perfect square less than the input number is: " << nearest_square << std::endl;
    std::cout << nearest_square<< std::endl;
        
    }

    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

long long int NearestPerfectSquare(long long int N){
	
	long long int abovenumBER = ceil(sqrt(N+1)) * ceil(sqrt(N+1));
	long long int belownumBER = floor(sqrt(N-1)) * floor(sqrt(N-1));
	
	long long int difference_1 = N - abovenumBER;
	long long int difference_2 = belownumBER - N;
	
	if(difference_1 == difference_2){
		return belownumBER;
	}else if(difference_1 > difference_2){
		return abovenumBER;
	}else{
		return belownumBER;
	}
}


int main(){
	
	int T;
	cin>>T;
	while(T--){
		long long int N;
		cin>>N;
		cout<<NearestPerfectSquare(N)<<endl;
	}
	
	return 0;
}