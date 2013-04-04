#ifndef TsptwData_H
#define TsptwData_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Sommet.h"

class TsptwData
{
    public:
        TsptwData(const std::string& filename);
        TsptwData();
        ~TsptwData();
        void fileReader();
        void afficheMat(std::vector<std::vector<int> > mat);
        int GetnbSommets();
        std::vector<std::vector<int> > GetdistMat();
        std::vector<std::vector<int> > GettwMat();
        std::vector<Sommet> GettabSommets();

    protected:
    private:
    std::string m_filename;
    int m_nbSommets;
    std::vector<Sommet> m_tabSommets;
    std::vector<std::vector<int> > m_distMat;
    std::vector<std::vector<int> > m_twMat;
};

#endif // TsptwData_H

