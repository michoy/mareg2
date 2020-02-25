
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


%% Initial values

x_init = zeros(1,9);
y_init = zeros(1,9); % 


%% Observer gains

L1 = [];
L2 = [];
L3 = [];

L = diag([L1, L2, L3]);
