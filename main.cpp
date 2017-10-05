#include <iostream>
using namespace std;

//verification verifie si les nombre ne s ont >= 0

int verifie(int l, int h, int v){
    
    
    v = false;
    
    if (l <= 0 || h <= 0) {
        
        
        v = 0;
    }
    
    
    else
    {
        v = 1;
    }
   
    return v;
}

//dessine une rectangle avec le signe *

void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << "#";
        }
        cout << endl;
    }
}


//la fontion main (principale)

int main()
{
    int vb;
    int v (0);
    int largeur, hauteur;
    int surface;
    
    
    //demande les iformation a l'user
    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;
    
    //appel la fontion verifern
       vb = verifer(largeur, hauteur, v);

    
    //cout << vb << "variable vb" << endl;
    
    surface = (largeur * hauteur);
    
    
    if (vb == 1) {
        
        dessineRectangle(largeur, hauteur);
    }
    
    
    
    if (vb <= 0)
    
    {
        cout << "ereur les chifre sont incorecte" << endl;
    }
    
    cout << "la surface du carre est " << surface << endl;
    
    return 0;
}
