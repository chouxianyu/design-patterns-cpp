class ISplitter{
public:
    virtual void split()=0;
    virtual ~ISplitter(){}
};

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

