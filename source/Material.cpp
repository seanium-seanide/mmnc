#include "Material.hpp"

Material Material::operator+(const Material& material)
{
  Material newMaterial(
    description,
    absorptionCoefficient + material.absorptionCoefficient,
    thermalExpansionCoefficient + material.thermalExpansionCoefficient,
    thermoOpticCoefficent + material.thermoOpticCoefficent,
    thermalConductivity + material.thermalConductivity,
    specificHeatCapacity + material.specificHeatCapacity,
    refractiveIndex + material.refractiveIndex,
    youngsModulus + material.youngsModulus,
    poissonRatio + material.poissonRatio,
    mechanicalLoss + material.mechanicalLoss
  );

  return newMaterial;
}


Material Material::operator-(const Material& material)
{
  Material newMaterial(
    description,
    absorptionCoefficient - material.absorptionCoefficient,
    thermalExpansionCoefficient - material.thermalExpansionCoefficient,
    thermoOpticCoefficent - material.thermoOpticCoefficent,
    thermalConductivity - material.thermalConductivity,
    specificHeatCapacity - material.specificHeatCapacity,
    refractiveIndex - material.refractiveIndex,
    youngsModulus - material.youngsModulus,
    poissonRatio - material.poissonRatio,
    mechanicalLoss - material.mechanicalLoss
  );

  return newMaterial;
}
