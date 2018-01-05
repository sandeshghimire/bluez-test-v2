//
// Created by Sandesh Ghimire on 12/19/17.
//

#ifndef bluetooth_test_l2cap_hpp
#define bluetooth_test_l2cap_hpp

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <memory>

#include <sys/socket.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>


class L2CAP;
typedef std::shared_ptr<L2CAP> L2CAPRef;

class L2CAP {
 public:
    L2CAP();
    virtual ~L2CAP();
    void test();
private:
    inquiry_info *_ii = NULL;
 public:
    inquiry_info *get_ii() const;
    void set_ii(inquiry_info *_ii);
    int get_max_rsp() const;
    void set_max_rsp(int _max_rsp);
    int get_num_rsp() const;
    void set_num_rsp(int _num_rsp);
    int get_dev_id() const;
    void set_dev_id(int _dev_id);
    int get_sock() const;
    void set_sock(int _sock);
    int get_length() const;
    void set_length(int _length);
    int get_flags() const;
    void set_flags(int _flags);
    const char *get_addr() const;
    const char *get_name() const;
 private:
    int _max_rsp, _num_rsp;
    int _dev_id, _sock, _length, _flags;
    char _addr[19] = { 0 };
    char _name[248] = { 0 };

};

#endif //bluetooth_test_l2cap_hpp
