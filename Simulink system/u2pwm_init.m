% Bow thruster
BT_min_pwm     = 5.90;
BT_max_pwm     = 7.10;
BT_u2pwm_gainNeg  = (BT_max_pwm-BT_min_pwm)/2-0.25;
BT_u2pwm_gainPos= BT_u2pwm_gainNeg*2.5 - 0.175;
BT_zero_pwm    = (BT_max_pwm-BT_min_pwm)/2 + BT_min_pwm;
BT_zero_pwm_neg = 6.3;
BT_zero_pwm_pos = 6.8;

% Voith Schneider propellers
VSP_min_pwm    = 5.20;
VSP_max_pwm    = 6.91;
VSP1_u2pwm_gain = 6.91-5.20;
VSP2_u2pwm_gain = 6.91-5.20;
VSP_zero_pwm = VSP_min_pwm+(VSP_max_pwm-VSP_min_pwm)/2;

% Servos, see CSE1 Handbook for instructions on tuning the servos
%              Servo1 servo2 servo3 servo4           
% measurements = [6.80 7.20 6.00 4.90 %N
%                 7.60 7.10 5.90 4.30 %NE
%                 7.80 6.50 5.00 3.80 %E
%                 7.60 5.60 4.30 4.50 %SE
%                 6.40 5.10 4.00 5.40 %S
%                 5.50 5.30 4.00 6.20 %SW
%                 5.20 5.90 4.60 6.50 %W
%                 5.90 6.80 5.50 5.80 %NW
%                 6.59 6.19 4.79 5.01];%origo
 measurements = [4.45 7.20 5.75 4.54 %N
                5.30 7.15 5.80 4.10 %NE
                5.70 6.85 4.72 3.88 %E
                5.25 5.45 4.30 4.30 %SE
                4.38 5.20 3.90 5.47 %S
                3.48 5.33 4.05 6.05 %SW
                3.20 6.05 5.20 6.30 %W
                3.58 6.87 5.60 5.70 %NW
                4.50 5.95 4.62 5.12];%origo

for i=1:4
data = measurements(:,i);

mapping = [data(8)                           NaN                                data(1)                            NaN                                data(2)
           NaN                               data(9)+(data(8)-data(9))*sqrt(.5) data(9)+(data(1)-data(9))*sqrt(.5) data(9)+(data(2)-data(9))*sqrt(.5) NaN
           data(7)                           data(9)+(data(7)-data(9))*sqrt(.5) data(9)                            data(9)+(data(3)-data(9))*sqrt(.5) data(3)
           NaN                               data(9)+(data(6)-data(9))*sqrt(.5) data(9)+(data(5)-data(9))*sqrt(.5) data(9)+(data(4)-data(9))*sqrt(.5) NaN
           data(6)                           NaN                                data(5)                            NaN                                data(4)];

mapping(1,2) = mapping(1,3)-(mapping(1,3)-mapping(1,1))*sqrt(.5);
mapping(1,4) = mapping(1,3)-(mapping(1,3)-mapping(1,5))*sqrt(.5);

mapping(2,1) = mapping(3,1)-(mapping(3,1)-mapping(1,1))*sqrt(.5);
mapping(2,5) = mapping(3,5)-(mapping(3,5)-mapping(1,5))*sqrt(.5);

mapping(4,1) = mapping(3,1)-(mapping(3,1)-mapping(5,1))*sqrt(.5);
mapping(4,5) = mapping(3,5)-(mapping(3,5)-mapping(5,5))*sqrt(.5);

mapping(5,2) = mapping(5,3)-(mapping(5,3)-mapping(5,1))*sqrt(.5);
mapping(5,4) = mapping(5,3)-(mapping(5,3)-mapping(5,5))*sqrt(.5);

servo_mapping(:,:,i) = mapping;
end