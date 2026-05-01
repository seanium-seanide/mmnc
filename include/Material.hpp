#pragma once

#include <string>


struct Material
{
  std::string description;
  double absorptionCoefficient; // $\alpha$:  Absorption per length.
  double thermoOpticCoefficent; // $\beta$:   Temerature derivative of refractive index at temperature of interest.
  double thermalconductivity;   // $\kappa$:  Proportionality factor between heat flux and temperature gradient.
  double specificHeatCapacity;  // $C$:       Heat capacity, normalised by sample volume.
  double refractiveIndex;       // $n$:       Real part of the complex refractive index.
  double youngsModulus;         // $Y$:       Proportionality factor between stress and strain.
  double poissonRatio;          // $\nu$:     Proportionality factor between transverse strain and axial strain.
  double mechanicalLoss;        // $\nu$:     Phase shift in a degree of freedom tied to mechanical dissipation.
};
