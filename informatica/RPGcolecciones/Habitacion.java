import java.util.TreeMap;
import java.util.stream.Collectors;

/**
 * Clase Habitacion - Una habitacion en un juego de aventuras
 *
 * Esta clase es parte de la apliciacion "World of Zuul". 
 * "World of Zuul" es un juego de aventuras sencillo basado en texto.  
 *
 * Un objeto "Habitacion" representa una ubicacion en el juego. Las
 * habitaciones tienen salidas que conducen a otras habitaciones, indicadas
 * como norte, sur, este y oeste. Para cada direccion, una habitacion 
 * mantiene una referencia a la habitacion vecina, o null si no existe una
 * en es direccion.
 * 
 * @author  Michael Kolling and David J. Barnes
 * @version 2006.03.30
 */

public class Habitacion 
{
    // private String descripcion;
    // almacena las salidas de esta habitacion
    protected TreeMap<Salida, Habitacion> salidas;
    // almacena los elementos de la habitacion
    protected TreeMap<String, Elemento> elementos;
    
/* *** Modificacion para el TP **************************** */
/* Informatica Avanzada - 2021 */
    // Esta version utiliza la informacion del enumerado LugaresMapa
    protected LugaresMapa lugar;
    
    /**
     * Crea una habitacion descrita por "descripcion". 
     * Inicialmente, la habitacion no tiene salidas, "descripcion"
     * es algo asi como "una cocina" o "un patio".
     * 
     * Se incorpora el String nombre y el TreeMap de elementos para
     * adaptarlo al TP de Informatica Avanzada.
     * 
     * nombre El nombre de la habitacion
     * descripcion La descripcion de la habitacion.
     */
    public Habitacion (LugaresMapa lugar) 
    {
        //this.descripcion = descripcion;
        salidas = new TreeMap<>();
        // TODO - Modificar metodo
        this.lugar = lugar;
    }

    /**
     * Devuelve el nombre de la habitacion.
     * 
     * @return El nombre de la habitacion.
     */
    public String getNombre () {
        // TODO - Implementar metodo
        return lugar.getNombre();
    }

    /**
     * @return La descripcion corta de esta habitacion
     * (la que se definio en el constructor).
     */
    public String getDescripcionCorta()
    {
        // TODO - Implementar metodo
        return lugar.getDescripcion();
    }

    /**
     * Devuelve una descripcion de la habitacion en la forma:
     * 
     *     Usted esta en la cocina
     *     Salidas: norte oeste
     *     Elementos: Pan Pluma Flecha
     * 
     * MODIFICAR el metodo para que la descripcion incluya la
     * lista de elementos:
     * 
     * @return Una descripcion larga de esta habitacion
     */
    public String getDescripcionLarga()
    {
        // TODO - Modificar metodo
        return "Usted esta en  " + lugar.getDescripcion()
                + ".\n" + getStringDeSalidas()
                + ".\n" + getStringDeElementos();
    }

    /**
     * Agrega un elemento a la habitacion.
     * 
     * Si el elemento es de tipo liquido, no se agrega al mapa
     * y se debe imprimir:
     *     "<nombre>: se acaba de derramar en el piso"
     * donde <nombre> es el nombre del liquido derramado.
     * 
     * @param elemento El elemento a agregar.
     */
    public void addElemento (Elemento elemento) {
        // TODO - Implementar metodo
        if (elemento.getTipo() == TipoElemento.LIQUIDO) {
            System.out.println(elemento.getNombre() + ": se acaba de derramar en el piso");
            return;
        }
        elementos.put(elemento.getNombre(), elemento);
    }

    /**
     * Quita el elemento de la habitacion.
     * 
     * Si el elemento es de tipo fijo (parte del escenario)
     * no debe quitarlo, devuelve null e imprime el mensaje:
     *     "<nombre>: No se puede tomar"
     * donde <nombre> es el elemento solicitado.
     * 
     * Si el elemento no existe, devuelve null e imprime el mensaje:
     *     "<nombre>: No existe"
     * donde <nombre> es el elemento solicitado.
     * 
     * @param nombre El nombre del elemento a tomar.
     * @return El elemento a tomar.
     */
    public Elemento getElemento (String nombre) {
        // TODO - Implementar metodo
        Elemento elemento = elementos.get(nombre);
        if (elemento == null) {
            System.out.println(nombre + ": No existe");
        }
        else if (elemento.getTipo() == TipoElemento.FIJO) {
            System.out.println((elemento.getNombre()) + ": No se puede tomar");
        }
        else {
            return elementos.remove(nombre);
        }
        return null;
    }

    /**
     * Devuelve una cadena describiendo las salidas de la habitacion,
     * por ejemplo:
     *    "Elementos: Pan Pluma Flecha".
     * En caso de no haber elementos, devuelve la cadena:
     *    "No hay elementos en este lugar"
     * 
     * @return Detalles de las salidas de la habitacion
     */
    protected String getStringDeElementos ()
    {
        // TODO - Implementar metodo
        if (elementos.isEmpty()) {
            return "No hay elementos en este lugar";
        }
        String lista = "Elementos: ";
        lista += String.join(" ", elementos.keySet());
        return lista;
    }

    /**
     * Devuelve la habitacion a la que se llega si vamos desde esta habitacion
     * en la direccion indicada. Si no hay habitaciones en esa direccion,
     * se devuelve a si misma e imprime el mensaje:
     *  
     *    "No hay salida en direccion <direccion>"
     * donde <direccion> es la direccion indicada.
     * 
     * @param direccion La direccion de salida
     * @return La habitacion en la direccion indicada
     */
    public Habitacion getSalida (Salida direccion) 
    {
        // TODO - Modificar metodo
        return salidas.get(direccion);
    }

    /**
     * Define las salidas de esta habitacion.
     * @param direccion La direccion de la salida
     * @param vecina  La habitacion a la cual esta salida conduce.
     */
    public void establecerSalida (Salida direccion, Habitacion vecina) 
    {
        salidas.put(direccion, vecina);
    }

    /**
     * Devuelve una cadena describiendo las salidas de la habitacion,
     * por ejemplo
     * 
     * "Salidas: norte oeste".
     * 
     * @return Detalles de las salidas de la habitacion
     */
    private String getStringDeSalidas ()
    {
        String cadena = "Salidas:";
        for(Salida salida : salidas.keySet()) {
            cadena += " " + salida;
        }
        return cadena;
    }

}

