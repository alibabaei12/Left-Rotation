//Written by Ali Babaei

#include <iostream>
#include <vector>
using namespace std;

//using vectors
vector <int> leftRotation(vector <int> arr1, int d ) {
    int n = arr1.size();
    vector <int> arr2;

    // create a new array and insert from the previous array
    int rot = d;

    //first put the right side of the rotation in the array
    for (unsigned int i = 0; i < n; i++)
    {
        arr2.insert(arr2.begin() + i , arr1[rot]);

        rot++;
    }

    // now insert the rest to the end of the array2
    rot = n-d;

    for (unsigned int i = 0; i < n; i++)
    {

        arr2.insert(arr2.begin() + rot , arr1[i]);

        rot++;
    }

int siz = arr2.size() - 1;
    for ( int i = siz; i > n-1 ; i--)
    {
      arr2.erase(arr2.begin() + i);
    }


    return arr2;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);

    // get the array numbers from the user
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}


// below is using array

/*
int main() {
    // get the size of the array and how many rotations you want from the user
    int n;
    int d;
    cin >> n >> d;

    int arr1[n];

    // get the array numbers from the user
    for(int i = 0; i < n; i++){
       cin >> arr1[i];

    }

    // create a new array and insert from the previous array
    int arr2[n];
    int rot = d;

    //first put the right side of the rotation in the array
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[rot];
        rot++;
    }

    // now insert the rest to the end of the array2
    rot = n-d;

    for (int i = 0; i < n; i++)
    {
        arr2[rot ] = arr1[i];
        rot++;
    }

    for (int i = 0; i < n; i++)
    {
      cout << arr2[i] << " " ;
    }

}

*/





