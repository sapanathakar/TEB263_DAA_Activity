#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
s.erase(remove(s.begin(), s.end(), ' '), s.end()); 

int size= s.length();
int lower = (int) floor(sqrt(size));
int upper = (int) ceil(sqrt(size));
int total = lower * upper;

while(total < size)
{
    if(lower < upper)
        lower++;
    else
        upper++;

    total= lower * upper;
}
char matrix[lower][upper]={0};
int index=0;

for(int row=0; row<lower; row++)
{for(int col=0; col<upper; col++)
 { if(index<s.length()-1);
    { matrix[row][col]=s.at(index);
      index++;
    }
 }

}
string encr = "";
    
    for (int col = 0; col < upper; col++) {
        for (int row = 0; row < lower; row++) {
            if (matrix[row][col] != 0) {
                encr= encr + matrix[row][col];
            }
        }
        
        if(col != upper - 1) {
            encr += " ";
        }
    }
    
    return encr;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
