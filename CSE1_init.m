clear;
clc;

%% Low speed dynamics model matrices

% Mass matrix
M = [
    [16 0 0];
    [0 24 0.53];
    [0 0.53 2.8];
 ];

% Damping matrix
D = [
    [0.66 0 0];
    [0 1.3 2.8];
    [0 0 1.9];
];

% Input matrix B
B = [zeros(3); inv(M); zeros(3)];


%% Observer initial values

x_init = zeros(1,9);


%% Observer paramters

% Gain matrix L (tuning parameters)
L1 = diag([1 1 1]);
L2 = diag([0.1 0.1 0.1]);
L3 = diag([0.025 0.01 0.0001]);

% 1 for true, 0 for false
measurment_noise = 0;
measurement_signal_available = 1;



%% Guidance parameters

U_ref = 0.15; % [m/s]
path_selection = 0; % elipsoidal if 1, straight if 0

% straight path
end_point = [10 10]';
start_point = [0 0]';
% ellipsoidal path
center_point = [0 0]';
radius_xy = diag([1 2]);


%% Controller paramters

my = 0.05;
Kp = 1e-2;
Kd = 1e-2;

