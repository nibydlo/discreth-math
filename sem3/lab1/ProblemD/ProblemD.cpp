#include <bits/stdc++.h>

using namespace std;

vector<int> huyANeWA;
vector< vector <bool> > vec;

void mergee(int left, int mid, int right) {
    int i1 = 0, i2 = 0;
    vector<int> result(right - left);

    while (left + i1 < mid && mid + i2 < right) {
        //string answer;

        //if (v[left + i1] < v[mid + i2]) {
        if(vec[huyANeWA[left + i1]][huyANeWA[mid + i2]]){
        //if(key) {
            result[i1 + i2] = huyANeWA[left + i1];
            i1++;
        } else {
            result[i1 + i2] = huyANeWA[mid + i2];
            i2++;
        }
    }

    while (left + i1 < mid) {
        result[i1 + i2] = huyANeWA[left + i1];
        i1++;
    }

    while (mid + i2 < right) {
        result[i1 + i2] = huyANeWA[mid + i2];
        i2++;
    }

    for (int i = 0; i < i1 + i2; i++) {
        huyANeWA[left + i] = result[i];
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

    ifstream fin("guyaury.in");
    ofstream fout("guyaury.out");

    int n;
    fin >> n;

    vec.resize(n);
    for (int i = 0; i < n; i++) {
        vec[i].assign(n, false);
    }

    string s;
    getline(fin, s);

    for (int i = 0; i < n; i++) {
        getline(fin, s);
        for (int j = 0; j < i; j++) {
            if (s[j] == '1') {
                vec[i][j] = true;
                vec[j][i] = false;
            } else {
                vec[i][j] = false;
                vec[j][i] = true;
            }
        }
    }

    //vector<int> huyANeWA(n);
    huyANeWA.resize(n);
    for (int i = 0; i < n; i++) {
        huyANeWA[i] = i;
    }

    while(true) {
        random_shuffle(huyANeWA.begin(), huyANeWA.end());
        mergeSort(0, n);
        if(vec[huyANeWA[n-1]][huyANeWA[0]]) {
            for (int i = 0; i < n; i++) {
                fout << huyANeWA[i] + 1 << " ";
            }
            fout << endl;
            return 0;
        }
    }

    /*v.resize(n);
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }*/

   /* mergeSort(0, n);
    cout << "0";
    for (int i = 0; i < n; i++) {
        cout << " " << v[i];
    }
    cout << endl;*/
    fin.close();
    fout.close();

    return 0;
}

