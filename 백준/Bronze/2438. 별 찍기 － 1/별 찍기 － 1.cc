#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false); // 동기화 된 두 스트림을 끊어준다.
 
	int N;
	cin >> N;
 
	for (int i = 1; i <= N; i++) {
 		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
 		cout << "\n";
	}
	return 0;
}