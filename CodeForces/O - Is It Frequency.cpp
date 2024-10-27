    #include <iostream>
    using namespace std;
     
    int main() {
    	int n, val;
    	cin >> n;
    	int* arr = new int[n];
    	int* freqarr = new int[100000 + 5]();
    	int m;
    	cin >> m;
     
    	for (int i = 0; i < n; i++) {
    		cin >> val;
    		arr[i] = val;
     
    	}
     
    	for (int i = 0; i < n; i++) {
    		freqarr[arr[i]]++;
    	
    	}
     
    	for (int i = 1; i <= m; i++) {
    		cout << freqarr[i] << "\n";
    	}
     
    	delete[] arr;
    	delete[] freqarr;
    	return 0;
    }