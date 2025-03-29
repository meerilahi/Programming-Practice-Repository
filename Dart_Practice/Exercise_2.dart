import 'dart:io';
void main(List<String> arguments) {
    print("Hi! Enter a number:  ");
    int num = int.parse(stdin.readLineSync()!);
    if (num % 2 == 0) {
      print("You enter an even number");
    }
    else
    {
      print("You enter an odd number");
    }
}