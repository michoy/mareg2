LOG_PATH = 'C:\Users\MCLab\Documents\GitHub\mareg2\Logs\2020\02\19\Log File_18_52_52.csv';


% Load log
log = readtable(LOG_PATH);
x = log.x;
y = log.y;
v = log.v;
u = log.u;
r = log.r;
psi = log.psi;
tau_cmd_surge = log.tau_cmd_surge;
tau_cmd_sway = log.tau_cmd_sway;
tau_cmd_yaw = log.tau_cmd_yaw;
joy_surge = log.PosYLeft;
joy_sway = log.PosXLeft;
L2 = log.L2;
R2 = log.R2;

subplot(4,1,1)
hold on
plot(joy_surge, 'LineWidth', 1.5)
plot(joy_sway, 'LineWidth', 1.5)
plot(L2, 'LineWidth', 1.5)
plot(R2, 'LineWidth', 1.5)
legend('joy surge', 'joy sway', 'L2', 'R2')
grid
hold off

subplot(4,1,2)
hold on 
plot(tau_cmd_surge, 'LineWidth', 1.5)
plot(tau_cmd_sway, 'LineWidth', 1.5)
plot(tau_cmd_yaw, 'LineWidth', 1.5)
legend('tau surge', 'tau sway', 'tau yaw')
grid
hold off

subplot(4,1,3)
hold on
plot(x, 'LineWidth', 1.5)
plot(y, 'LineWidth', 1.5)
legend('x', 'y')
grid
hold off

subplot(4,1,4)
hold on
plot(u, 'LineWidth', 1.5)
plot(v, 'LineWidth', 1.5)
plot(r, 'LineWidth', 1.5)
legend('u', 'v', 'r')
grid
hold off
