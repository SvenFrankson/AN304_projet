#!/bin/bash

NBPART=$1
cd "$NBPART"part
$HOME/s9/CalcPara/calcpara/metis-4.0.3/partdmesh dualformetis.dat $NBPART
cp dualformetis.dat.epart.$NBPART dual.dpart
cp meshprogc.data Mesh.Data
cat dual.dpart >> Mesh.Data  
gcc -lm -o Preprocess.exe Preprocess.c
./Preprocess.exe $NBPART
/usr/lib64/openmpi/bin/mpicc -lm -o fem.exe FemPar.c
/usr/lib64/openmpi/bin/mpirun -n $NBPART ./fem.exe
