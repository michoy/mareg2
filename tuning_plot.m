eta = logsout{13}.Values;
x = logsout{13}.Values.Data(:,1);
y = logsout{13}.Values.Data(:,2);

eta_d = logsout{7}.Values;
x_d = logsout{7}.Values.Data(:,1);
y_d = logsout{7}.Values.Data(:,2);

tau = logsout{2}.Values;

u = logsout{17}.Values;
u_time = logsout{17}.Values.time;
u_bow = logsout{17}.Values.Data(:,1);
u_1 = logsout{17}.Values.Data(:,2);
u_2 = logsout{17}.Values.Data(:,3);
a_1 = logsout{17}.Values.Data(:,4);
a_2 = logsout{17}.Values.Data(:,5);

path_start = uint64(length(x_d) * initial_trigger_delay / ...
    simulation_time) + 5;

subplot(4,1,1:2)
hold on
plot(y, x, y_d(path_start:end), x_d(path_start:end))
lgd = legend('eta', 'eta\_d');
lgd.Location = 'northeast';
grid
axis equal
hold off


subplot(4,1,3)
hold on 
plot(eta.time, x)
plot(eta.time, y)
plot(eta_d.time, x_d, '--')
plot(eta_d.time, y_d, '--')
lgd = legend('x', 'y', 'x\_d', 'y\_d');
lgd.Location = 'northwest';
grid 
hold off

subplot(4,1,4)
hold on
plot(eta.time, eta.Data(:,3))
plot(eta_d.time, eta_d.Data(:,3), '--')
lgd = legend('psi', 'psi\_d');
lgd.Location = 'northwest';
grid
hold off




