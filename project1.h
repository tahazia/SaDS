#ifndef PROJECT1_H_
#define PROJECT1_H_

#include <iostream> // IO access

class SSLHash{
private:
    bool val;
public:
    //constructors and Destructor
    SSLHash(){val=0;};
    SSLHash(const SSLHash &o){this->val = o.val;};
    ~SSLHash(){};
    
    //the other functions:
    bool update(bool hashCtx, bool serverRandom);
    bool final(bool hashCtx, bool hashOut);
};

#endif /* PROJECT1_H_ */
