//
// Created by finley on 19/11/2021.
//

#include "MRFEnergy.h"
#include "AutoPtr.h"
#include "List.h"

int main(){
    typedef MRFEnergy<TypeGeneral> MRFEnergyType;
    SEACAVE::CAutoPtr<MRFEnergyType> energy(new MRFEnergyType(TypeGeneral::GlobalSize()));
    SEACAVE::CAutoPtrArr<MRFEnergyType::NodeId> nodes(new MRFEnergyType::NodeId[_num_nodes]);
    typedef SEACAVE::cList<TypeGeneral::REAL, const TypeGeneral::REAL&, 0> EnergyCostArr;
}