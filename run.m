CSE1_init

simulation_time = 200;

initial_tau = [0.1 0.1 0.1]';
initial_trigger_delay = 50;     % [s]
s_lim = 0.5;   

radius_xy = diag([3 3]);
my = 0.09;
Kp = diag([1 1 3]) * 1e-3;
Kd = diag([1 1 3]) * 1e-1;

sim('CSE1_HIL_full.slx', simulation_time);
clc;

tuning_plot