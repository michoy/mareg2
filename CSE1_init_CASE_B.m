
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
L1 = diag([10 10 10]);
L2 = diag([10 10 10]);
L3 = diag([1 0.3 1]);

% Input matrix B
B = [zeros(3); inv(M); zeros(3)];


