#include <iostream>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N{};
  int arr[N+1];

  cin>>N;

  for(int i=0; i<N; i++)
  {
    cin>>arr[i];
  }
  
    for(int i=0; i<N; i++)
  {
    cout<<arr[i]<<'\n';
  }
}