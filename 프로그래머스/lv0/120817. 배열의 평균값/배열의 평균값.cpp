#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0; double s = 0.0;
    double n = numbers.size();

    for(int i=0;i<n;i++) {
        s += numbers.back();
        numbers.pop_back();
    }
    
        
    return s/n;
}