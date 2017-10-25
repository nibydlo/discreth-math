#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void mergee(int left, int mid, int right) {
    int i1 = 0, i2 = 0;
    vector<int> result(right - left);

    /* cout << "before this merge" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;*/

    while (left + i1 < mid && mid + i2 < right) {
        //cout << "left + i1 = " << left + i1 << " mid + i2 = " << mid + i2 << endl;
        bool key;
        string answer;
        cout << "1 " << v[left + i1] << " " << v[mid + i2] << endl;
        cin >> answer;
        answer == "YES" ? key = true : key = false;
        //if (v[left + i1] < v[mid + i2]) {
        if(key) {
            result[i1 + i2] = v[left + i1];
            i1++;
        } else {
            result[i1 + i2] = v[mid + i2];
            i2++;
        }
    }

    while (left + i1 < mid) {
        result[i1 + i2] = v[left + i1];
        i1++;
    }

    while (mid + i2 < right) {
        result[i1 + i2] = v[mid + i2];
        i2++;
    }

    for (int i = 0; i < i1 + i2; i++) {
        v[left + i] = result[i];
    }
    /*cout << "finish this merge" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;*/
}

void mergeSort(int left, int right) {
    if (left + 1 >= right) {
        return;
    }

    int mid = (left + right) / 2;
    //cout << "left = " << left << " mid = " << mid << " right = " << right << endl;
    mergeSort(left, mid);
    mergeSort(mid, right);
    mergee(left, mid, right);
}

int main() {

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    mergeSort(0, n);
    cout << "0";
    for (int i = 0; i < n; i++) {
        cout << " " << v[i];
    }
    cout << endl;

    return 0;
}
