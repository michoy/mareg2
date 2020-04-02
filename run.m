simulation_time = 250;

my = 0.1;
Kp = diag([25e-3 25e-3 25e-5]);
Kd = diag([40e-2 40e-2 40e-3]);

sim('CSE1_HIL_full.slx', simulation_time);

clc;
Kp
Kd

tuning_plot