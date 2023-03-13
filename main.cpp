#include <iostream>
#include <array>
#include <ctime>

using namespace std;

/*#2
 * int main()
{
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int b=0;b<5;b++)
        for(int f=0;f<5;f++)
            mat[b][f]=rand()%50;
    for(int b=0;b<5;b++)
        for(int f=0;f<5;f++)
            mat[b][f]*=mat[b][1];
    return 0;
}
*/

/*#5
 * int main()
{
    int minim,gl,m;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int b=0;b<5;b++)
        for(int f=0;f<5;f++)
            mat[b][f]=rand()%50;
    for (int b=0;b<5;b++){
        for(int f=0;f<5;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    for(int b=0;b<5;b++){
        minim=mat[b][0];
        for(int f=0;f<5;f++){
            if(minim>mat[b][f]){
                minim=mat[b][f];
                m=f;
            }
            if (b==f)
                gl=mat[b][f];
        }
        mat[b][m]=gl;
        mat[b][b]=minim;
    }
    for (int b=0;b<5;b++){
        for(int f=0;f<5;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/*#8int main(){
    int maxim=-1;
    srand(time(0));
    std::array<std::array<int, 10>, 2>mat;
    for(int f=0;f<10;f++){
        mat[0][f]=rand()%100;
        mat[1][f]=1+rand()%3;
    }
    for(int f=0;f<10;f++)
        if((mat[1][f]==3) && (mat[0][f]>maxim))
            maxim=mat[0][f];
    cout<<maxim<<endl;
    for (int b=0;b<2;b++){
        for(int f=0;f<10;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/*#9a
 * int main()
{
    srand(time(0));
    std::array<std::array<char, 5>, 5>mat;
    for(int b=0;b<5;b++)
        for(int f=0;f<5;f++)
            cin>>mat[b][f];
    for(int b=0;b<5;b++){
        for(int f=0;f<5;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/*10(5)
 * int main(){
    int minim,gl,m,n1,ni,k,y;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int b=0;b<5;b++)
        for(int f=0;f<5;f++)
            mat[b][f]=rand()%50;
    for (int b=0;b<5;b++){
        for(int f=0;f<5;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    n1=mat[0][0];
    ni=mat[0][0];
    for(int b=0;b<5;b++){
        k=0;
        for(int f=0;f<5;f++)
            k+=abs(mat[f][b]);
        if(k>n1)
            n1=k;
    }
    for(int b=0;b<5;b++){
        y=0;
        for(int f=0;f<5;f++)
            y+=abs(mat[b][f]);
        if(y>ni)
            ni=y;
    }
    cout<<"Norm1="<<n1<<" norm inf="<<ni<<endl;
    for(int b=0;b<5;b++){
        minim=mat[b][0];
        for(int f=0;f<5;f++){
            if(minim>mat[b][f]){
                minim=mat[b][f];
                m=f;
            }
            if (b==f)
                gl=mat[b][f];
        }
        mat[b][m]=gl;
        mat[b][b]=minim;
    }
    for (int b=0;b<5;b++){
        for(int f=0;f<5;f++)
            cout<<mat[b][f]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
