#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vivero
{
    private: 
    string nombre;
    string PlantasOrnamentales;
    string PlantasFrutales;
    string PlantasHuerta;
    string Semillas;
    string Fertilizantes;
    string TierraySustratos;
    string HerramientasdeJardineria;
    string MacetasyJardineras;
    string SistemadeRiego;
    string ControldePlagasyEnfermedades;

    public:
        Vivero()
    {
    nombre = "";
    PlantasOrnamentales = "";
    PlantasFrutales = "";
    PlantasHuerta = "";
    Semillas = "";
    Fertilizantes = "";
    TierraySustratos = "";
    HerramientasdeJardineria = "";
    MacetasyJardineras = "";
    SistemadeRiego = "",
    ControldePlagasyEnfermedades = "";    
    }
        Vivero(string nombre_, string PlantasOrnamentales_, string PlantasFrutales_, string PlantasHuerta_, string Semillas_, string Fertilizantes_, string TierraySustratos_,
        string HerramientasdeJardineria_, string MacetasyJardineras_, string SistemadeRiego_, string ControldePlagasyEnfermedades_)
        {
        nombre = nombre_;
        PlantasOrnamentales = PlantasOrnamentales_;
        PlantasFrutales = PlantasFrutales_;
        PlantasHuerta = PlantasHuerta_;
        Semillas = Semillas_;
        Fertilizantes = Fertilizantes_;
        TierraySustratos = TierraySustratos_;
        HerramientasdeJardineria = HerramientasdeJardineria_;
        MacetasyJardineras = MacetasyJardineras_;
        SistemadeRiego = SistemadeRiego_;
        ControldePlagasyEnfermedades = ControldePlagasyEnfermedades_;
        }
        void setnombre(string nombre_)
        {
            nombre = nombre_;
        }
        void setPlantasOrnamentales(string PlantasOrnamentales_)
        {
            PlantasOrnamentales = PlantasOrnamentales_;
        }
        void setPlantasFrutales(string PlantasFrutales_)
        {
            PlantasFrutales = PlantasFrutales_;
        }
        void setPlantasHuerta(string PlantasHuerta_)
        {
            PlantasHuerta = PlantasHuerta_;
        }
        void setSemillas(string Semillas_)
        {
            Semillas = Semillas_;
        }
        void setFertilizantes(string Fertilizantes_)
        {
            Fertilizantes = Fertilizantes_;
        }
        void setTierraySustratos(string TierraySustratos_)
        {
            TierraySustratos = TierraySustratos_;
        }
        void setHerramientasdeJardineria(string HerramientasdeJardineria_)
        {
            HerramientasdeJardineria = HerramientasdeJardineria_;  
        }
        void setMacetasyJardinerias(string MacetasyJardineria_)
        {
            MacetasyJardineras = MacetasyJardineria_;
        }
        void setSistemadeRiego(string SistemasdeRiego_)
        {
            SistemadeRiego = SistemasdeRiego_;
        }
        void setControldePlagasyEnfermedades(string ControldePlagasyEnfermedades_)
        {
            ControldePlagasyEnfermedades = ControldePlagasyEnfermedades_;
        }
        string getnombre() const
        {
            return nombre;
        }
        string getPlantasOrnamentales() const
        {
            return PlantasOrnamentales;
        }
        string getPLantasFrutales() const
        {
            return PlantasFrutales;
        }
        string getPlantasHuerta() const
        {
            return PlantasHuerta;
        }
        string getSemillas() const
        {
            return Semillas;
        }
        string getFertilizantes() const
        {
            return Fertilizantes;
        }
        string getTierraySustratos() const
        {
            return TierraySustratos;
        }
        string getHerramientasdeJardineria() const
        {
            return HerramientasdeJardineria;            
        }
        string getMacetasyJardinerias() const
        {
            return MacetasyJardineras;
        }
        string getSistemadeRiego() const
        {
            return SistemadeRiego;
        }
        string getControldePlagasyEnfermedades() const
        {
            return ControldePlagasyEnfermedades;
        }
};