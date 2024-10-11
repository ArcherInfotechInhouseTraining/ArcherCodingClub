# Archer Coding Club

Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

- InterviewBit




## Logic For Multiply Strings Problem

Here,
  we have given 2 strings and we need to multiply that string,
  for multiplication first we need to convert that string into integer.

  size of our strings is upto 10^4 or 10^6
  for such a huge size , our int and long data types are not enough .

  that's why i used BigInteger class from math package wich is help to  handle very large integers that are beyond the limits of primitive data types like int and long .

  for multiplication i used multiply method from BigInteger class which help to multiply two veriables, and also to store that multiplication i created veriable of BigInteger type.

  e.g.
      String A="123";
      String B="11";

      BigInteger a = new BigInteger(A);
      BigInteger b = new BigInteger(B);
      BigInteger ans = a.multiplly(b);

