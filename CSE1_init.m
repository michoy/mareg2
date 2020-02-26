
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
L1 = diag([75 10 10]);
L2 = diag([75 10 10]);
L3 = diag([7.5 1 1]);

L = [L1; M\L2; L3];

% Input matrix B
B = [zeros(3); inv(M); zeros(3)];


