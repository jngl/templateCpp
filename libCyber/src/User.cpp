//
// Created by jngl on 29/06/19.
//

#include "../include/User.h"

User::User(std::string_view name):
m_name(name)
{

}

std::string_view User::getName() {
    return m_name;
}
