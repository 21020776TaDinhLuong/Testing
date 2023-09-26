#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,i;
    cin>>m>>i;
    if (m>=9 && m<=10 && i>=9 && i<=10) {
        cout<<"Do";
    } else if ((m>=0 && m<9) || (i>=0 &&i<9) ) {
        cout<<"Truot";
    } else if (m< 0|| m > 10 || i< 0|| i > 10) {
        cout<<"Khong hop le";
    }
    return 0;
}
