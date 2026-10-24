#include <iostream> // Syntax
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(66);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(15);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(77);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(98);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

}