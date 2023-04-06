#include <iostream>
#include <cmath>
using namespace std;
int z_fraction(int n, int r, int c, int sum);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r, c;
    cin >> n >> r >> c;
    int ans = z_fraction(n, r, c, 0);
    cout << ans << "\n";
    return 0;
}
int z_fraction(int n, int r, int c, int sum){
    long length = pow(2, n);
    if(n == 0) return sum;
    long area = length*length/4;
    int row_section = r/(length/2);
    int col_section = c/(length/2);
    int new_r = r%(length/2), new_c = c%(length/2);
    return z_fraction(n-1, new_r, new_c, sum+area*(row_section*2 + col_section*1));
    
}