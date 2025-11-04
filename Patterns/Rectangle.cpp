//                                                               PATTERNS
                                                         
                                                         
//1.FOR THE OUTERLOOP COUNT THE NUMBER OF LINES
//2.FOR THE INNER LOOP,FOCUS ON THE COLOUMES AND CONNECT THEM SOMEHOWTO THE ROWS
//3.PRINT THEM"*" INSIDE THE INNER FOR LOOP"
//4. OBSERVE SYMMETRY(OPTIONAL)
#include<bits/stdc++.h>
using namespace std;

void rectangle(int n){
    cout<<"CODE-01"<<endl;
     for(int i=0;i<n;i++){      //no.of lines(rows)
        for(int j=0;j<n;j++){  //no.of elemts in each line(coloumes)
            cout<<"*";
        }
      cout<<endl;
     }
}

void lowertriangle(int n){
     cout<<"CODE-02"<<endl;
     for(int i=0;i<n;i++){      //no.of lines(rows)
        for(int j=0;j<=i;j++){  //no.of elemts in each line(coloumes)
            cout<<"*";
        }
      cout<<endl;
     }
}

void numberedlowertriangle(int n){
     cout<<"CODE-03"<<endl;
     for(int i=1;i<=n;i++){      //no.of lines(rows)
        for(int j=1;j<=i;j++){  //no.of elemts in each line(coloumes)
            cout<<j<<" ";
        }
      cout<<endl;
     }
}

void Samenumberedlowertriangle(int n){
     cout<<"CODE-04"<<endl;
     for(int i=1;i<=n;i++){      //no.of lines(rows)
        for(int j=1;j<=i;j++){  //no.of elemts in each line(coloumes)
            cout<<i<<" ";
        }
      cout<<endl;
     }
}

void invertedlowertrio(int n){
     cout<<"CODE-05"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){   //j<=n-i+1
            cout<<"*";
        }
        cout<<endl;
    }
}

void inverted_numbered_triangle(int n){
     cout<<"CODE-06"<<endl;
     for(int i=1;i<=n;i++){      //no.of lines(rows)
        for(int j=1;j<=n-i+1;j++){  //no.of elemts in each line(coloumes)
            cout<<j<<" ";
        }
      cout<<endl;
     }
}

void Same_numbered_inverted_triangle(int n) {
     cout<<"CODE-07"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<i<<" ";       
             }
            cout<<endl;
    }
   
}

void Triangle(int n) {
     cout<<"CODE-08"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*(i-1)+1;j++){
            cout<<"*";
        }
        //SPACES
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void Diff_numbered_row_Triangle(int n) {
     cout<<"CODE-09"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*(i-1)+1;j++){
            cout<<j<<" ";
        }
        //SPACES
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void Same_numbered_row_Triangle(int n) {
     cout<<"CODE-09"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*(i-1)+1;j++){
            cout<<i<<" ";
        }
        //SPACES
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void Inverted_Triangle(int n) {
     cout<<"CODE-08"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*n-(2*i)+1;j++){
            cout<<"*";
        }
        //SPACES
         for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void Diamond(int n) {
     cout<<"CODE-09"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*(i-1)+1;j++){
            cout<<"*";
        }
        //SPACES
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }

     for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        //STARS
         for(int j=1;j<=2*n-(2*i)+1;j++){
            cout<<"*";
        }
        //SPACES
         for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}


void arrow_head(int n){
    cout<<"CODE-10"<<endl;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)
        stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void bineary_l_tri(int n){
    cout<<"CODE-11"<<endl;
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void V_numbered(int n){
    cout<<"CODE-12"<<endl;
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //Space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}

void L_numbered_tri(int n){
    cout<<"CODE-13"<<endl;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

void L_alphabet_tri(int n){
    cout<<"CODE-14"<<endl;
    for(int i=1;i<=n;i++){
        //i=2
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void L_invereted_alphabet_tri(int n){
    cout<<"CODE-15"<<endl;
    for(int i=1;i<=n;i++){
        //i=2
        for(char ch='A';ch<'A'+(n-i+1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void L_invereted_same_alphabet_tri(int n){
    cout<<"CODE-16"<<endl;
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        //i=2
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void L_Triangle(int n) {
     cout<<"CODE-17"<<endl;
    for(int i=1;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //Characters
        char ch='A';
        int breakpoint=(2*i-1)/2;
         for(int j=1;j<=2*(i-1)+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        //SPACES
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void L_Triangle_from_E(int n) {
     cout<<"CODE-18"<<endl;
    for(int i=1;i<=n;i++){
        for(char ch='E'-i+1;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void Hallow_Diamond(int n){
    int initial_space=0;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=initial_space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
    }
    initial_space+=2;
    cout<<endl;
} 

for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=initial_space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
    }
    initial_space-=2;
    cout<<endl;
} 
}

void Hallow_Rect(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n||j==1 || j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
}

}


int main(){
    int n;
    cin>>n;
    rectangle(n);
    lowertriangle(n);
    numberedlowertriangle(n);
    Samenumberedlowertriangle(n);
    invertedlowertrio(n);
    inverted_numbered_triangle(n);
    Same_numbered_inverted_triangle(n);
    Triangle(n);
    Diff_numbered_row_Triangle(n);
    Same_numbered_row_Triangle(n);
    Inverted_Triangle(n);
    //DIAMOND
    Diamond(n);
    arrow_head(n);
     bineary_l_tri(n);
     V_numbered(n);
     L_numbered_tri(n);
     L_alphabet_tri(n);
     L_invereted_alphabet_tri(n);
     L_invereted_same_alphabet_tri(n);
     L_Triangle(n) ;
     L_Triangle_from_E(n);
     Hallow_Diamond(n);
     Hallow_Rect(n);
    return 0;
}