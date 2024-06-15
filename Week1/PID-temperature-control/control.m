clear
clc
close all

%-------------------------------
Ki = 5.5; %Integral control
Kp = 0.01; %Proportional control
Kd = 0.012; %Derivative control
%-------------------------------

Ts = 0.1; %Sampling rate of noise
Np = [0.001]; %noise control
setTemp = 5; %in degree celsius
G_h = 3600*3000; %heater constant
T_heater = 70; %temprature of heater 
K2 = 1/(1470*1005.4); %room dynamics coefficent1
K1 = 1/4.285e-7; %room dynamics coefficeint2


GP_num = [G_h*K1*K2]; 
GP_den = [1, K1*K2];

GP = tf(GP_num, GP_den); %heater plant transfer function 
