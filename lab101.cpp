#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int main() {
  
  
  string one;
  string  two;
  int result[200];
  int One[100];
  int Two[100];
  
  int lenghtOne = 0;
  int lenghtTwo = 0;
  int n = 0;
  int bufer = 0;
  int make;
 
  cout << "input '1' to +" << endl << "input '2' to -" << endl << "input '3' to *" << endl << "input '4' to /" << endl << "input '5' to <>=" << endl;
  cin >> make;
  if (make > 5 or make < 1) {
    cout << "ERROR: an incorrect value has been entered. Enter a value from 1 to 5";
  }

  cout << "input values" << endl;
  cin >> one >> two;
  
  while (one[lenghtOne] !='\0') {
    One[lenghtOne] = one[lenghtOne] - 48;
    lenghtOne++;
  }
 
  while (two[lenghtTwo] !='\0') {
    Two[lenghtTwo] = two[lenghtTwo] - 48;
    lenghtTwo++;
  }
  

  if (make == 1) {
    while (lenghtOne > 0 and lenghtTwo > 0) {
    
      if (One[lenghtOne - 1] + Two[lenghtTwo - 1] + bufer > 9) {
        result [n] = (One[lenghtOne - 1] + Two[lenghtTwo - 1] + bufer) % 10;
        bufer = 1;
      }

      else {
        result [n] = One[lenghtOne - 1] + Two[lenghtTwo - 1] + bufer;
        bufer = 0;
      }
      n += 1;
      lenghtOne -= 1;
      lenghtTwo -= 1;
    
    }

    if (lenghtOne < lenghtTwo) {
      result [n] = Two[lenghtTwo - 1] + bufer;
      n += 1;
      lenghtTwo -= 1;
    
      while (lenghtTwo > 0) {
        result [n] = Two[lenghtTwo - 1];
        n += 1;
        lenghtTwo -= 1;
      }
    }
    else if (lenghtOne > lenghtTwo) {
      result [n] = One[lenghtOne - 1] + bufer;
      n += 1;
      lenghtOne -= 1;
    
      while (lenghtOne > 0) {
        result [n] = One[lenghtOne - 1];
        n += 1;
        lenghtOne -= 1;
      }
    }
  
    else {
      if (bufer > 0) {
        result [n] = bufer;
        n += 1;
      }
    
    }

    while (n > 0) {
      cout << result[n - 1];    
      n -= 1;
    }
  }

  else if (make == 2) {
        
    if (lenghtOne > lenghtTwo) {
      while (lenghtOne > 0 and lenghtTwo > 0) {
        if (One[lenghtOne - 1] >= Two[lenghtTwo - 1]) {
          result [n] = One[lenghtOne - 1] - Two[lenghtTwo - 1];
        }

        else {
          int o = lenghtOne - 2;
          while (One[o] == 0) {          
            o -= 1;
          }

          One[o] -= 1;
          o += 1;

          while (o < lenghtOne - 1) {
            One[o] += 9;
            o += 1;
          }
          One[o] += 10;
          result [n] = One[lenghtOne - 1] - Two[lenghtTwo - 1];
        }

        n += 1;
        lenghtOne -= 1;
        lenghtTwo -= 1;
      }

      if (lenghtOne < lenghtTwo) {    
        while (lenghtTwo > 0) {
          result [n] = Two[lenghtTwo - 1];
          n += 1;
          lenghtTwo -= 1;
        }
      }
      else if (lenghtOne > lenghtTwo) {    
        while (lenghtOne > 0) {
          result [n] = One[lenghtOne - 1];
          n += 1;
         lenghtOne -= 1;
        }
      }

      while (n > 0) {
        cout << result[n - 1];    
        n -= 1;
      }
    }

    else if (lenghtOne < lenghtTwo) {
      while (lenghtOne > 0 and lenghtTwo > 0) {
        if (Two[lenghtTwo - 1] >= One[lenghtOne - 1]) {
          result [n] = Two[lenghtTwo - 1] - One[lenghtOne - 1];
        }

        else {
          int o = lenghtTwo - 2;
          while (Two[o] == 0) {          
            o -= 1;
          }

          Two[o] -= 1;
          o += 1;

          while (o < lenghtTwo - 1) {
            Two[o] += 9;
            o += 1;
          }
          Two[o] += 10;
          result [n] = Two[lenghtTwo - 1] - One[lenghtOne - 1];
        }

        n += 1;
        lenghtOne -= 1;
        lenghtTwo -= 1;
      }

      if (lenghtTwo < lenghtOne) {    
        while (lenghtOne > 0) {
          result [n] = One[lenghtOne - 1];
          n += 1;
          lenghtOne -= 1;
        }
      }
      else if (lenghtTwo > lenghtOne) {    
        while (lenghtTwo > 0) {
          result [n] = Two[lenghtTwo - 1];
          n += 1;
          lenghtTwo -= 1;
        }
      }
      
      cout << "-";
      while (n > 0) {
        cout << result[n - 1];    
        n -= 1;
      }
    }

    else {
      while (One[n] == Two[n] and n < lenghtOne) {
        n += 1;
      }

      if (n == lenghtOne) {
        cout << "0";
      }
      
      else if (One[n] > Two[n]) {
        while (lenghtOne > 0 and lenghtTwo > 0) {
          if (One[lenghtOne - 1] >= Two[lenghtTwo - 1]) {
            result [n] = One[lenghtOne - 1] - Two[lenghtTwo - 1];
          }

          else {
            int o = lenghtOne - 2;
            while (One[o] == 0) {          
              o -= 1;
            }

            One[o] -= 1;
            o += 1;

            while (o < lenghtOne - 1) {
              One[o] += 9;
              o += 1;
            }
            One[o] += 10;
            result [n] = One[lenghtOne - 1] - Two[lenghtTwo - 1];
          }

          n += 1;
          lenghtOne -= 1;
          lenghtTwo -= 1;
        }

        if (lenghtOne < lenghtTwo) {    
          while (lenghtTwo > 0) {
            result [n] = Two[lenghtTwo - 1];
            n += 1;
            lenghtTwo -= 1;
          }
        }
        else if (lenghtOne > lenghtTwo) {    
          while (lenghtOne > 0) {
            result [n] = One[lenghtOne - 1];
            n += 1;
            lenghtOne -= 1;
          }
        }

        while (n > 0) {
          cout << result[n - 1];    
          n -= 1;
        }
      }

      else if (One[n] < Two[n]) {

        while (lenghtOne > 0 and lenghtTwo > 0) {
          if (Two[lenghtTwo - 1] >= One[lenghtOne - 1]) {
            result [n] = Two[lenghtTwo - 1] - One[lenghtOne - 1];
          }

          else {
            int o = lenghtTwo - 2;
            while (Two[o] == 0) {          
              o -= 1;
            }

            Two[o] -= 1;
            o += 1;

            while (o < lenghtTwo - 1) {
              Two[o] += 9;
              o += 1;
            }
            Two[o] += 10;
            result [n] = Two[lenghtTwo - 1] - One[lenghtOne - 1];
          }

          n += 1;
          lenghtOne -= 1;
          lenghtTwo -= 1;
        }

        if (lenghtTwo < lenghtOne) {    
          while (lenghtOne > 0) {
            result [n] = One[lenghtOne - 1];
            n += 1;
            lenghtOne -= 1;
          }
        }
        else if (lenghtTwo > lenghtOne) {    
          while (lenghtTwo > 0) {
            result [n] = Two[lenghtTwo - 1];
            n += 1;
            lenghtTwo -= 1;
          }
        }
      
        cout << "-";
        while (n > 0) {
          cout << result[n - 1];    
          n -= 1;
        }       
      }
    }
  }

  else if (make == 3) {
    
  }

  else if (make == 4) {
    if (lenghtOne > lenghtTwo) {
      bufer = One [0];
      int l = 1;
      
      while (l < lenghtTwo - 1){
        bufer = bufer * 10 + One [l];
        l += 1;
      }
    }
    else if (lenghtOne < lenghtTwo) {
      cout << "0";
    }
    else {
      while (One[n] == Two[n] and n < lenghtOne) {
        n += 1;
      }

      if (n == lenghtOne) {
        cout << "1";
      }
      else if (One[n] > Two[n]) {
           
      }

      else if (One[n] < Two[n]) {
        cout << "0";
      }
    }
  }

  else if (make == 5) {
    if (lenghtOne > lenghtTwo) {
      for (int i = 0; i < lenghtOne; ++i){
        cout << One[i];
      }
      cout << " > ";
      for (int i = 0; i < lenghtTwo; ++i){
        cout << Two[i];
      }
    }
    else if (lenghtOne < lenghtTwo) {
      for (int i = 0; i < lenghtOne; ++i){
        cout << One[i];
      }
      cout << " < ";
      for (int i = 0; i < lenghtTwo; ++i){
        cout << Two[i];
      }
    }
    else {
      while (One[n] == Two[n] and n < lenghtOne) {
        n += 1;
      }

      if (n == lenghtOne) {
        for (int i = 0; i < lenghtOne; ++i){
          cout << One[i];
        }
        cout << " = ";
        for (int i = 0; i < lenghtTwo; ++i){
          cout << Two[i];
        }
      }
      else if (One[n] > Two[n]) {
        for (int i = 0; i < lenghtOne; ++i){
          cout << One[i];
        }
        cout << " > ";
        for (int i = 0; i < lenghtTwo; ++i){
          cout << Two[i];
        }        
      }

      else if (One[n] < Two[n]) {
        for (int i = 0; i < lenghtOne; ++i){
          cout << One[i];
        }
        cout << " < ";
        for (int i = 0; i < lenghtTwo; ++i){
          cout << Two[i];
        }
      }
    }
  }  
}