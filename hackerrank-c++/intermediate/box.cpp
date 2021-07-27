
#include<bits/stdc++.h>

using namespace std;

class Box
{
public:
    Box() : m_l(0), m_b(0), m_h(0)
    {
    }
    Box(int l, int b, int h) : m_l(l), m_b(b), m_h(h)
    {
    }
    Box(const Box &theObject) : m_l(theObject.m_l),  m_b(theObject.m_b), m_h          (theObject.m_h)
    {
        
    }
    
    int getLength() const
    {
        return m_l;
    }
    int getBreadth () const
    {
        return m_b;
    }
    int getHeight() const
    {
        return m_h;
    }
    long long CalculateVolume() const
    {
        return (long long) m_l * m_b * m_h;
    }
    bool operator < (const Box& b) const
    {
        if(m_l < b.m_l) return true;
        if((m_b < b.m_b) && (m_l == b.m_l)) return true;
        if((m_h < b.m_h) && (m_b == b.m_b) && (m_l == b.m_l)) return true;
        return false;
    }
    
    friend ostream& operator <<(ostream& outs, const Box& theObject)
    {
        outs << theObject.m_l << " " << theObject.m_b << " " << theObject.m_h;
        return outs;
    }
    
    
private:
    int m_l, m_b, m_h;
};
//Implement the class Box
//l,b,h are integers representing the dimensions of the box




// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
