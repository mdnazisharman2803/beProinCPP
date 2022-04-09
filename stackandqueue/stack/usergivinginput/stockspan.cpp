#include <bits/stdc++.h>
using namespace std;

int* stockspan(int prices[],int days)
{
int *output=new int [days];
stack<int> st;
st.push(0); // for 1st element so we give its index
output[0]=1;
for(int i=1;i<days;i++){
    while(!st.empty()&&prices[st.top()]<=prices[i]){
        st.pop();
    }
    output[i]=st.empty()?(i+1):i-st.top();
    st.push(i);
}
return output;
}
int main()
{
  int days;
  cin >> days;
  int prices[days];
    for (int i = 0; i < days; i++)
  {
    cin >> prices[i];
  }

  int *res= stockspan(prices,days);
  for (int i = 0; i < days; i++)
  {
    cout<< res[i]<<" ";
  }
  return 0;
}