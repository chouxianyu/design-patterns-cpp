class ISubject{
public:
    virtual void process();
};

class RealSubject: public ISubject{
public:
    virtual void process(){
        //....
    }
};

//Proxy的设计
class SubjectProxy: public ISubject{
private:
    RealSubject * realSubject;

public:
    virtual void process(){
        //对realSubject的一种间接访问
        //....
    }
};

// 通过proxy间接访问RealSubject
class ClientApp{
    
    ISubject* subject;
    
public:
    
    ClientApp(){
        subject=new SubjectProxy();
    }
    
    void DoTask(){
        //...
        subject->process();
        
        //....
    }
};