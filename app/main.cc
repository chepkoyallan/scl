#pragma once
#include "enum.h"
#include "for.h"
#include "if.h"
#include "immediate.h"
#include "inheritance.h"
#include "switch.h"
#include "while.h"
#include <iostream>
int main()
{
    Person p1{"allan", "ryan", 23};
    {
        Person p2{"kip", "oba", 24};
        {
            Tweeter t1("allan2", "c", 34, "@allan");
            string name2 = t1.getName();
        }
        std::string name2 = p2.getName();
        std::cout << "p2:" << name2 << '\n';
    }

    /**
     * @brief Enums
     *
     */

    {
        Status s = Pending;
        s = Approved;

        FileError fe = FileError::notfound;
        fe = FileError::ok;
        NetworkError ne = NetworkError::disconnected;
        ne = NetworkError::ok;
    }
    /**
     * @brief
     *
     */
    std::string name = p1.getName();
    std::cout << "p1:" << name << '\n';

    /**
     * @brief if demo
     *
     */
    {
        // if_demo();
    }

    /**
     * @brief while demo
     *
     */
    {
        // while_demo();
    }

    /**
     * @brief for demo
     *
     */

    {
        // for_demo();
    }

    /**
     * @brief switch demo
     *
     */
    {
        // switch_demo();
    }

    /**
     * @brief immediate demo
     *
     */

    {
        immediate_demo();
    }

    return 0;
}
