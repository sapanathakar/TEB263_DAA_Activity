#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
string s,hr;
    const string nums[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty-one","twenty-two","twenty-three","twenty-four","twenty-five","twenty-six","twenty-seven",     "twenty-eight","twenty-nine"};

    if(m==0)
       s=nums[h]+" o' clock";

    else if(m==1)
        s="one minute past "+nums[h];
    else if(m==59)
        s="one minute to "+nums[(h%12)+1];
    else if(m==15)
        s="quarter past "+nums[h];
    else if(m==30)
        s="half past "+nums[h];
    else if(m==45)
        s="quarter to "+nums[(h%12)+1];
    else if(m<30)
        s=nums[m]+" minute past "+nums[h];
    else if(m>30)
        s=nums[60-m]+" minutes to "+nums[(h%12)+1];

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
