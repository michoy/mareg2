
Kp = diag([25e-2 25e-2 25e-4]);
Kd = diag([40e-2 40e-2 40e-2]);

sim('CSE1_HIL_full.slx', 150);

clc;
Kp
Kd

tuning_plot