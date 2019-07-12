//
// Created by jngl on 29/06/19.
//

#ifndef TEST1_USER_H
#define TEST1_USER_H

#include <string>

class User {
public:
    User(std::string_view name);

    std::string_view getName();

private:
    std::string m_name;
};


#endif //TEST1_USER_H
