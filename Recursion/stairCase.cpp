#include <iostream>
#include <vector>

using namespace std;

int upStair(int n)
{
    if(n < 0){
        return 0;
    }

    if(n == 0 || n == 1) return 1;

    return upStair(n-1) + upStair(n-2) + upStair(n-3);

}

int main()
{
    int n;
    cout << "Enter the stair's: ";
    cin>>n;
    cout<<"Number os stps: "<<upStair(n)<<endl;
}
