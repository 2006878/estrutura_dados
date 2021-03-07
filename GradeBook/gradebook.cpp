#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> //oprograma utiliza a classe padrão string C++
using std::string;
using std::getline;

//definição da classe GradeBook
class GradeBook 
{
    public:
    //função que exibe a mensagem de boas vindas
    void displayMessage( string courseName ) 
    {
        cout << "Welcome to the Grade Book for\n" << courseName << "!" 
        << endl;
    }// fim da displayMessage
};//fim da classe GradeBook

//a função main inicia a execução do programa
int main() 
{
    string nameOfCourse; //string de caracteres
    GradeBook myGradeBokk; //cria o objeto GradeBook

    //prompt para entrada do nome do curso
    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse); //lê o nome do curso
    cout <<endl; //gera saida de linha em branco

    myGradeBokk.displayMessage( nameOfCourse ); //chama a função
    return 0; //indica a terminação bem sucedida 
}//fim de main