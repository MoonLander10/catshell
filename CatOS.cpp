#include <iostream>
#include <string>
#include <experimental/random>
#define RandomMaxNumber 1415926535 //максимальное число рандома.
bool mode;
char usermode;
#define username "root" //имя
std::string name;
std::string command;
#define passwd "1234567890" //пароль
std::string passwdcin;
void info()
{
std::cout << std::endl; //инфа о оболочке
std::cout << "             /\     /\          \n";
std::cout << "            /  \   /  \         \n";
std::cout << "           OOOOOOOOOOOOO        \n";
std::cout << "           11##11111##11        \n";
std::cout << "           OO##OOOOO##OO        \n";
std::cout << "           1111111111111        \n";
std::cout << "           OOOOOOOOOOOOO        \n";
std::cout << "================================\n";
std::cout << "           CatShell 1.0b        \n";
std::cout << "================================\n";
std::cout << "       By Gabriel Markowski     \n";
std::cout << "     http://moonmuni.w10.site/  \n";
std::cout << "================================\n";
std::cout << "           Write in C++         \n";
std::cout << "================================\n";
std::cout << std::endl;
}
void hot() //орел или решка
{
short int hot;
hot = std::experimental::randint(0, 1);
if (hot == 1) {
std::cout << "Tails\n";
}
else {
std::cout << "Heads\n";
}
}
void logo()
{
short int splash;
splash = std::experimental::randint(1, 5);
std::cout << std::endl;
std::cout << "WELCOME TO:\n";
std::cout << "  ____      _   ____  _          _ _\n";
std::cout << " / ___|__ _| |_/ ___|| |__   ___| | |\n";
std::cout << "| |   / _` | __\___ \| '_ \ / _ | | |\n";
std::cout << "| |__| (_| | |_ ___) | | | |  __| | |\n";
std::cout << " \____\__,_|\__|____/|_| |_|\___|_|_|\n";
std::cout << "Version 1.0b\n";
std::cout << "===============================\n";
if (splash == 1) {
std::cout << "this is splash text :3\n";
}
if (splash == 2) {
std::cout << "haaaaaaaaaaaaaaaaaai!!\n";
}
if (splash == 3) {
std::cout << "99 bottles of beer on the wall\n";
}
if (splash == 4) {
std::cout << "GET OUT!!\n";
}
if (splash == 5) {
std::cout << "btw i use debian\n";
}
std::cout << "===============================\n";
}
void help() //список комманд
{
std::cout << std::endl;
std::cout << "all commands\n";
std::cout << "'info' - system information.\n";
std::cout << "'help' - list of commands.\n";
std::cout << "'kalcul' - simple calculator.\n";
std::cout << "'cat#0' - interpreter of the most useless programming language in the world.\n";
std::cout << "'rand' - output PSEUDO random numbers.\n";
std::cout << "'randtex' - random text generator.\n";
std::cout << "'clear' - cleaning the console.\n";
std::cout << "'cube' - draws a cube based on the entered data.\n";
std::cout << "'numb' - guess the number game.\n";
std::cout << "'hot' - heads or tails.\n";
std::cout << "'99' - lyrics of the song ''99 Bottles of Beer''.\n";
std::cout << "'whoami' - print username.\n";
std::cout << "'h' - hello world.\n";
std::cout << "'exit' - logout.\n";
std::cout << std::endl;
}
void catlang() //псевдо язык
{
std::cout << std::endl;
std::cout << "'Cat#0+-' - is a non-Turing complete joke programming language, it has only 4 commands: \n";
std::cout << "'cat' - prints 'meow!!' to the console.\n";
std::cout << "'#' - resets the counter.\n";
std::cout << "'0' - displays the counter value.\n";
std::cout << "'+' - increments the counter value (initially it is 0).\n";
std::cout << "'-' - decrements the counter value (initially it is 0).\n";
std::cout << "These are all the capabilities of the language and interpreter.\n";
std::cout << "And yes, 'end' closes the interpreter.\n";
std::cout << std::endl;
int counter = 0;
inter:
std::cin >> command;
if (command == "cat") {
std::cout << "meow!!";
std::cout << std::endl;
}
if (command == "#") {
counter = 0;
}
if (command == "0") {
std::cout << counter;
std::cout << std::endl;
}
if (command == "+") {
++counter;
}
if (command == "-") {
--counter;
}
if (command == "end") {
std::cout << "^-^\n";
return;
}
goto inter;
}
void cls() //отчистка экрана (типо)
{
short int clsTime = 0;
clear:
std::cout << std::endl;
clsTime++;
if (clsTime > 300) {
return;
}
goto clear;
}
void gg() //99 бутылок пива
{
short int ggtimer = 99;
beer:
std::cout << ggtimer << " bottles of beer on the wall, " << ggtimer << " bottles of beer.\n";
--ggtimer;
if (ggtimer == 1) {
std::cout << std::endl;
std::cout << "Take one down and pass it around, " << ggtimer << " bottles of beer on the wall.\n";
std::cout << "Take one down and pass it around, no more bottles of beer on the wall.\n";
std::cout << std::endl;
std::cout << "No more bottles of beer on the wall, no more bottles of beer. \n";
std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
return;
}
std::cout << "Take one down and pass it around, " << ggtimer << " bottles of beer on the wall.\n";
std::cout << std::endl;
goto beer;
}
void kalcul() //калькулятор
{
int one;
int two;
int otv;
int mod;
std::cout << std::endl;
std::cout << "'?' - list of all operators (one and two are ignored).\n";
std::cout << std::endl;
std::cout << "Enter operator: ";
std::cin >> usermode;
std::cout << "One number: ";
std::cin >> one;
std::cout << "Two number: ";
std::cin >> two;
if (usermode == '+' || usermode == '-' || usermode == '*' || usermode == '/' || usermode == '?' || usermode == '#') {
if (usermode == '#') {
std::cout << std::endl;
std::cout << "Square: ";
std::cout << one * one;
std::cout << std::endl;
std::cout << "Cube: ";
std::cout << one * one * one << "\n";
std::cout << std::endl;
}
if (usermode == '+') {
otv = one + two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
if (usermode == '-') {
otv = one - two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
if (usermode == '*') {
otv = one * two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
if (usermode == '/') {
if (two == 0) {
std::cout << std::endl;
std::cout << "Err: You can't divide by zero.\n";
std::cout << std::endl;
return;
}
otv = one / two;
mod = one % two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
std::cout << "Modulo: ";
std::cout << mod;
std::cout << std::endl;
}
if (usermode == '?') {
std::cout << std::endl;
std::cout << "operators\n";
std::cout << "'?' - information about operators.\n";
std::cout << "'+' - addition.\n";
std::cout << "'-' - subtraction.\n";
std::cout << "'*' - multiplication.\n";
std::cout << "'/' - division with remainder.\n";
std::cout << "'#' - finding the square and cube of the one number (two is ignored).\n";
std::cout << std::endl;
}
}
else {
std::cout << std::endl;
std::cout << "Err: Unknown operator.\n";
std::cout << std::endl;
}
}
void RtextGen()
{
int short end = std::experimental::randint(5, 200);
int short count;
int short wordid;
genercat:
if (count > end) {
std::cout << ".\n";
return;
}
++count;
wordid = std::experimental::randint(1, 20);
if (wordid > 20 || end > 200) {
std::cout << "Word ID or End unknown value.\n";
return;
}
switch(wordid) { 
case 1:
std::cout << "cat ";
goto genercat;
case 2:
std::cout << "is ";
goto genercat;
case 3:
std::cout << "on ";
goto genercat;
case 4:
std::cout << "cinnamon ";
goto genercat;
case 5:
std::cout << "the ";
goto genercat;
case 6:
std::cout << "make ";
goto genercat;
case 7:
std::cout << "lol ";
goto genercat;
case 8: 
std::cout << "limbo ";
goto genercat;
case 9:
std::cout << "hell ";
goto genercat;
case 10:
std::cout << "cassette ";
goto genercat;
case 11:
std::cout << "cup ";
goto genercat;
case 12:
std::cout << "linux ";
goto genercat;
case 13:
std::cout << "shit ";
goto genercat;
case 14: 
std::cout << ", ";
goto genercat;
case 15:
std::cout << "! ";
goto genercat;
case 16: 
std::cout << "& ";
goto genercat;
case 17:
std::cout << "! ";
goto genercat;
case 18:
std::cout << "! ";
goto genercat;
case 19:
std::cout << "null ";
goto genercat;
case 20:
std::cout << ". ";
goto genercat;
};
}
void Rnumb()
{
std::cout << std::experimental::randint(0, RandomMaxNumber);
std::cout << std::endl;
}
int main() //17 янв 2025 начало написания.
{
//переменные игры угадай число
int numb;
int unumb;
int level;
int answer;
int uanswer;
//переменные игры угадай число
//переменные проги которая рисует куб
int width; //ширина
int height; //высота
int cubdunt; //счетчик
std::string cube; //куб по ширине
//переменные проги которая рисует куб
logo();
login:
std::cout << "Username: ";
std::cin >> name;
if (name == "exit") {
goto exit;
}
std::cout << "Password: ";
std::cin >> passwdcin;
if (passwdcin == "exit") {
goto exit;
}
if (name == username && passwd == passwdcin)
{
std::cout << std::endl;
std::cout << "Hello " << name << "!!\n";
std::cout << std::endl;
}
else
{
std::cout << std::endl;
std::cout << "incorrect password or username.\n";
std::cout << std::endl;
goto login;
}
std::cout << "Do you want to enable protection mode?\n";
std::cout << "If you enable it, you can exit the shell only by entering the password. (y/n)\n";
std::cout << ">> ";
std::cin >> usermode;
if (usermode == 'y') {
mode = true;
std::cout << "protection mode enable.\n";
}
else {
mode = false;
std::cout << "protection mode disable.\n";
}
std::cout << std::endl;
std::cout << "type 'help' to list shell commands.\n";
std::cout << std::endl;
system:
std::cout << name << ">> ";
std::cin >> command;
if (command == "info" || command == "help" || command == "kalcul" || command == "clear" || command == "exit" || command == "cat#0" || command == "rand" || command == "randmax" || command == "h" || command == "numb" || command == "hot" || command == "cube" || command == "99" || command == "rm" || command == "mkdir" || command == "cd" || command == "ls" || command == "whoami" || command == "randtex") { //страшилка
if (command == "info") {
info();
}
if (command == "help") {
help();
}
if (command == "clear") {
cls();
}
if (command == "99") {
gg();
}
if (command == "kalcul") {
kalcul();
}
if (command == "rand") {
Rnumb();
}
if (command == "randmax") {
std::cout << RandomMaxNumber;
std::cout << std::endl;
}
if (command == "randtex") {
RtextGen();
}
if (command == "whoami") {
std::cout << name << "\n";
}
if (command == "h") {
std::cout << "Hello, world!\n";
}
if (command == "hot") {
hot();
}
if (command == "rm" || command == "mkdir" || command == "cd" || command == "ls") {
std::cout << ":3\n";
}
if (command == "cube") {
std::cout << "Width: ";
std::cin >> width;
std::cout << std::endl;
std::cout << "Height: ";
std::cin >> height;
std::cout << std::endl;
widt:
cube += "#";
cube += " ";
++cubdunt;
if (cubdunt > width) {
cubdunt = 0;
heig:
std::cout << cube;
++cubdunt;
std::cout << std::endl;
if (cubdunt > height) {
width = 0;
height = 0;
cubdunt = 0;
cube = "";
std::cout << std::endl;
goto system;
}
goto heig;
}
goto widt;
}
if (command == "numb") {
std::cout << "----------------\n";
std::cout << "     N U M B    \n";
std::cout << "----------------\n";
std::cout << "Classic Mode (1)\n";
std::cout << "----------------\n";
std::cout << "Endless Mode (2)\n";
std::cout << "----------------\n";
std::cout << std::endl;
std::cout << "Mode: ";
std::cin >> usermode;
if (usermode == '2' || usermode == '1') {
if (usermode == '2') {
game:
++level;
answer = std::experimental::randint(0, level);
if (name == "root") {
std::cout << "answer: ";
std::cout << answer;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to ";
std::cout << level;
std::cout << ": ";
std::cin >> uanswer;
if (uanswer == answer) {
std::cout << "you guessed right =)\n";
goto game;
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << "score: ";
std::cout << level * 10 - 10;
std::cout << std::endl;
level = 0;
answer = 0;
goto system;
}
}
if (usermode == '1') {
numb = std::experimental::randint(0, 3);
if (name == "root") {
std::cout << "answer: ";
std::cout << numb;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to 3: ";
std::cin >> unumb;
if (unumb == numb) {
std::cout << "you guessed right =)\n";
std::cout << std::endl;
numb = std::experimental::randint(0, 5);
if (name == "root") {
std::cout << "answer: ";
std::cout << numb;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to 5: ";
std::cin >> unumb;
if (unumb == numb) {
std::cout << "you guessed right =)\n";
std::cout << std::endl;
numb = std::experimental::randint(0, 10);
if (name == "root") {
std::cout << "answer: ";
std::cout << numb;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to 10: ";
std::cin >> unumb;
if (unumb == numb) {
std::cout << "you win =)\n";
std::cout << std::endl;
goto system;
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << std::endl;
}
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << std::endl;
}
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << std::endl;
}
}
}
else {
std::cout << "i don't know such a mode\n";
}
}
if (command == "cat#0") {
catlang();
}
if (command == "exit") {
if (mode == false) {
std::cout << std::endl;
std::cout << "Goodbye!!\n";
std::cout << std::endl;
goto exit;
}
if (mode == true) {
std::cout << "Password: ";
std::cin >> passwdcin;
if (passwdcin == passwd) {
std::cout << std::endl;
std::cout << "Goodbye!!\n";
std::cout << std::endl;
goto exit;
}
else {
std::cout << "incorrect password.\n";
}
}
}
}
else {
std::cout << command;
std::cout << ": command not found.\n";
}
goto system;
exit:
return 0;
} //8 Фев 2025 года в 01:26 я закончил писать эту шнягу, хотя и эти все дни в основном просто пинал хуи и ничего не делал, писец спать хочу.
