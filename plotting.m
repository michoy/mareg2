x = logsout{13}.Values.Data(:,1);
y = logsout{13}.Values.Data(:,2);
psi = logsout{13}.Values.Data(:,3);

x_hat = logsout{14}.Values.Data(:,1);
y_hat = logsout{14}.Values.Data(:,2);
psi_hat = logsout{14}.Values.Data(:,3);

x_d = logsout{7}.Values.Data(:,1);
y_d = logsout{7}.Values.Data(:,2);
psi_d = logsout{7}.Values.Data(:,3);

tau_cmd_x = logsout{2}.Values.Data(1,:);
tau_cmd_y = logsout{2}.Values.Data(2,:);
tau_cmd_psi = logsout{2}.Values.Data(3,:);

path_start = uint64(length(x_d) * initial_trigger_delay / 150) + 10;


subplot(3,1,1)
hold on
plot(y, x, y_hat, x_hat, y_d(path_start:end), x_d(path_start:end))
lgd = legend('eta', 'eta\_hat', 'eta\_d');
lgd.Location = 'northwest';
grid
axis equal
hold off

subplot(3,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
lgd = legend('psi', 'psi\_hat', 'psi\_d');
lgd.Location = 'northwest';
grid 
hold off

subplot(3,1,3)
hold on
plot(tau_cmd_x)
plot(tau_cmd_y)
plot(tau_cmd_psi)
lgd = legend('tau\_cmd\_x', 'tau\_cmd\_y', 'tau\_cmd\_psi');
lgd.Location = 'northwest';
grid
hold off