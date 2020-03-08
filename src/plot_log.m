LOG_PATH = 'C:\Users\linnl\OneDrive\Dokumenter\GitMarreg\mareg2\Logs\2020\03\02\Log File_15_57_59.csv';

log = readtable(LOG_PATH);
eta_hat_x = log.eta_hat_x;
eta_hat_y = log.eta_hat_y;
eta_hat_psi = log.eta_hat_psi;
eta_m_x = log.eta_m_x;
eta_m_y = log.eta_m_y;
eta_m_psi = log.eta_m_psi;
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
plot(eta_hat_x, 'LineWidth', 1.5)
plot(eta_m_x, 'LineWidth', 1.5)

legend('estimated surge', 'measured surge')

subplot(4,1,3)
hold on
plot(eta_hat_y, 'LineWidth', 1.5)
plot(eta_m_y, 'LineWidth', 1.5)
legend('estimated sway', 'measured sway')
grid
hold off

subplot(4,1,4)
hold on
plot(eta_hat_psi, 'LineWidth', 1.5)
plot(eta_m_psi, 'LineWidth', 1.5)
legend('estimated yaw', 'measured yaw')
grid
hold off


