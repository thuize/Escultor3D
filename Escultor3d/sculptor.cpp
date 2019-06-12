/**
 * @file	sculptor.cpp
 * @brief	Implementação do construtor, destrutor, métodos de manipulação dos voxels
 * e escrita em arquivos .vect e .off
 * @author	Thuize Thainá
 * @author  Felipe Lima
 * @since	15/04/2019
 * @date	01/05/2019
 */
#include "sculptor.h"
#include <iostream>
#include <string>
using std::fstream;

/**
 * @details	Construtor da classe "sculptor".
 */
Sculptor::Sculptor(int _nz, int _ny, int _nx){

    if(_nz>0 && _nx>0 && _ny>0){
        nz=_nz; nx=_nx; ny=_ny;

        //Alocação da matriz
        v = new Voxel ** [nz];
        v[0] = new Voxel * [nz*nx];
        v[0][0] = new Voxel [nz*nx*ny];

        int i,j,k;

        for(k=0; k<nz; k++){
            if (k < nz - 1){
                v[0][(k+1)*nx] = &(v[0][0][(k+1)*ny*nx]);
                v[k+1] = &(v[0][(k+1)*nx]);
            }

            for(i=0; i<nx; i++){
                if (i>0) v[k][i] = v[k][i-1] + ny;
            }
        }

        //Inicialização de valores
        for (k=0; k<nz; k++){
            for(i=0; i<nx; i++){
                for(j=0; j<ny; j++){

                    v[k][i][j].isOn=false;
                    v[k][i][j].red   = 0;
                    v[k][i][j].green = 0;
                    v[k][i][j].blue  = 0;
                    v[k][i][j].transparency = 0;
                }
            }
        }

    }else{
        std::cout<<"Tamanho Invalido. " << std::endl;
    }
}

/**
 * @details	Destrutor da classe "sculptor".
 */
Sculptor::~Sculptor(){
    delete[] v[0][0];
    delete[] v[0];
    delete[] v;
}
