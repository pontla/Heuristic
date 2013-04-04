#ifndef Sommet_H
#define Sommet_H
#include <ostream>

class Sommet
{
    public:
        Sommet(int borneInf,int borneSup);
        Sommet();
        ~Sommet();
        bool Getvisited();
        void Setvisited( bool val);
        int GetborneInf();
        void SetborneInf( int val) ;
        int GetborneSup();
        void SetborneSup(int val);
        void afficher(std::ostream &flux) const;
    protected:
    private:
         bool m_visited;
         int m_borneInf;
         int m_borneSup;
};



#endif // Sommet_H
