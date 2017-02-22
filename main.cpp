#include <iostream>
#include "project1.h"
#define OSStatus int

using namespace std;

void SSLFreeBuffer(bool val){}

OSStatus SSLVerifySignedServerKeyExchange(bool signedParams, bool serverRandom, bool hashCtx,bool hashOut){
    OSStatus err;
    SSLHash SSLHashSHA1;
    
    if((err = SSLHashSHA1.update(hashCtx, serverRandom)))
        goto fail;
    if((err = SSLHashSHA1.update(hashCtx, signedParams)))
        goto fail;
    goto fail;
    if((err = SSLHashSHA1.final(hashCtx, hashOut)))
        goto fail;
    
    
fail:
    SSLFreeBuffer(hashCtx);
    SSLFreeBuffer(hashOut);
    return err;
    
}

int main(){
    bool hashCtx = 0;
    bool signedParams = 0;
    bool serverRandom = 0;
    bool hashOut = 0;
    
    SSLVerifySignedServerKeyExchange(signedParams, serverRandom, hashCtx, hashOut);
    
    return 0;
}
