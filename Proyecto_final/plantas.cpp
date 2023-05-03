#include <iostream>
#include <string>
#include <vector>
#include "plantas.h"
   int main(){

      vector<Vivero> lista_vivero;
    
        lista_vivero.push_back(Vivero("","Rosas","Nectarina","Tomates","Semillas de Tomate","Fertilizante Orgánico","Tierra para Macetas","Tijeras para Podar","Macetas de Terracota","Riego de Aspersión","Trampas Adhesivas")); 
        
        lista_vivero.push_back(Vivero("","Orquideas","Almendro","Zanahoria","Semillas de Calabaza","Fertilizante Inorgánico","Tierra para Cactus y Suculentas","Rastrillo","Macetas de Plástico","Riego por Goteo","Repelente Naturales"));                
        
        lista_vivero.push_back(Vivero("","Geraneos","Cerezo","Lechugas","Semillas de Girasol","Fertilizante Nitrogenado","Tierra para Huerto","Pala","Jardineras de Madera","Riego por Microaspersión","Aceites Esenciales"));
        
        lista_vivero.push_back(Vivero("","Violetas Africanas","Limonero","Pimientos","Semillas de Lechuga","Fertilizante Fosfatado","Sustrato de Bonsáis","Guantes de Jardineria","Jardineras de Cemento","Riego por Manguera","Insecticidas Orgánicos"));
        
        lista_vivero.push_back(Vivero("","Lirias","Mandarina","Cebollas","Semillas de Cilantro","Fertilizante Potásico","Sustrato de Orquídeas","Manguera de Jardín","Jardineras de Piedra","Riego por Inundación","Control Biológico"));
        
        lista_vivero.push_back(Vivero("","Hortensias","Naranja","Calabacines","Semillas de Chile","Fertilizante de Liberación lenta","Sustrato para Acuaponía","Soplador de Hojas","Jardineras de Metal","Riego por Surcos","Tratamiento Preventivos"));
        
        lista_vivero.push_back(Vivero("","Begonias","Avellano","Frijoles","Semillas de Albahaca","Fertilizante Líquido","Tierra Arcillosa","Cultivador de Jardín","Jardineras de Mimbre","Riego Subterráneo","Control Manual"));
        
        lista_vivero.push_back(Vivero("","Tulipanes","Mango","Pepinos","Semillas de Rábano","Fertilizante Granulado","Tierra Arenosa","Espátula de mano","Macetas Colgantes","Riego por Pivot","Rotación de Cultivos"));
        
        lista_vivero.push_back(Vivero("","Margaritas","Manzano","Berenjenas","Semillas de Pepino","Fertilizante Foliar","Tierra Negra","Tijeras de Césped","Jardineras de Barro","Riego por Pulsos","Eliminación de Plantas Infectadas"));
        
        lista_vivero.push_back(Vivero("","Peonías","Caqui","Coliflor","Semillas de Espinaca","Fertilizante de Micronutrientes","Vermiculita","Sierra de Podar","Macetas de Vidrio","Riego por Niebla","Mantenimiento del Jardín"));

// Imprimir la lista de viveros
    for(int i = 0; i < lista_vivero.size(); i++) {
        cout << "Vivero " << i+1 << ": " << lista_vivero[i].getPlantasOrnamentales() << " " << lista_vivero[i].getPLantasFrutales() << endl;
}

// Escoger un elemento
    int opcion;
    cout << "Elija un vivero: ";
    cin >> opcion;

// Acceder a la opción seleccionada
        if(opcion >= 1 && opcion <= lista_vivero.size()) {
        Vivero vivero_seleccionado = lista_vivero[opcion-1];
    // Aquí puedes trabajar con el vivero seleccionado, por ejemplo:
        cout << "Ha seleccionado el vivero " << vivero_seleccionado.getPlantasOrnamentales() << endl;
    }      else {
        cout << "Opción inválida" << endl;
    }

    }

/*int main()
    {
        list<Vivero> ListaProductos;
        
        ListaProductos.push_back(Vivero()("árboles", "arbustos"," flores", "plantas trepadoras", "plantas de interior", "cactus", "suculentas"));
        ListaProductos.push_back(Vivero()("manzanas", "peras", "duraznos", "ciruelas", "naranjas", "limones", "pomelos"));
        ListaProductos.push_back(Vivero()("hortalizas", "hierbas aromáticas"," plantas de tomate", "pimiento", "berenjena"));
        ListaProductos.push_back(Vivero()("semillas de flores"," hortalizas", "pasto"));
        ListaProductos.push_back(Vivero()("abonos orgánicos", "abonos químicos", "fertilizantes líquidos", "abonos granulados"));
        ListaProductos.push_back(Vivero()("sustratos especiales para cactus y suculentas", "turba", "humus", "perlita", "vermiculita"));
        ListaProductos.push_back(Vivero()("tijeras de podar", "guantes", "rastrillos", "palas", "regaderas", "mangueras"));
        ListaProductos.push_back(Vivero()("macetas de diferentes tamaños", "formas y materiales", "jardineras", "maceteros colgantes"));
        ListaProductos.push_back(Vivero()("sistemas de riego por goteo", "aspersores", "temporizadores", "conectores y accesorios para riego"));
        ListaProductos.push_back(Vivero()("insecticidas", "fungicidas", "acaricidas"));
    

         for (auto it = ListaProductos.begin(); it != ListaProductos.end(); ++it)
    {
        cout << "Plantas ornamentales: " << it->getPlantasOrnamentales() << endl;
        cout << "Plantas frutales: " << it->getPLantasFrutales() << endl;
        cout << "Plantas de Huerta: " << it->getPlantasHuerta() << endl;
        cout << "Semillas: " << it->getSemillas() << endl;
        cout << "Fertilizantes: " << it->getFertilizantes() << endl;
        cout << "Tierra y Sustratos: " << it->getTierraySustratos() << endl;
        cout << "Herramientas de Jardineria: " << it->getHerramientasdeJardineria() << endl;
        cout << "Macetas y Jardineras: " << it->getMacetasyJardinerias() << endl;
        cout << "Sistemas de Riego: " << it->getSistemadeRiego() << endl;
        cout << "Control de Plagas y Fugas: " << it->getControldePlagasyEnfermedades() << endl;

    }

    return 0;
}
*/
/*Plantas ornamentales: árboles, arbustos, flores, plantas trepadoras, plantas de interior, cactus, suculentas, etc.

Plantas frutales: árboles y arbustos que producen frutas como manzanas, peras, duraznos, ciruelas, naranjas, limones, pomelos, entre otros.

Plantas para huerta: hortalizas, hierbas aromáticas, plantas de tomate, pimiento, berenjena, entre otras.

Semillas: semillas de flores, hortalizas, pasto, etc.

Fertilizantes: abonos orgánicos, abonos químicos, fertilizantes líquidos, abonos granulados, etc.

Tierra y sustratos: mezclas de tierra para diferentes tipos de plantas, sustratos especiales para cactus y suculentas, turba, humus, perlita, vermiculita, etc.

Herramientas de jardinería: tijeras de podar, guantes, rastrillos, palas, regaderas, mangueras, entre otras.

Macetas y jardineras: macetas de diferentes tamaños, formas y materiales, jardineras, maceteros colgantes, etc.

Sistemas de riego: sistemas de riego por goteo, aspersores, temporizadores, conectores y accesorios para riego.

Control de plagas y enfermedades: productos para el control de plagas y enfermedades en las plantas, como insecticidas, fungicidas, acaricidas, etc.
*/