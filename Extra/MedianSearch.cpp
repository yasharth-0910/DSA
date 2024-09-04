//Median Serach

//recursive median search

#include <iostream>

using namespace std;

int median(int arr1[], int arr2[], int n){
    if(n == 1) return (arr1[0] + arr2[0])/2;
    if(n == 2) return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1]))/2;

    int m1 = (n%2 == 0) ? (arr1[n/2] + arr1[n/2 - 1])/2 : arr1[n/2];
    int m2 = (n%2 == 0) ? (arr2[n/2] + arr2[n/2 - 1])/2 : arr2[n/2];

    if(m1 == m2) return m1;

    if(m1 < m2){
        if(n%2 == 0) return median(arr1 + n/2 - 1, arr2, n - n/2 + 1);
        return median(arr1 + n/2, arr2, n - n/2);
    }

    if(n%2 == 0) return median(arr2 + n/2 - 1, arr1, n - n/2 + 1);
    return median(arr2 + n/2, arr1, n - n/2);
}

int main(){
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];

    cout << median(arr1, arr2, n) << endl;

    return 0;
}



//iterative median search


#include <iostream>

using namespace std;

int median(int arr1[], int arr2[], int n){
    int i = 0, j = 0;
    int m1 = -1, m2 = -1;

    for(int count = 0; count <= n; count++){
        if(i == n){
            m1 = m2;
            m2 = arr2[0];
            break;
        }
        else if(j == n){
            m1 = m2;
            m2 = arr1[0];
            break;
        }

        if(arr1[i] <= arr2[j]){
            m1 = m2;
            m2 = arr1[i];
            i++;
        }
        else{
            m1 = m2;
            m2 = arr2[j];
            j++;
        }
    }

    return (m1 + m2)/2;
}


int main(){
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];

    cout << median(arr1, arr2, n) << endl;

    return 0;
}



