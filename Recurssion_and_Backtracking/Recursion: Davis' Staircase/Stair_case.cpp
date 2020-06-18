#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {
int first=1,second=2,third=4;
if(n==1)
return 1;
if(n==2)
return 2;
if(n==3)
return 4;
int sum=0;
for(int i=4;i<=n;i++)
{
    sum=first+second+third;
    first=second;
    second=third;
    third=sum;
}
return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
