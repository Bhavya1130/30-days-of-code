#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
    int N, K, sum=0;
    cin >> N >> K;
    int a[N];
    for(int i {}; i<N; i++){
        cin >> a[i];
    }
    for(int i {}; i<N; i++){
        if(K < a[i]){
            sum++;
        }
    }
    cout << sum << endl;
}
	return 0;
}
