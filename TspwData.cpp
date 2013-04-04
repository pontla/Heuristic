#include "TsptwData.h"

TsptwData::TsptwData(const std::string& filename)
{
    m_filename = filename;
    m_nbSommets = 0;
    fileReader();
}

TsptwData::TsptwData()
{
}
TsptwData::~TsptwData()
{
    //dtor
}

void TsptwData::fileReader()
{
    int inf;
    int sup;
    std::ifstream file(m_filename.c_str(),std::ios::in);
    if(file)
    {
        std::string line;
        getline(file,line);
        m_nbSommets = atoi(line.c_str());

        //remplissage de la matrice des distances
        int distI;
        for(int i = 0;i< m_nbSommets;i++)
        {
            std::vector<int> tmpMat;
            for(int j=0;j<m_nbSommets;j++)
            {
                file >> distI;
                tmpMat.push_back(distI);
            }
            m_distMat.push_back(tmpMat);
        }
        //remplissage de la matrice des time windows
        for(int i = 0;i< m_nbSommets;i++)
        {
            Sommet s;
            file >> inf >> sup;
            s.SetborneInf(inf);
            s.SetborneSup(sup);
            m_tabSommets.push_back(s);
        }
        file.close();
    }
    else
    {
       std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
    }
}

void TsptwData::afficheMat(std::vector<std::vector<int> > mat)
{

     for(size_t i = 0; i <mat.size();i++)
    {
        for(size_t j = 0; j <mat[i].size();j++)
        {

            std::cout<<" "<< mat[i][j];

        }
        std::cout<<" "<<std::endl;
    }

}

int TsptwData::GetnbSommets()
{
    return m_nbSommets;
}

std::vector<std::vector<int> > TsptwData::GetdistMat()
{
    return m_distMat;
}

std::vector<std::vector<int> > TsptwData::GettwMat()
{
    return m_twMat;
}

std::vector<Sommet> TsptwData::GettabSommets()
{
    return m_tabSommets;
}
