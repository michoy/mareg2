x = logsout{13}.Values.Data(1,:);
y = logsout{13}.Values.Data(2,:);
psi = logsout{13}.Values.Data(3,:);

x_hat = logsout{14}.Values.Data(:,1);
y_hat = logsout{14}.Values.Data(:,2);
psi_hat = logsout{14}.Values.Data(:,3);

x_d = logsout{7}.Values.Data(:,1);
y_d = logsout{7}.Values.Data(:,2);
psi_d = logsout{7}.Values.Data(:,3);

tau_cmd_x = logsout{2}.Values.Data(1,:);
tau_cmd_y = logsout{2}.Values.Data(2,:);
tau_cmd_psi = logsout{2}.Values.Data(3,:);

z1 = logsout{4}.Values.Data;
z2 = logsout{5}.Values.Data;

path_start = uint64(length(x_d) * initial_trigger_delay / 150) + 10;


subplot(5,1,1)
hold on
plot(x, y, x_hat, y_hat, x_d(path_start:end), y_d(path_start:end))
lgd = legend('eta', 'eta\_hat', 'eta\_d');
lgd.Location = 'northwest';
grid
axis equal
hold off

subplot(5,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
lgd = legend('psi', 'psi\_hat', 'psi\_d');
lgd.Location = 'northwest';
grid 
hold off

subplot(5,1,3)
hold on
plot(tau_cmd_x)
plot(tau_cmd_y)
plot(tau_cmd_psi)
lgd = legend('tau\_cmd\_x', 'tau\_cmd\_y', 'tau\_cmd\_psi');
lgd.Location = 'northwest';
grid
hold off

subplot(5,1,4)
hold on
plot(z1(:,1))
plot(z1(:,2))
plot(z1(:,3))
lgd = legend('z1\_x', 'z1\_y', 'z1\_psi');
lgd.Location = 'northwest';
grid
hold off

subplot(5,1,5)
hold on
plot(z2(:,1))
plot(z2(:,2))
plot(z2(:,3))
lgd = legend('z2\_x', 'z2\_y', 'z2\_psi');
lgd.Location = 'northwest';
grid
hold off
