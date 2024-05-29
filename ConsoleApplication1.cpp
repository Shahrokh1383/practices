//finding and cOunting the + , - , av
/*#include <iostream>
using namespace std;
int main()
{
	int a;
	int positive = 0,  negative = 0;
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter the number :";
		cin >> a;
		if (a > 0)
		{
			positive++;
		}
		else if (a < 0)
		{
			negative++;
		}
		sum += a;
	}
	double average = sum / 3;
	cout << "+ numbers are :" << positive<<'\n';
	cout << "- numbers are :" << negative<<'\n';
	cout << " the average is :" << average << '\n';
	return 0;
}*/
//operating the weigth average
/*#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3;
	int w1, w2, w3;
	cout << "enter the grade 1 and its number of units :\n";
	cin >> n1 >> w1;
	cout << "enter the grade 2 and its number of units :\n";
	cin >> n2 >> w2;
	cout << "enter the grade 3 and its number of units :\n";
	cin >> n3 >> w3;
	//operating the gpa
	double average = (w1 * n1 + w2 * n2 + w3 * n3) / (w1 + w2 + w3);
	cout << "the gpa is :" << average;
	return 0;
}*/
//operating the fuel use
/*#include<iostream>
using namespace std;
int main()
{
	 int fuel_left, usefuel;
	 cout << "how much fuel is left ? ";
	 cin >> fuel_left;
	 cout << "how much fuel does it burn in 100km ? ";
	 cin >> usefuel;
	 //callculating the km it can go
	 float distance = (fuel_left / usefuel) * 100;
	 if (distance < 100)
	 {
		 cout << "ERROR : fill up the gas";
	 }
	 else {
		 cout << "the possible distance to travel is about " << distance;
	 }
	return 0;
}*/
//finding max , min and average
/*#include <iostream>
using namespace std;
int findmax(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int finmin(const int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int callgpa(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "enter the num :";
		cin >> a[i];
	}
	int LARGEST = findmax(a, 5);
	int SMALLEST = finmin(a, 5);
	float average = callgpa(a, 5);
	cout << "average is:" << average << '\n';
	cout << "largest is:" << LARGEST << '\n';
	cout << "smallest is:" << SMALLEST << '\n';
	return 0;
}*/
//ranking the students by score
/*#include <iostream>
using namespace std;
int main()
{
	float grade;
	string rank;
	bool is_conditional = false;
	cout << "enter the student's grade : ";
	cin >> grade;
	if (grade >= 17 && grade < 20)
	{
		rank = "A";
	}
	else if (grade >= 14 && grade < 17)
	{
		rank = "B";
	}
	else if (grade >= 10 && grade < 14)
	{
		rank = "C";
		
	}
	else if (grade >= 0 && grade < 10)
	{
		rank = "D";
		is_conditional = true;
	}
	else {
		cout << "invalid grade please enter the number between 0 - 20 :"<<'\n';
		return 1;
	}
	//print rank
	cout << "Rank :" << rank << '\n';
	//print conditional status
	if (is_conditional)
	{
		cout << "conditional status : yes" << '\n';
	}
	else {
		cout << "conditional status : no" << '\n';
	}
	return 0;
}*/
//checking the number is even or odd
/*#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number between 0-10 : ";
	do {
		cin >> num;
		if (num % 2 == 0)
		{
			cout << "it is even\n";
		}
		else {
			cout << "it is odd\n";
		}
		if (num > 5)
		{
			cout << "the number is above 5 \n";
		}
		else if (num < 5)
		{
			cout << "the number is below the 5 \n";
		}
	} while (num >= 0 && num <= 10);
	return 0;
}*/
//reversing the numbers part 1
/*#include <iostream>
using namespace std;
int reverse(int n)
{
	int sum = 0, i;
	while (n > 0)
	{
		i = n % 10;
		sum = sum * 10 + i;
		n = n / 10;
	}
	return sum;
}
int main()
{
	int num;
	cout << "enter the number :";
	cin >> num;
	cout << "the reversal number is :" << reverse(num);
	return 0;
}*/
//y=ax +b format
/*#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	cout << "enter the coordination of point(x1 ,y1) :";
	cin >> x1 >> y1;
	cout << "enter the coordination of point (x2 ,y2) :";
	cin >> x2 >> y2;
	if (x1 == x2)
	{
		cout << "the format is not y = ax +b"<<'\n';
		cout << "the equation is :" << x1 << '\n';
	}
	else {
		float a = (y2 - y1) / (x2 - x1);
		float b = y1 - a * x1;
		cout << "y =" << a << "x+ " << b << '\n';
	}
	return 0;
}*/
//clock setting part 1
/*#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int hour, minute;
	cout << "************ welcome to clock setting ************ : " << '\n';
	cout << "set the hour :";
	cin >> hour;
	cout << "set the minute :";
	cin >> minute;
	if (hour >= 12 && hour < 24)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "PM\n";
	}
	else if (hour >= 0 && hour < 12)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "AM\n";
	}
	while (hour >= 24)
	{
		cout << "wrong input!";
		break;
	}
	return 0;
}*/
//clock setting part 2
/*#include <iostream>
using namespace std;
int main()
{
	int hour;
	cout << "************ welcome to clock setting ************ : " << '\n';
	cout << "enter the hour :";
	cin >> hour;
	if (hour >= 12)
	{
		cout << hour << ":" << "00 " << "PM\n";
	}
	if (hour >= 9 && hour < 12)
	{
		cout << hour << ":" << "00 " << "AM\n";
	}
	else if (hour >= 0 && hour < 9)
	{
		cout << "0" << hour << ":" << "00 " << "AM\n";
	}
	return 0;
}*/
//checking the positivity , negativity or equality
/*#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter the a: \n";
	cin >> a;
	cout << "enter the b: \n";
	cin >> b;
	cout << "*****************************************************\n";
	//finding the maximum number
	if (a > b) {
		cout << "max is: a\n";
	}
	else if (b > a) {
		cout << "max is: b\n";
	}
	else {
		if (a == b || b == a) {
			cout << "a and b are equal\n";
		}
	}//finding the max number is finished
	cout << "*****************************************************\n";
	//finding that the number is positive for a
	if (a > 0) {
		cout << "a is positive\n";
	}
	//finding that the number is negative for a
	else if (a < 0) {
		cout << "a is negative\n";
	}
	//finding that the number is 0 for a
	else
	{
		cout << "a is zero\n";
	}
	//finding that the number is positive for b
	if (b > 0) {
		cout << "b is positive\n";
	}
	//finding that the number is negative for b
	else if (b < 0) {
		cout << "b is negative\n";
	}
	//finding that the number is 0 for b
	else
	{
		cout << "b is zero\n";
	}//finding the number positive , negative
	cout << "*****************************************************\n";
	//comparing the negativity , positivity and zero between a and b
	if (a > 0 && b > 0)
	{
		cout << "both a and b are positive\n";
	}
	if (a < 0 && b < 0)
	{
		cout << "both a and b are negative\n";
	}
	if (a > 0 && b < 0)
	{
		cout << "a is positive and b is negative\n";
	}
	if (a < 0 && b >0)
	{
		cout << "a is negative and b is positive\n";
	}
	else if (a == 0 && b == 0)
	{
		cout << "both are zero\n";
	}//finish comparing
	return 0;
}*/
//operating the gpa
/*#include<iostream>
using namespace std;
int main()
{
	float n1, n2, n3;
	int w1, w2, w3;
	cout << "enter the grade 1 amd its number of units : \n";
	cin >> n1 >> w1;
	cout << "enter the grade 2 amd its number of units : \n";
	cin >> n2 >> w2;
	cout << "enter the grade 3 amd its number of units : \n";
	cin >> n3 >> w3;
	//operating the gpa
	double average = (w1 * n1 + w2 * n2 + w3 * n3) / (w1 + w2 + w3);
	cout << "the gpa is :" << average;
	return 0;
}*/
//car class
/*#include <iostream>
#include <string>
using namespace std;
class car {
public :
	string model;
	string brand;
	int distancedriven;
	void drive(int kilometer) {
		distancedriven += kilometer;
	}
	void showdata()
	{
		cout << "Brand : " << brand << '\n';
		cout << "Model : " << model << '\n';
		cout << "Distance Driven : " << distancedriven << "Km" << '\n';
	}
};
int main()
{
	car mycar;
	cout << "Enter the brand of the car : ";
	cin >> mycar.brand;
	cout << "Enter the model of the car : ";
	cin >> mycar.model;
	cout << "Enter the initial kilometer :";
	cin >> mycar.distancedriven;
	int distance;
	cout << "Enter the distance driven :";
	cin >> distance;
	mycar.drive(distance);
	mycar.showdata ();
	return 0;
}*/
//dog class
/*#include <iostream>
#include <string>
using namespace std;
class dog {
private:
	int birthyear;
	string name;
	int score;

public:
	dog(string name, int brthyear) : name(name), birthyear(birthyear), score(0) {}
	int getyear(int currentyear, int birthyear)
	{
		return currentyear - birthyear;

	}
	void bark()
	{
		cout << name << " Hup \n";
	}
	void learn()
	{
		score++;
	}
	void showinfo(int currentyear , int birthyear)
	{
		cout << "Name : " << name << '\n';
		cout << "Birthyear : " << getyear(currentyear, birthyear) << '\n';
		cout << "Score : " << score << '\n';
	}
};
int main()
{
	string name;
	int birthyear, currentyear;
	cout << "enter the dog's name and birthyear : ";
	cin >> name >> birthyear;
	cout << "enter the current year : ";
	cin >> currentyear;
	dog mydog(name, birthyear);
	mydog.getyear(currentyear, birthyear);
	int command;

	while (true)
	{
		cout << "enter 1 to bark _ 2 to teach the dog _ 0 to exit and show the info ";
		cin >> command;
		if (command == 1)
		{
			mydog.bark();
		}
		if (command == 2)
		{
			mydog.learn();
		}
		else if (command == 0)
		{
			mydog.showinfo(currentyear , birthyear);
			break;
		}
	}
	return 0;
}*/
//credit card
/*#include <iostream>
#include <string>
using namespace std;
class creditcard {
private :
	string 	cardnumber; 
public :
	void setcardnumber(string cardnumber)
	{
		this->cardnumber = cardnumber;
	}
	//validation for cardnumber
	bool isvalidcard()
	{
		return cardnumber.length() == 16;
	}
	string getbankname(string& cardnumber)
	{
		if (cardnumber.substr(0, 6) == "603799") {return "Meli Bank";}
		if (cardnumber.substr(0, 6) == "603769") {return "Saderat Bank";}
		if (cardnumber.substr(0, 6) == "610433") {return "Melat Bank";}
		if(cardnumber.substr(0, 6) == "589210") {return "Sepah Bank";}
		if (cardnumber.substr(0, 6) == "627648") { return "Tosee Saderat Bank"; }
		if (cardnumber.substr(0, 6) == "627961") { return "Sanat & Maadan Bank"; }
		if (cardnumber.substr(0, 6) == "603770") { return "Keshavarzi Bank"; }
		if (cardnumber.substr(0, 6) == "628023") { return "Maskan Bank"; }
		if (cardnumber.substr(0, 6) == "627760") { return "Post Bank Iran"; }
		if (cardnumber.substr(0, 6) == "502908") { return "Tosee Taavon Bank"; }
		if (cardnumber.substr(0, 6) == "627412") { return "Eqtesade Novin Bank"; }
		if (cardnumber.substr(0, 6) == "622106") { return "Parsian Bank"; }
		if (cardnumber.substr(0, 6) == "502229") { return "Psargad Bank"; }
		if (cardnumber.substr(0, 6) == "627488") { return "Karafarin Bank"; }
		if (cardnumber.substr(0, 6) == "621986") { return "Saman Bank"; }
		if (cardnumber.substr(0, 6) == "639346") { return "Sina Bank"; }
		if (cardnumber.substr(0, 6) == "639607") { return "Sarmaye Bank"; }
		if (cardnumber.substr(0, 6) == "636214") { return "Tat Bank"; }
		if (cardnumber.substr(0, 6) == "502806") { return "Shahr Bank"; }
		if (cardnumber.substr(0, 6) == "502938") { return "Day Bank"; }
		if (cardnumber.substr(0, 6) == "627353") { return "Tejarat Bank"; }
		if (cardnumber.substr(0, 6) == "589463") { return "Refah Bank"; }
		if (cardnumber.substr(0, 6) == "627381") { return "Ansar Bank"; }
		if (cardnumber.substr(0, 6) == "639370") { return "Mehre Eqtesad Bank"; }
		else {
			cout << "it is invalid please insert another 16 digits\n";
		}
	}
	void princardinfo() {
		cout << "Card : " << cardnumber.substr(0, 4) << "-" << cardnumber.substr(4, 4) << "-" << cardnumber.substr(8, 4) << "-" << cardnumber.substr(12, 4) << '\n';
		cout << "Bank : " << getbankname (cardnumber) << '\n';
	}
};
int main()
{
	creditcard cc;
	string cardnumber;
	cout << "enter your 16-digit cardnumber : ";
	cin >> cardnumber;
	cc.setcardnumber(cardnumber);
	if (cc.isvalidcard())
	{
		cc.princardinfo();
	}
	else {
		cout << "your number is invalid please enter another 16-digit\n";
	}

	return 0;
}*/
//finding whether the char is number or not
/*#include <iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= '0' && a <= '9')
	{
		cout << "it is a number " << '\n';
	}
	else {
		cout << "it is not a number " << '\n';
	}
	return 0;
}*/
//starpattern part1
/*#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}
		return 0;
}*/
//starpattern part2
/*#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the number : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	return 0;
}*/
//any number multiple
/*#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the numbers multiple : ";
	cin >> num;
	for (int i = 0; i <= 100; i += num)
	{
		cout << i << '\t';
	}
	return 0;
}*/
//starpattern part3
/*#include <iostream>
using namespace std;
int main()
{
	int numofstars;
	cout << "enter the number of stars : ";
	cin >> numofstars;
	int initialspaces = 3 * (numofstars - 1);
	//print the upper part 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < initialspaces + i + numofstars - 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < numofstars; k++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	//print the middle part 
	for (int i = 1; i <= numofstars * 5; i++)
	{
		cout << "*";
	}
	cout << '\n';
	//print the lower part
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < initialspaces + i + numofstars - 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < numofstars; k++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}*/
//setting the passcode
/*#include <iostream>
using namespace std;
int main()
{
	int pass;
	cout << "set the password : ";
	cin >> pass;
	int usepass;
	do {
		cout << "enter the password : ";
		cin >> usepass;
		if (usepass == pass)
		{
			cout << "welcome\n";
			break;
		}
	}while(pass != usepass);
	return 0;
}*/
//finding the prime number part 1
/*#include <iostream>
using namespace std;

bool isPrime(int number) {
	if (number <= 1)
		return false;
	if (number <= 3)
		return true;
	if (number % 2 == 0 || number % 3 == 0)
		return false;
	for (int i = 5; i * i <= number; i = i + 6)
		if (number % i == 0 || number % (i + 2) == 0)
			return false;
	return true;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (isPrime(num))
		cout << num << " is a prime number." << endl;
	else
		cout << num << " is not a prime number." << endl;

	return 0;
}*/
//starpattern part 4
/*#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number : ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		//print the spaces
		for (int j = 1; j <= num - i; j++)
		{
			cout << " ";
		}
		//print the star 
		for (int k = 1; k <= 2 * i; k++)
		{
			if (k % 2 == 0)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	
	}	
	return 0;
}*/
//finding the prime number part 2
/*#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int number;
	cout << "enter the number : ";
	cin >> number;
	if (isprime(number))
	{
		cout << number << " is prime\n";
	}
	else {
		cout << number << " is not prime";
	}
	return 0;
}*/
//making power operation
/*#include <iostream>
using namespace std;
int power(int a, int b)
{
	int m = 1;
	for (int i = 1; i <= b; i++)
	{
		m *= a;
	}
	return m;
}
int main()
{
	int a, b;
	cout << "number : ";
	cin >> a;
	cout << "to power : ";
	cin >> b;
	int mypow = power(a, b);
	cout << "result : " << mypow;
	return 0;
}*/
//reversing the number part 2 with return function
/*#include <iostream>
#include<cmath>
using namespace std;
int reverse(int num)
{
	if (num < 10 && num >=0){
		return num;
	}
	else {
		return (num % 10) * pow(10, (int)log10(num)) + reverse(num / 10);
	}
}
int main()
{
	int num;
	cout << "enter the number : ";
	cin >> num;
	cout << "the reverse number : " << reverse(num) ;
	return 0;
}*/
//reversing the number part 3
/*#include <iostream>
using namespace std;
int main()
{
	int n, r = 0;
	cin >> n;
	for (; n != 0; n /= 10)
	{
		r = r * 10 + n % 10;
	}
	cout << "the r : " << r;
	return 0;
}*/
//making a calculator with function
/*#include <iostream>
using namespace std;
int calculator(int n1, int n2, char op)
{
	switch (op)
	{
	case '+':
		return n1 + n2;
		break;
	case '-':
		return n1 - n2;
		break;
	case '/':
		return n1 / n2;
		break;
	case '%':
		return n1 % n2;
		break;
	default:
		cout << "ERROR";
		break;
	}
}
int main()
{
	int n1, n2;
	char op;
	cin >> n1 >> op >> n2;
	int mycal = calculator(n1, n2, op);
	cout << "Result : " << mycal;
	return 0;
}*/
//callculating student weight gpa part 2
/*#include <iostream>
using namespace std;
float findmax(float g[] , int n)
{
	float max = g[0];
	for (int i = 0; i < n; i++)
	{
		if (max < g[i])
		{
			max = g[i];
		}
	}
	return max;
}
float most_impatful_grade(float g[], int w[], int n)
{
	float mig = g[0] * w[0];
	for (int i = 0; i < n; i++)
	{
		if (g[i] * w[i] > mig)
		{
			mig = g[i] * w[i];
		}
	}
	return mig;
}
int main()
{
	float g[5];
	int w[5];
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "_enter the grade : ";
		cin >> g[i];
		cout << i + 1 << "_enter the units of the lesson : ";
		cin >> w[i];
	}

	//callculate the gpa
	float sum_g = 0, sum_w = 0;
	for (int i = 0; i < 5; i++)
	{
		sum_g += g[i] * w[i];
		sum_w += w[i];
	}

	float gpa = sum_g / sum_w;
	//finding the maximum grade
	float hihest_grade = findmax(g , 5);
	//finding the impactful grade
	float impactgrade = most_impatful_grade(g, w, 5);
	

	//the resutl
	cout << "GPA : " << gpa<<'\n';
	cout << "Maximum grade : " << hihest_grade<<'\n';
	cout << "Impactful grade : " << impactgrade;
	return 0;
}*/
//callculating student weight gpa part 3 with class
/*#include <iostream>
#include <string>
using namespace std;
class student {
private:
	float gpa;
	float g[5];
	int w[5];
	string name;
public:
	void setname(string name)
	{
		this->name = name;
	}
	void setGW(float g[], int w[], int n)
	{
		for (int i = 0; i < 5; i++)
		{
			this->g[i] = g[i];
			this->w[i] = w[i];
		}
	}
	void getprint(int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "enter the grades : ";
			cin >> g[i];
		}
		for (int j = 0; j < n; j++)
		{
			cout << "enter the units : ";
			cin >> w[j];
		}
		cout << "******************************************\n";
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << "-grade : " << g[i] << " units :" << w[i] << '\n';
		}
	}
	float findmax()
	{
		float max = g[0];
		for (int i = 1; i <= 5; i++)
		{
			if (max < g[i])
			{
				max = g[i];
			}
		}
		return max;
	}
	float callgpa() {
		float total_grade_points = 0.0;
		float total_credits = 0.0;
		for (int i = 0; i < 5; i++) {
			total_grade_points += g[i] * w[i];
			total_credits += w[i];
		}
		if (total_credits > 0) {
			return total_grade_points / total_credits;
		}
		else {
			cout << "Error: Student has no credits." << endl;
			return -1.0; // Or any special value to indicate error
		}
	}
	float impactfulgrade()
	{
		float most_impactful_grade = g[0] * w[0];
		for (int i = 0; i < 5; i++)
		{
			if (g[i] * w[i] > most_impactful_grade)
			{
				most_impactful_grade = g[i] * w[i];
			}
		}
		return most_impactful_grade;
	}

};
int main()
{
	student stu;
	float G[5];
	int W[5];
	string Name;
	cout << "enter the name of student : ";
	cin >> Name;
	stu.setname(Name);
	stu.setGW(G, W, 5);
	stu.getprint(5);
	cout << "**********INFORMATION DATA OF STUDENT**********\n";
	cout << "Name : " << Name << '\n';
	cout << "the highest grade : " << stu.findmax() << '\n';
	cout << "GPA : " << stu.callgpa() << '\n';
	cout << "the impactful grade : " << stu.impactfulgrade() << '\n';
	return 0;
}*/
//inrange polymorphism function part 1
/*#include <iostream>
using namespace std;
template <typename T>
int inrange(T x, T low, T high) {
	if (x >= low && x <= high) {
		return 0; // x is in range
	}
	else if (x < low) {
		return -1; // x is less than the range
	}
	else {
		return 1; // x is greater than the range
	}
}

int main() {
	int result1 = inrange(5, 1, 10);
	cout << "Result 1: " << result1 << endl; // Output should be 0

	int result2 = inrange('c', 'a', 'z');
	cout << "Result 2: " << result2 << endl; // Output should be 0

	int result3 = inrange(20, 1, 10);
	cout << "Result 3: " << result3 << endl; // Output should be 1

	int result4 = inrange(-5, 1, 10);
	cout << "Result 4: " << result4 << endl; // Output should be -1

	return 0;
}*/
//counting open and closed parantheeses with class
/*#include <iostream>
#include <string>
using namespace std;
class ParenthesesCounter {
public:
	int countParentheses(string code) {
		int openCount = 0;
		int closeCount = 0;

		for (char c : code) {
			if (c == '(') {
				openCount++;
			}
			else if (c == ')') {
				closeCount++;
			}
		}

		return openCount - closeCount;
	}
};

int main() {
	ParenthesesCounter counter;
	string code = "(int x = 5; if (x > 0) { x++; }{)";

	int result = counter.countParentheses(code);
	cout << "Number of open parentheses: " << result << endl;

	return 0;
}*/
//counting open and closed parantheeses with function
/*#include <iostream>
#include <string>
using namespace std;
int countParentheses(string code) {
	int openCount = 0;
	int closeCount = 0;

	for (char c : code) {
		if (c == '(') {
			openCount++;
		}
		else if (c == ')') {
			closeCount++;
		}
	}

	return openCount - closeCount;
}

int main() {
	string code = "(int x = 5; if (x > 0) { x++; })";

	int result = countParentheses(code);
	cout << "Number of open parentheses: " << result << endl;

	return 0;
}*/
//making a multiwork array
/*#include <iostream>
using namespace std;
void getarray(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "_enter the number : ";
		cin >> a[i];
	}

}
void printarray(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "number " << i + 1 << " = ";
		cout << a[i] << '\n';
	}
}
int findmax(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int findmin(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int Addarray(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
float calculateAverage(int a[], int n) {
	float sum = Addarray(a, n);
	return sum / n;
}
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void sortArray(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int findindex(int a[], int n, int value)
{
	  sortArray(a, n);

  // Initialize rank to 1 (not 0, since ranks start from 1)
  int rank = 1;

  // Iterate through the sorted array
  for (int i = 0; i < n; i++) {
    // If the current element is the target value, return the rank
    if (a[i] == value) {
      return rank;
    }

    // If the current element is greater than the target value, break the loop
    if (a[i] > value) {
      break;
    }

    // Increment the rank for each smaller element
    rank++;
  }

  // If the value is not found, return -1 and give a good message
  cout << "The value " << value << " is not found in the array." << endl;
  return -1;
}
int main()
{
	int n[5];
	getarray(n, 5);
	sortArray(n, 5);
	printarray(n, 5);
	int maximum = findmax(n, 5);
	int minimum = findmin(n, 5);
	int sum = Addarray(n, 5);
	int average = calculateAverage(n, 5);
	cout << "the maximum number is : " << maximum << '\n';
	cout << "the minimum number is : " << minimum << '\n';
	cout << "the summation of numbers : " << sum << '\n';
	cout << "the average is : " << average << '\n';
	//finding an index
	cout << "do you want to find anything in the array ?";
	//string to say yes or no
	string a;
	cin >> a;
	//a number for searching
	int number;
	if (a == "yes") {
		cout << "what number do you looking for ? ";
		cin >> number;
		int fi = findindex(n, 5, number);
		cout << "the number your looking for is at index" << fi;
	}
	
	return 0;
}*/
//making a 3D point with struct
/*#include <iostream>
#include <cmath>
using namespace std;
struct Point3D {
	double x, y, z;
};

// Function to get a point from user input
Point3D getPoint(const string& prompt) {
	Point3D point;
	cout << prompt << endl;
	cout << "Enter x: ";
	cin >> point.x;
	cout << "Enter y: ";
	cin >> point.y;
	cout << "Enter z: ";
	cin >> point.z;
	return point;
}

// Function to calculate the distance between two points
double distance(const Point3D& p1, const Point3D& p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

// Function to check if the points are in the same plane and specify the plane
bool areInSamePlane(const Point3D& p1, const Point3D& p2) {
	if (p1.z == p2.z) {
		cout << "The two points are in the plane Z = " << p1.z << "." << endl;
		return true;
	}
	else {
		cout << "The two points are not in the same plane." << endl;
		return false;
	}
}

int main() {
	// Get points from the user
	Point3D point1 = getPoint("Please enter the coordinates for the first point:");
	Point3D point2 = getPoint("Please enter the coordinates for the second point:");

	// Calculate and display the distance between the two points
	double dist = distance(point1, point2);
	cout << "The distance between the two points is " << dist << " units." << endl;

	// Check if the points are in the same plane and display the result
	areInSamePlane(point1, point2);

	return 0;
}*/
//getting n time number and using array to find how many time does a number repeated
/*#include <iostream>
using namespace std;
int main() {
	const int MAX_NUMBERS = 100;
	int numbers[MAX_NUMBERS];
	int count[10] = { 0 }; // Array to count numbers from 1 to 9
	int num_entries = 0;
	int input;

	cout << "Enter numbers between 1 and 9 (Enter 0 to stop):" << endl;

	// Input loop
	while (true) {
		cin >> input;

		if (input == 0) {
			break;
		}
		else if (input >= 1 && input <= 9) {
			if (num_entries < MAX_NUMBERS) {
				numbers[num_entries++] = input; // algorithm to store the input in the array
				count[input]++;
			}
			else {
				cout << "Maximum number of entries reached!" << endl;
				break;
			}
		}
		else {
			cout << "Please enter a number between 1 and 9 or 0 to stop." << endl;
		}
	}

	// Display the counts of each number
	cout << "\nCounts of each number:" << endl;
	for (int i = 1; i <= 9; ++i) {
		cout << "Number " << i << ": " << count[i] << " times" << endl;
	}

	// Determine the number with the maximum and minimum count
	int max_count = count[1];
	int min_count = count[1];
	for (int i = 2; i <= 9; ++i) {
		if (count[i] > max_count) {
			max_count = count[i];
		}
		if (count[i] < min_count) {
			min_count = count[i];
		}
	}

	// Find all numbers with maximum and minimum counts
	cout << "\nNumber(s) with the highest count (" << max_count << " times): ";
	for (int i = 1; i <= 9; ++i) {
		if (count[i] == max_count) {
			cout << i << " ";
		}
	}
	cout << '\n';

	cout << "Number(s) with the lowest count (" << min_count << " times): ";
	for (int i = 1; i <= 9; ++i) {
		if (count[i] == min_count) {
			cout << i << " ";
		}
	}
	cout << '\n';

	return 0;
}*/
//making a switch case for power , fibonachi , factoriel and multiply
/*#include<iostream>
using namespace std;
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
int power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else {
		return base * power(base, exponent - 1);
	}
}
int fibo(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}
int multiply(int a, int b)
{
	return a * b;
}
int main()
{
	int n1, n2;
	int choice;
	cout << "enter character 1_for using fibo or 2_for using multiply or 3_for using fact or 4_for using power : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "you're using a fibonachi algorithm \n";
		cout << "please enter the number : ";
		cin >> n1;
		cout << fibo(n1);
		break;
	case 2:
		cout << "you're using a multiply algorithm \n";
		cout << "enter the first number : ";
		cin >> n1;
		cout << "enter the second number : ";
		cin >> n2;
		cout << multiply(n1, n2);
		break;
	case 3:
		cout << "you're using a factoriel algorithm\n";
		cout << "enter the number : ";
		cin >> n1;
		cout << fact(n1);
		break;
	case 4:
		cout << "you're using a power algorithm \n";
		cout << "enter the number of base : ";
		cin >> n1;
		cout << "enter the number of exponent : ";
		cin >> n2;
		cout << power(n1, n2);
	default:
		cout << "invalid input";
		break;
	}
	return 0;
}*/
//making a restaurant bill
/*#include <iostream>
#include <string>
using namespace std;

const double value_added = 0.09;

struct item {
	int code;
	string name;
	int price;
};

// Food item menu
item food[] = {
	{1, "pasta", 125},
	{2, "burger", 100},
	{3, "pizza", 125},
	{4, "tahchin", 80},
	{5, "rice and kebab", 140}
};

// Drink item menu
item drink[] = {
	{1, "soda", 10},
	{2, "dough", 12},
	{3, "tea", 5},
	{4, "juice", 14},
	{5, "water", 10}
};

// Appetizer item menu
item appetizer[] = {
	{1, "caesar salad", 30},
	{2, "shirazi salad", 25},
	{3, "mushroom soup", 25}
};

item findItemByCode(item item[], int n, int code) {
	for (int i = 0; i < n; i++) {
		if (item[i].code == code) {
			return item[i];
		}
	}
	return { 0, "unknown", 0 };
}

int main() {
	cout << "Welcome to the restaurant\n";

	int foodcode, drinkcode, appetizercode;
	cout << "Enter food code: ";
	cin >> foodcode;
	cout << "Enter beverage code: ";
	cin >> drinkcode;
	cout << "Enter the appetizer code: ";
	cin >> appetizercode;
	cout << "***********************************************\n";
	// Selected items
	item selectfood = findItemByCode(food, sizeof(food) / sizeof(food[0]), foodcode);
	item selectdrink = findItemByCode(drink, sizeof(drink) / sizeof(drink[0]), drinkcode);
	item selectappetizer = findItemByCode(appetizer, sizeof(appetizer) / sizeof(appetizer[0]), appetizercode);

	// Calculating the bill
	double total = selectfood.price + selectdrink.price + selectappetizer.price;
	double total_with_valueadded = total * value_added;
	double final_bill = total + total_with_valueadded;

	cout << "Your food is ready, please come to take it\n";
	cout << "Food code: " << selectfood.code << " _ " << selectfood.name << " _ " << selectfood.price << " tooman\n";
	cout << "Drink code: " << selectdrink.code << " _ " << selectdrink.name << " _ " << selectdrink.price << " tooman\n";
	cout << "Appetizer code: " << selectappetizer.code << " _ " << selectappetizer.name << " _ " << selectappetizer.price << " tooman\n";
	cout << "***********************************************\n";
	cout << "the value added in this retaurant is : 9%\n";
	cout << "The total bill: " << final_bill << " tooman\n";
	cout << "***********************************************\n";
	cout << "Thanks for visiting our restaurant\n";
	cout << "Enjoy your meal";

	return 0;
}*/
//making a different operators with switch
/*#include <iostream>
using namespace std;
int add(int a, char op, int b) {
	return a + b;
}
int subtraction(int a, char op, int b) {
	return a - b;
}
int power(int a,int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return a * power(a, b - 1);
	}
}
int modules(int a, char op, int b) {
	return a % b;
}
int divide(int a, char op, int b) {
	return a / b;
}
int multiply(int a, char op, int b) {
	return a * b;
}
int main()
{
	int a, b;
	char op;
	char choice;
	cout << "enter + / - / * / (/) / ^ / %\n";
	cin >> choice;

	switch (choice)
	{
		case '+':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << add(a, op, b);
			break;
		case '-':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << subtraction(a, op, b);
			break;
		case '*':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << multiply(a, op, b);
			break;
		case '/':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << divide(a, op, b);
			break;
		case '^':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << power(a, b);
			break;
		case '%':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << modules(a, op, b);
			break;
		default:
			cout << "wrong operator\n";

	}
	return 0;
}*/
//checking the validation of  cardnumber pt1
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cardnumber[16];

