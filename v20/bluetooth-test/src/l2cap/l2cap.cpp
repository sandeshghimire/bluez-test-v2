#include "l2cap.hpp"
L2CAP::L2CAP() {
    std::cout << "hello l2cap" << std::endl;
}
L2CAP::~L2CAP() {
    std::cout << "bye l2cap" << std::endl;

}
void L2CAP::test() {
    std::cout << "testing l2cap" << std::endl;
}
inquiry_info *L2CAP::get_ii() const {
    return _ii;
}
void L2CAP::set_ii(inquiry_info *_ii) {
    L2CAP::_ii = _ii;
}
int L2CAP::get_max_rsp() const {
    return _max_rsp;
}
void L2CAP::set_max_rsp(int _max_rsp) {
    L2CAP::_max_rsp = _max_rsp;
}
int L2CAP::get_num_rsp() const {
    return _num_rsp;
}
void L2CAP::set_num_rsp(int _num_rsp) {
    L2CAP::_num_rsp = _num_rsp;
}
int L2CAP::get_dev_id() const {
    return _dev_id;
}
void L2CAP::set_dev_id(int _dev_id) {
    L2CAP::_dev_id = _dev_id;
}
int L2CAP::get_sock() const {
    return _sock;
}
void L2CAP::set_sock(int _sock) {
    L2CAP::_sock = _sock;
}
int L2CAP::get_length() const {
    return _length;
}
void L2CAP::set_length(int _length) {
    L2CAP::_length = _length;
}
int L2CAP::get_flags() const {
    return _flags;
}
void L2CAP::set_flags(int _flags) {
    L2CAP::_flags = _flags;
}
const char *L2CAP::get_addr() const {
    return _addr;
}
const char *L2CAP::get_name() const {
    return _name;
}
