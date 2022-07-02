#include <iostream>
using namespace std;
int main(){
    int x, y, w, h, mw, mh;
    cin>>x>>y>>w>>h;
    mw = x<w-x ? x:w-x;
    mh = y<h-y ? y:h-y;
    cout<<(mw<mh ? mw:mh)<<endl;
    return 0;
}