bool isvaliddigit(char digit) {
	return isdigit(digit);
}

bool isvalidprefix(const string& prefix) {
	// List of our bank prefixes
	vector<string> validprefixes = { "6037", "6104", "5892", "6276", "6279" };

	// Checking whether the prefixes are available or not
	for (const string& validprefix : validprefixes) {
		if (prefix == validprefix) {
			return true;
		}
	}
	return false;
}

// Function to display the card number
void displayCardNumber() {
	cout << "Card number : ";
	for (int i = 0; i < 16; i++) {
		if (i % 4 == 0 && i != 0) {
			cout << "-";
		}
		cout << cardnumber[i];
	}
	cout << '\n';
}

int main() {
	int Inputindex = 0;
	while (Inputindex < 16) {
		char digit;
		cout << "Enter the digit " << Inputindex + 1 << " : ";
		cin >> digit;

		// Checking the validity of the digit
		if (!isvaliddigit(digit)) {
			cout << "Invalid digit. Please use valid digits.\n";
			continue;
		}

		// Transforming the digit to number
		int digitValue = digit - '0';

		// Saving in the array
		cardnumber[Inputindex] = digitValue;

		// Displaying the data
		displayCardNumber();

		// Checking the validation of first 4 digits
		if (Inputindex == 3) {
			string prefix = "";
			for (int i = 0; i < 4; i++) {
				prefix += to_string(cardnumber[i]);
			}
			if (!isvalidprefix(prefix)) {
				cout << "The card number is invalid.\n";
				return 1;
			}
		}
		Inputindex++;
	}

	cout << "The card number is successfully saved.\n";
	cout << "Formatted card number: ";
	for (int i = 0; i < 16; i++) {
		cout << cardnumber[i];
		if ((i + 1) % 4 == 0 && i != 15) {
			cout << "-";
		}
	}
	cout << endl;

	return 0;
}*/
/*#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int calculatePasswordStrength(const string password) {
	int lengthsoce = 0;
	int digitscore = 0;
	int specialcharscor = 0;
	int uppercasescore = 0;
	int lowercasescore = 0;

	if (password.length() >= 6)
	{
		lengthsoce = 20;
	}
	for (char c : password)
	{
		if (isdigit(c))
		{
			digitscore = 20;
		}
		else if (isalpha(c))
		{
			if (!isalnum(c))
			{
				specialcharscor = 20;
			}
			if (isupper(c))
			{
				uppercasescore = 20;
			}
			if (islower(c))
			{
				lowercasescore = 20;
			}
		}
	}
	int totalsore = lengthsoce + digitscore + specialcharscor + uppercasescore + lowercasescore;
	return totalsore;
}
int main()
{
	string password;
	cout << "Enter the password : ";
	cin >> password;

	int strength = calculatePasswordStrength(password);
	cout << "Password strength : " << strength << '%';
	return 0;
}*/
//cheching the strength of password pt2
/*#include <iostream>
#include <string>
using namespace std;

bool is_digit(char c) {
	return (c >= '0' && c <= '9');
}

bool is_alpha(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool is_lower(char c) {
	return c >= 'a' && c <= 'z';
}
bool is_upper(char c) {
	return c >= 'A' && c <= 'Z';
}
bool is_special(char c) {
	return !is_digit(c) && !is_alpha(c);
}

int calculatePasswordStrength(const string& password) {
	int lengthScore = 0;
	int digitScore = 0;
	int uppercaseScore = 0;
	int lowercaseScore = 0;
	int specialScore = 0;

	if (password.length() >= 6) {
		lengthScore = 20;
	}

	for (char c : password) {
		if (is_digit(c)) {
			digitScore = 20;
		}
		else if (is_alpha(c)) {
			if (is_lower(c)) {
				lowercaseScore = 20;
			}
			if (is_upper) {
				uppercaseScore = 20;
			}
		}
		else if (is_special(c)) {
			specialScore = 20;
		}
	}

	int total = lengthScore + digitScore + uppercaseScore + lowercaseScore + specialScore;
	return total;
}

int main() {
	string password;
	cout << "Enter the password : ";
	cin >> password;

	int passwordStrength = calculatePasswordStrength(password);
	cout << "Password strength : " << passwordStrength << "%";

	return 0;
}*/
//validating a phone number
/*#include <iostream>
#include <string>
using namespace std;
struct PhoneNumber
{
	string number;
};
bool validphonenumber(const PhoneNumber& pn) {

	if (pn.number.length() != 11) {
		return false;
	}
	if (pn.number[0] == '0' && pn.number[1] == '9') {
		return true;
	}
	//checking other chars are dgits
	for (int i = 2; i < pn.number.length(); i++) {
		if (!isdigit(pn.number[i]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	PhoneNumber pn;
	cout << "please enter your phone number : ";
	cin >> pn.number;

	if (validphonenumber(pn))
	{
		cout << "the phone number is valid"<<'\n';
	}
	else {
		cout << "the phone number is invalid\n";
	}
	return 0;
}*/
//validating an email address
/*#include <iostream>
#include <string>
using namespace std;
struct E_mail
{
	string address;
};
bool validAddress(const E_mail& email)
{
	const string& address = email.address;
	size_t atpos = address.find('@');
	size_t dotpos = address.find('.', atpos);
	//checking for existanse of atleast one '@' and '.' 
	if (atpos == string::npos || dotpos == string::npos)
	{
		return false;
	}
	//checking for @ and . because they shouldn't be at index 1 and the last index
	if (atpos == 0 || atpos == address.length() - 1) {
		return false;
	}
	//checking the  . because it shouldn'n be immediatley after the @ 
	if (atpos == atpos + 1 || dotpos == address.length() - 1) {
		return false;
	}
	//checking the @ because it has to be one in the address
	if (address.find('@', atpos + 1) != string::npos) {
		return false;
	}
	return true;
}
int main()
{
	E_mail email;
	cout << "enter your email address : ";
	cin >> email.address;
	if (validAddress(email)) {
		cout << "valid email address" << '\n';
	}
	else {
		cout << "invalid email address\n";
	}
	return 0;
}*/
//making a time class
/*#include <iostream>
#include<conio.h>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time(int HH, int MM, int SS) {

		hours = HH;
		minutes = MM;
		seconds = SS;

	}
	void printtime() {
		cout << hours << " : " << minutes << " : " << seconds;
	}

	int diff(const Time& other) {
		return (hours - other.hours) * 3600 + (minutes - other.minutes) * 60 + (seconds - other.seconds);
	}
};
int main()
{
	Time t1(23, 45, 59);
	Time t2(23, 45, 45);
	cout << "Time 1 - ";
	t1.printtime();
	cout << '\n';
	cout << "Time 2 - ";
	t2.printtime();
	cout << '\n';
	cout << "The difference between theese two times are (in seconds) : " << t1.diff(t2) << " seconds";
	_getch();
	return 0;
}*/
//check the number is divisible by 3 or not
/*#include <iostream>
#include<conio.h>
using namespace std;
int sumDigits(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10 + sumDigits(n / 10);
	}
}
bool isDivisibleBythree(int n) {
	return sumDigits(n) % 3 == 0;
}
int main() {
	int number;
	cout << "enter the 5digit number : ";
	cin >> number;
	if (number < 10000 || number > 99999) {
		cout << "please enter 5 digit number : ";
		return 1;
	}
	int sum = sumDigits(number);
	if (isDivisibleBythree(number)) {
		cout << number << " is divisible by 3\n";
	}
	else {
		cout << number << " is not divisible by 3\n";
	}
	_getch();
	return 0;
}*/






















