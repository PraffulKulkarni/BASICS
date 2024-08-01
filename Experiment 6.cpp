// Prafful Kulkarni
//23070123099
//experiment 6

//exp 6.1 for loop:
#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=0;i<10;i++){
        cout<<"Hello world("<<i+1<<")"<<endl;
    }
}

//exp6.2 for and while together:
#include<iostream>
using namespace std;
int main() {
    int i, j, k=0, n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++) {
        for(j=1;j<=(n-i);j++) {
            cout<<" ";
            
        }
        while(k!=(2*i-1)) {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
        
    }
    cout<<endl;
}

// exp 6.3 nested for loop:

#include<iostream>
using namespace std;
int main()
{ int i,j;
   int matrixa[3][3]={{1,2,6} , {2,8,4} , {4,5,6} };
   int matrixb[3][3] = {{2,7,1}, {2,1,3}, {1,1,2}};
   int sum[3][3];
   for ( int i =0; i<3; i++)
   {
    for (int j = 0; j<3; j++)
    {
        sum[i][j] = matrixa[i][j] + matrixb[i][j];
    }
   }

   cout << "Sum :"<< endl;
   for (int i = 0; i<3; i++)
   {
    for (int j = 0; j<3; j++)
    {
        cout << sum[i][j] << " ";
    }
    cout << endl;
   }
   return 0;
}
