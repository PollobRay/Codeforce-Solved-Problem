//
// Created by Ray on 6/10/2022.
//

// using Extended GCD ( ax+by=gcd(a,b) )
// A*B + M*Q =1,  Modulo inverse
// where B=x, Q=y, and gcd(A,M)=1
/*
void egcd(int a,int b,int &x,int &y) //here we get B from x and Q from y
{
    if(b==0)
    {
        x=1;
        y=0;
        return; //a
    }
    int x1, y1;
    egcd(b,a%b,x1,y1); //d=egcd
    x=y1;
    x=(x+b)%b; //ignore negative
    y=x1-(a/b)*y1;
    //return d;

} // X is result
int main()
{
    int x,y;
    int A=19,M=2;
    egcd(A,M,x,y);
    //x=(x+M)%M; //to ignore negative value
    cout<<x<<endl;

    return 0;
}

 */