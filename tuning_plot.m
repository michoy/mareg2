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

u_bow = logsout{17}.Values.Data(:,1);
u_1 = logsout{17}.Values.Data(:,2);
u_2 = logsout{17}.Values.Data(:,3);
a_1 = logsout{17}.Values.Data(:,4);
a_2 = logsout{17}.Values.Data(:,5);

z1 = logsout{4}.Values.Data;
z2 = logsout{5}.Values.Data;

path_start = uint64(length(x_d) * initial_trigger_delay / ...
    simulation_time) + 10;


subplot(4,1,1)
hold on
plot(y, x, y_hat, x_hat, y_d(path_start:end), x_d(path_start:end))
lgd = legend('eta', 'eta\_hat', 'eta\_d');
lgd.Location = 'northwest';
grid
axis equal
hold off

subplot(4,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
lgd = legend('psi', 'psi\_hat', 'psi\_d');
lgd.Location = 'northwest';
grid 
hold off

subplot(4,1,3)
hold on
plot(tau_cmd_x)
plot(tau_cmd_y)
plot(tau_cmd_psi)
lgd = legend('tau\_cmd\_x', 'tau\_cmd\_y', 'tau\_cmd\_psi');
lgd.Location = 'northwest';
grid
hold off

subplot(4,1,4)
hold on
plot(u_bow)
plot(u_1)
plot(u_2)
lgd = legend('u\_bow', 'u\_1', 'u\_2');
lgd.Location = 'northwest';
grid
hold off

