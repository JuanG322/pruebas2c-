#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i = 1;

    while(i != 0){
        cout<<"Escoje uno de los ejercicios"<<endl;
        cout<<"1. Definir una matriz y rellenarla"<<endl;
        cout<<"2. Mostra la diagonal de una matriz 3x3"<<endl;
        cout<<"3. rellenar una matriz con otra"<<endl;
        cout<<"4. Hacer todo la anterior"<<endl;
        cout<<"5. Volver a una matriz su transpuesta"<<endl;
        cout<<"6. Suma e 2 matrices"<<endl;
        cout<<"7. Verificar si la matriz es simetrica"<<endl;
        cout<<"8. Producto de 2 matrices 3x3"<<endl;
        cout<<"Cadenas de caracters"<<endl;
        cout<<"9. Basicos cadenas de caracteres"<<endl;
        cout<<"10. Mostra en pantalla si tiene menos de 10 caracteres"<<endl;
        cout<<"11. copiar un arreglo en otro"<<endl;
        cout<<"12. comparar cadenas"<<endl;
        cout<<"13. Compara si 2 cadenas son iguales y si no cual sere mayor alfabeticamente"<<endl;
        cout<<"14. Unir 2 cadenas de caracteres"<<endl;
        cout<<"15. Unir una cadena con otra que ingresa el usuario"<<endl;
        cout<<"16. Verificar si una palabra es palindroma"<<endl;
        cout<<"17. De minusculas a mayusculas y de minusculas a mayusculas"<<endl;
        cout<<"18. Convertir cadena a numeros"<<endl;
        cout<<"19. Contar las letras de una frase"<<endl;
        cout<<"Metodos"<<endl;
        cout<<"20. Metodo borbuja"<<endl;
        cout<<"21. Metodo por insercion"<<endl;
        cout<<"22. Metodo por seleccion"<<endl;
        cout<<"Busquedas"<<endl;
        cout<<"23. Busqueda secuencial"<<endl;
        cout<<"24. Busqueda binaria"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Estructuras"<<endl;
        cout<<"25. "<<endl;

        cout<<"Escoje: ";
        cin>>i;
        switch (i) {
        case 1:{
            int filas = 0,columnas = 0;

            cout<<"Digite el numeros de filas: ";cin>>filas;
            cout<<"Digite el numeros de columnas: ";cin>>columnas;

            int numeros [filas][columnas];

            for(int i = 0;i<filas;i++ ){
                for(int j=0; j<columnas; j++ ){
                    cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";cin>>numeros[i][j];
                }
            }

            for(int i = 0;i<filas;i++ ){
                for(int j=0; j<columnas; j++ ){
                    cout<<numeros[i][j];
                }
                cout<<endl;
            }
            cout<<endl;

            break;
        }
        case 2:{

            int j = 0;
            int matriz[3][3] = { {22, 2, 3},
                                 {4, 45, 6},
                                 {7, 8, 89} };
            cout<<"Los valores de la diagonal principal son: ";
            for(int i = 0;i<3; i++){
                cout<<matriz[i][j]<<" ";
                j++;
            }
            cout<<endl;
            break;
        }

        case 3:{
            int matriz[2][2] = {{1, 2},
                                {3, 4}};
            int matriz2[2][2];

            for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        matriz2[i][j] = matriz[i][j];
                    }
                }
            for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << matriz2[i][j] << " ";
                    }
                    cout << endl;
                }
            cout<<endl;
            break;
        }

        case 4:{
            int filas = 0,columnas = 0;

            cout<<"Digite el numeros de filas: ";cin>>filas;
            cout<<"Digite el numeros de columnas: ";cin>>columnas;
            int numeros [filas][columnas];
            int matriz2[filas][columnas];

            for(int i = 0;i<filas;i++ ){//Lleno con numeros aleatorios que da el usuario
                for(int j=0; j<columnas; j++ ){
                    cout<<"Digite un numero: ";cin>>numeros[i][j];
                }
            }

            for(int i = 0;i<filas;i++ ){
                for(int j=0; j<columnas; j++ ){
                    matriz2[i][j] = numeros[i][j];
                }
            }

            for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << matriz2[i][j] << " ";
                    }
                    cout << endl;
                }
            cout<<endl;

            break;
        }

        case 5:{
            int matriz[3][3];

            for(int i = 0;i<3;i++ ){//Lleno con numeros aleatorios que da el usuario
                for(int j=0; j<3; j++ ){
                    cout<<"Digite un numero: ";cin>>matriz[i][j];
                }
            }
            cout<<"Matriz original:"<<endl;
            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << matriz[i][j] << " ";
                    }
                    cout << endl;
                }

            cout<<"Matriz transpuesta"<<endl;
            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << matriz[j][i] << " ";
                    }
                    cout << endl;
                }
            cout<<endl;
            break;
        }

        case 6:{
            int matriz[3][3] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

            int matriz2[3][3] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};
            int resultado [3][3];

            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        resultado[i][j] = matriz2[i][j] + matriz[i][j];
                    }
                }
            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << resultado[i][j] << " ";
                    }
                    cout << endl;
                }
            cout<<endl;

            break;
        }
        case 7:{
            int filas,columnas;
            bool bandera = false;
            cout<<"Digite el numeros de filas: ";cin>>filas;
            cout<<"Digite el numeros de columnas: ";cin>>columnas;

            if(filas == columnas){
                int matriz [filas][columnas];
                for(int i = 0;i<filas;i++ ){//relleno la matriz
                    for(int j=0; j<columnas; j++ ){
                        cout<<"Digite un numero: ";cin>>matriz[i][j];
                    }
                }
                for (int i = 0; i < 2; i++) {//vuelvo la matriz su inversa
                        for (int j = 0; j < 2; j++) {
                            if(matriz[i][j] == matriz[j][i]){
                                bandera = true;
                            }
                    }
                }
            }

            if(bandera == true){
                cout<<"La matriz es simetrica"<<endl<<endl;
            }
            else cout<<"No es simetrica"<<endl<<endl;
            break;
        }

        case 8:{
            int matriz[3][3] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

            int matriz2[3][3] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};
            int resultado [3][3];

            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        resultado[i][j] = matriz2[i][j] * matriz[i][j];
                    }
                }

            cout<<"El producto de 2 matrices es "<<endl<<endl;
            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << resultado[i][j] << " ";
                    }
                    cout << endl;
                }
            cout<<endl;
            break;
        }

        case 9:{
            char nombre[]="juan", nombre2[10];
            char saludo[] = "Hola";
            char saludo2 [] = {'H','o','l','a','2'};
            char palabra[20];

            cout << "Ingrese algo de menos de 10 caracteres: ";
            cin.ignore();
            cin.getline(palabra, 20, '\n');
            cout << "Palabra ingresada: " << palabra << endl;
            cout << palabra <<" "<<saludo<<" "<<saludo2<<" "<<palabra<<endl;

            int longitud = strlen(palabra);cout<<"Longitud de lacadena ingresada: "<<longitud<<endl;
            strcpy(nombre2,nombre);
            cout<<nombre2<<endl;
            break;
        }

        case 10:{
            char palabra [50];
            cout << "Ingrese algo de menos de 10 caracteres: ";
            cin.ignore();
            cin.getline(palabra, 20, '\n');

            int longitud = strlen(palabra);
            if(longitud <= 10) cout<<"Ingresate la palabra: "<<palabra<<endl<<endl;
            break;
        }

        case 11:{
            char arreglo[50], arreglo2[50];
            cout <<endl<< "Ingrese algo de menos de 50 caracteres: ";
            cin.ignore();
            cin.getline(arreglo, 50, '\n');

            strcpy(arreglo2,arreglo);
            cout<<arreglo2<<endl<<endl;

            break;
        }

        case 12:{
            char palabra[]="aHola",palabra2[]="Hola";

            if(strcmp(palabra, palabra2) == 0){
                cout<<endl<<"La cadenas son iguales"<<endl<<endl;
            }else cout<<endl<<"Las cadenas son diferentes"<<endl<<endl;

            if(strcmp(palabra, palabra2) > 0){
                cout<<endl<<palabra<<" Esta despues alfebeticamente que "<<palabra2<<endl<<endl;
            }else cout<<endl<<palabra2<<" Esta despues alfebeticamente que "<<palabra<<endl<<endl;
            break;
        }

        case 13:{
            char arreglo[50], arreglo2[50];
            cout <<endl<< "Ingrese la cadena 1: ";
            cin.ignore();
            cin.getline(arreglo, 50, '\n');

            cout <<endl<< "Ingrese la cadena 2: ";
            //cin.ignore();
            cin.getline(arreglo2, 50, '\n');

            if(strcmp(arreglo, arreglo2) == 0){
                cout<<endl<<"La cadenas son iguales"<<endl<<endl;
            }
            else{
                if(strcmp(arreglo, arreglo2) > 0){
                    cout<<endl<<arreglo<<" Esta mayor alfebeticamente que "<<arreglo2<<endl<<endl;
                }else cout<<endl<<arreglo2<<" Esta mayor alfebeticamente que "<<arreglo<<endl<<endl;
            }

            break;
        }

        case 14:{
            char cat1[] = "esto es una cadena ", cat2[] = " de ejemplo",cat3[30];

            strcpy(cat3, cat1);
            strcat(cat3, cat2);

            cout<<"cadena: "<<cat3<<endl<<endl;

            break;
        }
        case 15:{
            char cadena1[] = "Hola que tal ", nombre[50];

            cout<<"Ingrese su nombre: ";
            cin.ignore();
            cin.getline(nombre, 50, '\n');

            cout<<strcat(cadena1, nombre)<<endl<<endl;

            break;
        }
        case 16:{
            char cat[]= "juan",cat2[]= "reconocer";
            cout<<strrev(cat)<<" "<<strrev(cat2)<<endl;

            if(strcmp(cat, strrev(cat)) == 0){
                cout<<"Es palindroma"<<endl<<endl;
            }else cout <<"No es palindroma"<<endl<<endl;
            break;
        }

        case 17:{
            char nombre[] = "Juan", nombre2[] = "Jose", nombre3[] = "GIRALDO", nombre4[50];
            cout<<strupr(nombre)<<endl;
            cout<<strlwr(nombre3)<<endl;

            if(strcmp(nombre, nombre2) == 0) cout<<"Son igual"<<endl;
            else cout<<"No son iguales"<<endl;

            cout<<"ingrese su nombre en mayusculas: ";
            cin.ignore();
            cin.getline(nombre4, 50, '\n');

            if(nombre4[0]== 'A')cout<<strlwr(nombre4)<<endl<<endl;
            else cout<<nombre4<<endl;

            break;
        }

        case 18:{
            char cat[] = "123", cat2[] = "123.21", cat3[20], cat4[20];
            int numero, numero3;float numero2, numero4;

            numero = atoi(cat);
            numero2 = atof(cat2);

            cout<<numero<<endl;
            cout<<numero2<<endl<<endl;

            cout<<"Ingrese un numero entero: ";
            cin.ignore();
            cin.getline(cat3, 20, '\n');

            cout<<"Ingrese un numero flotante: ";
            cin.ignore();
            cin.getline(cat4, 20, '\n');

            numero3 = atoi(cat3);
            numero4 = atof(cat4);

            cout<<numero3<<endl;
            cout<<numero4<<endl<<endl;
            break;
        }

        case 19:{
            char frase[30];
            int vocal_a = 0, vocal_e = 0,vocal_i = 0, vocal_o = 0, vocal_u = 0;

            cout<<"Ingresa una frase: ";
            cin.ignore();
            cin.getline(frase, 30, '\n');

            for(i = 0;i < 30; i++){
                switch (frase[i]) {

                case 'a': vocal_a++;break;
                case 'e': vocal_e++;break;
                case 'i': vocal_i++;break;
                case 'o': vocal_o++;break;
                case 'u': vocal_u++;break;
                }
            }
            cout<<"Vocal a:"<<vocal_a<<endl;
            cout<<"Vocal e:"<<vocal_e<<endl;
            cout<<"Vocal i:"<<vocal_i<<endl;
            cout<<"Vocal o:"<<vocal_o-1<<endl;
            cout<<"Vocal u:"<<vocal_u<<endl<<endl;
            break;
        }

        case 20:{
            int numeros[] = {4,1,3,5,2};
            int i,j,aux;

            for(i = 0; i<5; i++){
                for(j=0; j<5; j++){
                    if(numeros[j]>numeros[j+1]){
                        aux = numeros[j];
                        numeros[j]=numeros[j+1];
                        numeros[j+1] = aux;
                    }
                }
            }
            cout<<"Orden ascendente "<<endl;

            for (i = 0; i < 5; ++i) {
                cout<<numeros[i]<<" "<<endl;
            }

            cout<<"Orden decendente "<<endl;
            for (i = 5; i >= 0; i--) {
                cout<<numeros[i]<<" "<<endl;
            }
            break;
        }

        case 21:{
            int numeros[] = {4,1,3,5,2};
            int i,pos,aux;

            for(i = 0; i < 5; i++){
                pos = i;
                aux = numeros[i];
                while((pos > 0) && (numeros[pos-1]>aux)){
                    numeros[pos] = numeros[pos-1];
                    pos--;
                }
                numeros[pos] = aux;
            }

            cout<<"Orden ascendente "<<endl;

            for (i = 0; i < 5; ++i) {
                cout<<numeros[i]<<" "<<endl;
            }

            cout<<"Orden decendente "<<endl;
            for (i = 4; i >= 0; i--) {
                cout<<numeros[i]<<" "<<endl;
            }
            break;
        }

        case 22:{
            int numeros[] = {4,1,3,5,2};
            int i,j,aux,min;

            for(i = 0; i<5; i++){
                min = i;
                for(j = i+1; j<5;j++){
                    if(numeros[j]<numeros[min])
                        min = j;
                }
                aux = numeros[i];
                numeros[i] = numeros[min];
                numeros[min] = aux;
            }

            cout<<"Orden ascendente "<<endl;

            for (i = 0; i < 5; ++i) {
                cout<<numeros[i]<<" "<<endl;
            }

            cout<<"Orden decendente "<<endl;
            for (i = 4; i >= 0; i--) {
                cout<<numeros[i]<<" "<<endl;
            }
            break;
        }

        case 23:{
            char b[]= {'e','o','a','i','u'};
            int a[] = {4,1,3,5,2};
            int i,dato,dato2;
            bool bandera = false;
            dato = 10;
            dato2 = 'a';
            i = 0;
            while((bandera == false) && (i<5)){
                if(a[i] == dato) bandera = true;
                i++;
            }
            cout<<endl;
            if(bandera == false) cout<<"El numero a buscar no existe en el arreglo"<<endl<<endl;
            else cout<<"El numero "<<dato<<" a sido encontrado en la posicion "<<i-1<<endl<<endl;

            i = 0;
            while((bandera == false) && (i<5)){
                if(b[i] == dato2) bandera = true;
                i++;
            }
            cout<<endl;
            if(bandera == false) cout<<"El caracter a buscar no existe en el arreglo"<<endl<<endl;
            else cout<<"El caracter "<<dato2<<" a sido encontrado en la posicion "<<i-1<<endl<<endl;

            break;
        }

        case 24:{
            int numeros[] = {1,2,3,4,5};
            int inf,sup,mid,dato;
            bool bandera = false;

            dato = 4;

            inf = 0;
            sup = 5;

            while(inf <= sup){
                mid = (inf+sup)/2;

                if(numeros[mid] == dato){
                    bandera = true;
                    break;
                }
                if(numeros[mid] > dato){
                    sup = mid;
                    mid = (inf+sup)/2;
                }
                if(numeros[mid] < dato){
                    inf = mid;
                    mid = (inf+sup)/2;
                }
            }
            cout<<endl;
            if(bandera == true) cout<<"El numero "<<dato<<" a sido encontrado en la posicion: "<<mid<<endl<<endl;
            else cout<<"El numero no a sido encontrado"<<endl<<endl;
            break;
        }

        case 25:{
            break;
        }
        case 0:
            break;
        }
    }
    return 0;
}
