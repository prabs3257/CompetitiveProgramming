#include<bits/stdc++.h>

using namespace std;


class Top{
    
    int length;
    int height;
    int breath;

    public:

    Top(){
        length = 0;
        height = 0;
        breath = 0;

        cout<<"Top Constructor"<<endl;
    }

    Top(int l, int h, int b){
        length = l;
        height = h;
        breath = b;
    }

    friend int calculateAreaTop(Top);

    ~Top(){
        cout<<"Top Destructor"<<endl;
    }

    void dim_area(){

    }
};

class Left : public Top{

    float length;
    float width;
    float height;

    public:

    
    Left(){
        length = 0;
        width = 0;
        height = 0;

        cout<<"Left Constructor"<<endl;
    }
    
    void get_data(){
        
        float l = 0, w = 0, h = 0;
        cin>>l>>w>>h;
        length = l;
        width = w;
        height = h;
    }

    void put_data(){

        cout<<"length : "<<length<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"height : "<<height<<endl;

    }

    friend int calculateAreaLeft(Left);

    ~Left(){
        cout<<"Left Destructor"<<endl;
    }
};



class Right : public Top{

    float length;
    float width;
    float height;
    

    public:

    Right(){
        length = 0;
        width = 0;
        height = 0;

        cout<<"Right Constructor"<<endl;
    }
    
    void get_data(){

        float l = 0, w = 0, h = 0;
        cin>>l>>w>>h;
        length = l;
        width = w;
        height = h;
    }

    void put_data(){

        cout<<"length : "<<length<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"height : "<<height<<endl;

    }

    friend int calculateAreaRight(Right);
    ~Right(){
        cout<<"Right Destructor"<<endl;
    }
};

class Bottom : public Left, public Right{

    public:
    Bottom(){
        cout<<"Bottom Constructor"<<endl;
    }

    ~Bottom(){
        cout<<"Bottom Destructor"<<endl;
    }
};



int calculateAreaTop(Top obj){
    cout<<"Top Area : "<< obj.length * obj.breath<<endl;
}

int calculateAreaLeft(Left obj){
    cout<<"Left Area : "<< obj.length * obj.width<<endl;
}

int calculateAreaRight(Right obj){
    cout<<"Right Area : "<< obj.length * obj.width<<endl;
}


int main(){

    Bottom b;

    Left objLeft;

    objLeft.get_data();
    calculateAreaLeft(objLeft);
    
    return 0;
}