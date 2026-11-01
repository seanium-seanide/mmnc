#pragma once

#include <string>


struct Material
{
  std::string description;
  double absorptionCoefficient;       // $\a$:      Absorption coefficient
  double thermalExpansionCoefficient; // $\alpha:   Thermal expansion coefficient
  double thermoOpticCoefficent;       // $\beta$:   Temerature derivative of refractive index.
  double thermalConductivity;         // $\kappa$:  Proportionality between heat flux and temperature gradient.
  double specificHeatCapacity;        // $C$:       Heat capacity per volume.
  double refractiveIndex;             // $n$:       Real part of the refractive index.
  double youngsModulus;               // $Y$:       Proportionality between stress and strain.
  double poissonRatio;                // $\nu$:     Proportionality between transverse strain and axial strain.
  double mechanicalLoss;              // $\nu$:     Phase shift in a degree of freedom tied to mechanical dissipation.


  Material operator+(const Material& material);
  Material operator-(const Material& material);
};
