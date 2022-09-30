#include<iostream>
using namespace std;

class Polynomial {
     public:
    int *degCoeff; 
    int capacity;
    public:
    Polynomial()
    {
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<capacity;i++)
        {   degCoeff[i]=0;   }                
    }
    Polynomial(Polynomial const & p1)
    {
        this->degCoeff= new int[p1.capacity];
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];       
        }

        capacity=p1.capacity;
    }

    void  setCoefficient(int degree,int coff)
    {
        while(degree>=capacity)
        {
            int *newarray=new int[2*capacity];        
            for(int i=0;i<capacity;i++)
            {
                newarray[i]=degCoeff[i];
            }
                                                    
            for(int j=capacity;j<2*capacity;j++)
            {
                newarray[j]=0;
            }

            delete [] degCoeff;
            degCoeff=newarray;
            capacity*=2;
        }
        degCoeff[degree]=coff;
    }

    void print() const
    {
        for(int i=0 ;i<capacity;i++)
        {
            if(this->degCoeff[i]==0)
                continue;
            else
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
    void operator=(Polynomial const & p1)
    {
          this->degCoeff= new int[p1.capacity];        
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];
        }
        capacity=p1.capacity;
    }

  Polynomial operator+( Polynomial & p2)            
    {
       int Max=max(capacity,p2.capacity);
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                            
           }
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] + p2.degCoeff[i]);  
        }
        return p3;
    }
    Polynomial operator-( Polynomial  & p2)
    {
        int Max=max(capacity,p2.capacity);
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                                
           }
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] - p2.degCoeff[i]);
        }
        return p3;
    }

 Polynomial operator*( Polynomial  & p2)
{
     Polynomial p3;
     for(int i=0;i<capacity;i++)    
     {
         Polynomial p;
         for(int j=0;j<p2.capacity;j++)   
         {
              p.setCoefficient(i+j,degCoeff[i]*p2.degCoeff[j]);     
         }
         p3=p3+p;
     }
    return p3;   
 }

};

int main() {
    int count1, count2, choice;
    cin >> count1;

    int * degree1 = new int[count1];
    int * coeff1 = new int[count1];

    for (int i = 0; i < count1; i++) {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++) {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int * degree2 = new int[count2];
    int * coeff2 = new int[count2];

    for (int i = 0; i < count2; i++) {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++) {
        cin >> coeff2[i];
    }
    Polynomial second;
    for (int i = 0; i < count2; i++) {
        second.setCoefficient(degree2[i], coeff2[i]);
    }
    cin >> choice;
    Polynomial result;
    switch (choice) {
    case 1:
        result = first + second;
        result.print();
        break;
    case 2:
        result = first - second;
        result.print();
        break;
        
    case 3:
        result = first * second;
        result.print();
        break;
    case 4: 
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }
    case 5: 
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }
    }
    return 0;
}