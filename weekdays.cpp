// Example program
#include <iostream>
#include <string>

using namespace std;


string solution(string &S, int K) {
    string weekdays[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int numberDays = 7;
    int index = 0;

if (K<7)
{
    for (int i = 0; i < numberDays; i++)
    {
        if (weekdays[i] == S)
        {
            index = i;
         }
    
}
    return weekdays[index+K];
}
else if (K>=7)
{
    for (int i = 0; i < numberDays; i++)
    {
        if (weekdays[i] == S)
        {
            index = i;
         }
    
}
    return weekdays[(index+K)%7];

    }
}

int main()
{
  string test = "Wed";
  int T = 23;
  string result = "";
  
  result = solution(test,T);
  cout << result << endl;
}
