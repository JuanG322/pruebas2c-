#include <iostream>

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
        cout<<"0. Salir"<<endl;

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
                int matriz [filas][columnas], matriz2 [filas][columnas];
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
        case 0:
            break;
        }
    }
    return 0;
}
