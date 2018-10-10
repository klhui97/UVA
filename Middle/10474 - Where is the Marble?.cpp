#include <iostream>

using namespace std;

int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int mNum;
    int caseN = 1;
    int marbles[10000];
    
    while(cin >> mNum) {
        int t;
        cin >> t;
        
        if (mNum == 0 && t == 0)
            return 0;
        
        cout << "CASE# " << caseN++ << ":\n";
        
        for (int i = 0; i < mNum; i++) {
            cin >> marbles[i];
        }
        
        qsort(marbles, mNum, sizeof(int), compare);
        
        while (t-- > 0) {
            int key;
            
            cin >> key;
            int loc = -1;
            int low = 0;
            int high = mNum - 1;
            
            while (low <= high) {
                int mid = (low + high) / 2;
                if (marbles[mid] == key) {
                    loc = mid;
                    high = mid - 1;
                }else if (marbles[mid] > key) {
                    high = mid - 1;
                }else {
                    low = mid + 1;
                }
            }
            
            if (loc == -1) {
                cout << key << " not found\n";
            }else {
                cout << key << " found at " << loc + 1 << "\n";
            }
        }
    }
    
    return 0;
}
