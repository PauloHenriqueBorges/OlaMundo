#include<iostream>
#include<cmath>
#include<string>
double soma(double a, double b){
	return a + b;
}
double div(double a, double b){
	return a / b;
}
double mult(double a, double b){
	return a * b;
}
double pot(double a, double b){
	return pow(a,b);
}

int main(int argc, char **argv) {
	double num1;
	double num2;
	double res;
	char operacao;

	std::cout << "!acho que deu certo a potencialização!" << std::endl;
	std::cout << "Digite um valor: ";
	std::cin >> num1;
	std::cout << "Digite outro valor: ";
	std::cin >> num2;
	std::cout << "|+|-|*|/|^|----Digite qual será a operação: ";
	std::cin >> operacao;

	switch (operacao) {
		case '+': res = soma(num1, num2);
			break;
		case '-': res = soma(num1, -num2);
			break;
		case '/': res = div(num1, num2);
			break;
		case '*': res = mult(num1, num2);
			break;
		case '^': res = pot(num1, num2);
			break;
		default:
			break;
			}
	std::cout << res;
}
