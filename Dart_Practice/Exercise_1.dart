
import 'dart:io';

void main(List<String> arguments) {
    String name;
    int? age;
    print("Enter you name:  ");
    name = stdin.readLineSync()!;
    print("Enter you age:  ");
    age = int.parse(stdin.readLineSync()!);
    int? result = 100 - age;
    print("After $result you will be of 100 years");

  
}