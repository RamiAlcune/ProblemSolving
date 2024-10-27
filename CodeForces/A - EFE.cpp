        #include<bits/stdc++.h>
        using namespace std;
         
        int main() {
        	int N;
        	cin >> N;
        	double long sum = 0;
        	double long* arr = new double long[N];
        	for (int i = 0; i < N; i++) {
        		cin >> arr[i];
        		sum += arr[i];
        	}
        	
        	cout << fixed << setprecision(10) <<  sum / N << endl;
            delete[] arr;
        	return 0;
        }