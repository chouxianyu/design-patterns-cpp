#include"ISplitterFactory.cpp"

//具体类
class BinarySplitter : public ISplitter{
    void split(){
        // ...
    }
};

class TxtSplitter: public ISplitter{
    void split(){
        // ...
    }
};

class PictureSplitter: public ISplitter{
    void split(){
        // ...
    }
};

class VideoSplitter: public ISplitter{
    void split(){
        // ...
    }
};

//具体工厂
class BinarySplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new BinarySplitter();
    }
};

class TxtSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new TxtSplitter();
    }
};

class PictureSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new PictureSplitter();
    }
};

class VideoSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new VideoSplitter();
    }
};

