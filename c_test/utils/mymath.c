/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

double getSimpleInterest(double principal, double rate, double time) {
    double interest; 
    interest = (principal * rate * time) / 100.0; 
    return interest; 
}