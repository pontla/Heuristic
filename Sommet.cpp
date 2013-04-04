#include "Sommet.h"

Sommet::Sommet(int borneInf,int borneSup)
{
    m_borneInf = borneInf;
    m_borneSup = borneSup;
    m_visited = false;
}

Sommet::Sommet()
{
    m_visited = false;
}

Sommet::~Sommet()
{
    //dtor
}

bool Sommet::Getvisited()
{
    return m_visited;
}
void Sommet::Setvisited( bool val)
{
    m_visited = val;
}
int Sommet::GetborneInf()
{
    return m_borneInf;
}
void Sommet::SetborneInf( int val)
{
    m_borneInf = val;
}
int Sommet::GetborneSup()
{
    return m_borneSup;
}
void Sommet::SetborneSup(int val)
{
    m_borneSup = val;
}


void Sommet::afficher(std::ostream &flux) const
{
    flux << " [" << m_borneInf << ";" << m_borneSup << "] : visited " << m_visited;
}
