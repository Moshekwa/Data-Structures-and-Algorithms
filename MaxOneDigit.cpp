#include <bits/stdc++.h>
using namespace std;

// Function to calculate number of digits in integer 
int countDigit(long long n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}

int solution(vector <int>&numbers){
    
    vector <long long int> OneDigitNumbers;
    for(int&x:numbers){
        if ( countDigit(x) == 1 ) OneDigitNumbers.push_back(x);
    }
    cout << "Numbers with a single digit are : " ;
    // Sort the One Digit Integer vector and return the maximum
    sort(OneDigitNumbers.begin(), OneDigitNumbers.end());
    for(int&x:numbers){
        cout << x << " ";
    }
    cout << endl;
    return OneDigitNumbers.back();
    
}

int main(void)
{
    vector <int> numbers{-6,-91,1011,-100,84,-22,0,1,473};
    cout << "The maximum number among all one digit numbers is: " << solution(numbers) << endl;
    
    return 0;
}
