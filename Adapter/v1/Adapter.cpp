//目标接口（新接口）
class ITarget{
public:
    virtual void process()=0;
};

//遗留接口（老接口）
class IAdaptee{
public:
    virtual void foo(int data)=0;
    virtual int bar()=0;
};

//遗留类型
class OldClass: public IAdaptee{
    //....
    virtual void foo(int data) {}
    virtual int bar() {}
};

//对象适配器
class ObjectAdapter: public ITarget{ //继承
protected:
    IAdaptee* pAdaptee;//组合
public:
    ObjectAdapter(IAdaptee* pAdaptee){
        this->pAdaptee=pAdaptee;
    }
    
    virtual void process(){
        int data=pAdaptee->bar();
        pAdaptee->foo(data);
    }
};


//类适配器
class ClassAdapter: public ITarget, protected OldClass{ //多继承
               
};

int main(){
    IAdaptee* pAdaptee=new OldClass();
    
    
    ITarget* pTarget=new ObjectAdapter(pAdaptee);
    pTarget->process();
    
    
}
