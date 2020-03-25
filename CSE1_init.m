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


%% Observer initial values

x_init = zeros(1,9);


%% Constant observer matrices

% Gain matrix L (tuning parameters)
% L1 = diag([1 1 1]);
% L2 = diag([0.1 0.1 0.1]);
% L3 = diag([0.025 0.01 0.0001]);
L1 = diag([1 1 1]);
L2 = diag([0.1 0.1 0.1]);
L3 = diag([0.025 0.01 0.0001]);

% Input matrix B
B = [zeros(3); inv(M); zeros(3)];


%% Tracking
K2 = zeros(3,1);


%% Guidance parameters

U_ref = 0.15; % [m/s]
path_selection = 1; % elipsoidal if 1, straight else

% straight path
start_point = [0 0]';
end_point = [10 3]';

% ellipsoidal path
center_point = [1 1]';
radius_xy = diag([1 1]);


%% Controller tuning paramters

my = 0.05;
Kp = 1;

