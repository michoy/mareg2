simulation_time = 200;

initial_tau = [0.1 0.1 0.1]';
initial_trigger_delay = 50;     % [s]


my = 0.1;
Kp = diag([25e-3 25e-3 25e-5]);
Kd = diag([40e-2 40e-2 40e-3]);

sim('CSE1_HIL_full.slx', simulation_time);
clc;

tuning_plot