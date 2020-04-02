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

%% Measurement mapping

limit = pi;


%% Observer paramters

measurment_noise = 0;
measurement_signal_available = 1;

% initial values
x_init = zeros(1,9);

% tuning parameters
L1 = diag([3 5 3]);
L2 = diag([2 0.5 2]);
L3 = diag([2 0.5 2]);


%% Guidance parameters

initial_path = 1;               % elipsoidal if 1, straight if 0
U_ref = 0.1;                   % [m/s]
initial_trigger_delay = 10;     % [s]

% straight path
path_length = 5;                % [m]
%radius_of_acceptance = 0.2;     % [m]

% ellipsoidal path
s_lim = 0.5;                      % at what s the next path should be started
radius_xy = diag([2 2]);


%% Controller paramters

initial_tau = [0.1 0.1 0.1]';

% tuning parameters
my = 0.016;
Kp = 25e-2;
Kd = 40e-2;


%% Thruster allocation

allocation_selection = 0;

