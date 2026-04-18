#include <iostream> // entrada y salida
#include <string>   // cadenas
#include <limits>   // limpiar el buffer / limite numerico

using namespace std;

int main()
{

    // --------------------------------------------------------
    // VARIABLES
    // --------------------------------------------------------

    // ID único del usuario
    int idUsuario;

    // Número de PC solicitada
    int numPC;

    // Tiempo de uso del equipo expresado en minutos
    int tiempoUso;

    /*
     * Nivel de estudio del usuario.
     * Valores esperados:
     *   1 = Primaria   2 = Secundaria   3 = Preparatoria
     *   4 = Universidad  5 = Posgrado   6 = Otro
     */
    int nivelEstudio;

    // nivel de estudio
    string nombreNivel;

    // menú principal
    int opcionMenu;

    /*
     * control principal
     * en este apartado escribimos "S" o "s" para continuar
     * y 'N' o 'n' para salir del sistema.
     */
    char continuar;

    // --------------------------------------------------------
    // CICLO PRINCIPAL
    // menú debe mostrarse por lo menos
    // una vez antes de preguntar si se desea continuar.
    // --------------------------------------------------------
    do
    {

        // ====================================================
        // MENÚ PRINCIPAL
        // ====================================================
        cout << "\n===========================================================================\n";
        cout << "                        SISTEMA DE REGISTRO - LABORATORIO                    \n";
        cout << "   SI           DE   EGISTR   -LABORATORI  EE         EE   II   NNNNN     NN\n";
        cout << "   SYSG       YADE  RE    RO  -LS     RIO   EE       EE    II   NN  NN    NN\n";
        cout << "   SR  TG    MA YE  RE    RO  -LA    ORIO    EE     EE     II   NN   NN   NN\n";
        cout << "   SE   TE MA   DE  REGISTRO  -LABORA         EE   EE      II   NN    NN  NN\n";
        cout << "   SU    EMA    DE  RE    RO  -LA    ORIO      EE EE       II   NN     NN NN\n";
        cout << "   SW     A     DE  RE    RO  -LA      RIO      EE         II   NN      NNNN\n";
        cout << "============================================================================\n";
        cout << "  1. REGISTRO NUEVO INGRESO\n";
        cout << "  2. CONSULTA DISPONIBILIDAD\n";
        cout << "  3. SALIR DE SISTEMA\n";
        cout << "----------------------------------------------------------------------------\n";
        cout << "  Seleccione una opcion: ";
        cin >> opcionMenu;

        // En este caso si falla (p.ej. el usuario escribe letras),
        // se limpia el estado de error y el buffer para evitar
        // un bucle infinito de lecturas fallidas.
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcionMenu = -1; // Valor default
        }

        // ====================================================
        // ESTRUCTURA switch — DESPACHO DE OPCIONES DEL MENÚ
        // ====================================================
        switch (opcionMenu)
        {

        // ------------------------------------------------
        // OPCIÓN 1: REGISTRAR INGRESO
        // ------------------------------------------------
        case 1:
            cout << "\n--- REGISTRO DE NUEVO INGRESO ---\n";

            // --- Validación del ID de usuario (debe ser > 0) ---
            do
            {
                cout << "Ingrese el ID del usuario: ";
                cin >> idUsuario;

                // Verificar fallo de tipo de dato
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    idUsuario = 0; // aqui forzamos a repetir el ciclo
                }

                // Notificar si el valor es inválido
                if (idUsuario <= 0)
                {
                    cout << "[ERROR] El ID debe ser un numero mayor a 0. "
                         << "Intente de nuevo.\n";
                }

            } while (idUsuario <= 0); // Repetir mientras sea inválido

            // --- Validación del número de PC (rango 1 al  20) ---
            do
            {
                cout << "Ingrese el numero de PC solicitada (1-20): ";
                cin >> numPC;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    numPC = 0; // Fuerza a repetir el ciclo
                }

                if (numPC < 1 || numPC > 20)
                {
                    cout << "[ERROR] El numero de PC debe estar entre 1 y 20. "
                         << "Intente de nuevo.\n";
                }

            } while (numPC < 1 || numPC > 20);

            // --- Captura del tiempo de uso  ---
            cout << "Ingrese el tiempo de uso en minutos: ";
            cin >> tiempoUso;

            // --- Captura y decodificación del nivel de estudio ---
            cout << "\nNivel de estudio:\n";
            cout << "  1. Primaria\n";
            cout << "  2. Secundaria\n";
            cout << "  3. Preparatoria\n";
            cout << "  4. Universidad\n";
            cout << "  5. Posgrado\n";
            cout << "  6. Otro\n";
            cout << "  Seleccione: ";
            cin >> nivelEstudio;

            /*
             * Usamos otro switch para traducir el número
             * de nivel al nombre descriptivo correspondiente.
             * Si el valor está fuera de rango se asigna "Desconocido".
             */
            switch (nivelEstudio)
            {
            case 1:
                nombreNivel = "Primaria";
                break;
            case 2:
                nombreNivel = "Secundaria";
                break;
            case 3:
                nombreNivel = "Preparatoria";
                break;
            case 4:
                nombreNivel = "Universidad";
                break;
            case 5:
                nombreNivel = "Posgrado";
                break;
            case 6:
                nombreNivel = "Otro";
                break;
            default:
                nombreNivel = "Desconocido";
                cout << "[AVISO] Nivel no reconocido; "
                     << "se registrara como 'Desconocido'.\n";
            }

            // --- Confirmación del registro exitoso ---
            cout << "\n--- REGISTRO GUARDADO EXITOSAMENTE ---\n";
            cout << "  ID de usuario : " << idUsuario << "\n";
            cout << "  PC asignada   : " << numPC << "\n";
            cout << "  Tiempo de uso : " << tiempoUso << " minutos\n";
            cout << "  Nivel estudio : " << nombreNivel << "\n";
            cout << "--------------------------------------\n";
            break;

        // ------------------------------------------------
        // OPCIÓN 2: CONSULTAR DISPONIBILIDAD
        // ------------------------------------------------
        case 2:
            cout << "\n--- DISPONIBILIDAD DE EQUIPOS ---\n";
            /*
             * En esta primera fase los datos son estáticos.
             * En versiones posteriores se consultará una
             * estructura de datos dinámica.
             */
            cout << "  Total de PCs en el laboratorio : 20\n";
            cout << "  PCs ocupadas                   :  5\n";
            cout << "  PCs disponibles                : 15\n";
            cout << "---------------------------------\n";
            cout << "  PCs ocupadas: 1, 3, 7, 12, 18\n";
            cout << "---------------------------------\n";
            break;

        // ------------------------------------------------
        // OPCIÓN 3: SALIR DEL SISTEMA
        // ------------------------------------------------
        case 3:
            cout << "\nCerrando el sistema. Hasta luego.\n";
            return 0; // Terminación inmediata y limpia del programa

        // ------------------------------------------------
        // CASO DEFAULT — opción no reconocida
        // ------------------------------------------------
        default:
            cout << "\n[ERROR] Opcion invalida. "
                 << "Por favor elija 1, 2 o 3.\n";
            break;

        } // fin switch (opcionMenu)

        // ====================================================
        // PREGUNTA DE CONTINUIDAD AL ADMINISTRADOR
        // ====================================================
        cout << "\n¿Desea registrar otro acceso? (S/N): ";
        cin >> continuar;

        /*
         * aqui se convierte a mayusculas para aceptar tanto 's' como 'S'
         * y tanto 'n' como 'N' sin necesidad de comparaciones o tiempo perdido.
         */
        continuar = toupper(continuar);

        // Mientras la respuesta no sea 'N' el ciclo continúa
    } while (continuar != 'N');

    // --------------------------------------------------------
    // MENSAJE DE CIERRE CUANDO EL ADMIN DECIDE SALIR
    //                MUCHAS GRACIAS
    // --------------------------------------------------------
    cout << "\nSesion de administracion finalizada. "
         << "Hasta pronto.\n\n";

    return 0; // Código de salida 0 → ejecución exitosa
}
