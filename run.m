CSE1_init

simulation_time = 180;
step_time = 70;

initial_tau = [0.5 0.5 0]';
initial_trigger_delay = simulation_time;     % [s]
s_lim = 0.5;   

radius_xy = diag([3 3]);
my = 0.09;
Kp = diag([1 1 3]) * 1e-3;
Kd = diag([1 1 3]) * 1e-1;

sim('CSE1_HIL_full.slx', simulation_time);
clc;

