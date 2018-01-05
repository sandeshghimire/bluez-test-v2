//
// Created by Sandesh Ghimire on 12/19/17.
//

#ifndef bluetooth_test_rfcomm_hpp
#define bluetooth_test_rfcomm_hpp

#include <iostream>
#include <memory>

class Rfcomm;
typedef std::shared_ptr<Rfcomm> RfcommRef;

class Rfcomm {
 public:
    Rfcomm();
    virtual ~Rfcomm();
};

#endif //bluetooth_test_rfcomm_hpp
