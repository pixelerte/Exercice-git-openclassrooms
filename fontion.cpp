//
//  fontion.cpp
//  C++ cours
//
//  Created by pierre etienne on 13/12/2016.
//  Copyright © 2016 pierre etienne. All rights reserved.
//

#include "fontion.hpp"


void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
