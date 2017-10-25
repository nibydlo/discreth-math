#include <bits/stdc++.h>

using namespace std;

vector < vector <bool> > v;

int main() {

    ifstream fin("chvatal.in");
    ofstream fout("chvatal.out");

    int n;
    fin >> n;

    v.resize(n);
    for (int i = 0; i < n; i++) {
        v[i].assign(n, false);
    }

    string s;
    getline(fin, s);

    for (int i = 0; i < n; i++) {
        getline(fin, s);
        for (int j = 0; j < i; j++) {
            if (s[j] == '1') {
                v[i][j] = true;
                v[j][i] = true;
            }
        }
    }

    vector<int> huyANeWA(n);
    for (int i = 0; i < n; i++) {
        huyANeWA[i] = i;
    }
    random_shuffle(huyANeWA.begin(), huyANeWA.end());

    deque<int> d, q;
    for (int i = 0; i < n; i++) {
        d.push_back(huyANeWA[i]);
    }

    for (int i = 0; i < n*(n-1); i++) {
        q.push_back(d.front());
        d.pop_front();
        if(v[q.front()][d.front()]) {
            d.push_back(q.back());
            q.pop_front();
        } else {
            int v1 = q.back();
            int v2 = d.front();

            q.push_back(d.front());
            d.pop_front();

            while(!v[v1][q.back()] /*|| !v[v2][d.front()]*/) {
                q.push_back(d.front());
                d.pop_front();
            }

            d.push_back(q.front());
            q.pop_front();

            while (!q.empty()) {
                d.push_front(q.front());
                q.pop_front();
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << d.front() + 1 << " ";
        d.pop_front();
    }
    fout << endl;


    fin.close();
    fout.close();

    return 0;
}
