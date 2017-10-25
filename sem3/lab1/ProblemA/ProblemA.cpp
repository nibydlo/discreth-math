#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <deque>

using namespace std;

vector < vector < bool> > v;

int main() {

    ifstream fin("fullham.in");
    ofstream fout("fullham.out");

    int n;
    fin >> n;

    v.resize(n);
    for (int i = 0; i < n; i++) {
        v[i].assign(n, false);
    }

    //cout << "vector created" << endl;

    string s;
    getline(fin, s);
    for (int i = 0; i < n; i++) {
        getline(fin, s);
        //cout << s << endl;
        for (int j = 0; j < i; j++) {
            if (s[j] == '1') {
                   // cout << "i = " << i << " j = " << j << endl;
                v[i][j] = true;
                v[j][i] = true;
            }
        }
    }

    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j]) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;*/

    deque<int> d;
    deque<int> q;
    for (int i = 0; i < n; i++) {
        d.push_back(i);
    }

    /*for (int i = 0; i < n; i++) {
            cout << d[i] + 1<< " ";
        }
    cout << endl;*/

    for (int i = 0; i < n; i++) {
        q.push_back(d.front());
        d.pop_front();
        if (v[q.front()][d.front()]) {
            d.push_back(q.front());
            q.pop_front();
        } else {
            int v1 = q.front(), v2 = d.front();
            q.push_back(d.front());
            d.push_back(q.front());
            q.pop_front();
            d.pop_front();
            while( !v[v1][q.back()] || !v[v2][d.front()]) {

                q.push_back(d.front());
                d.pop_front();
            //cout << "run while q d " << q.back() + 1 << " " << d.front() + 1<< endl;
            }

            /*cout << "after while" << endl;
            for (int k = 0; k < d.size(); k++) {
                cout << d[k] + 1<< " ";
            }
            cout << endl;
            cout << endl;*/

            //d.push_back(q.front());
            //q.pop_front();
            while(!q.empty()) {
                d.push_front(q.front());
                q.pop_front();
            }
        }

        /*for (int i = 0; i < n; i++) {
            cout << d[i] + 1 << " ";
        }
        cout << endl;*/
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
