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


subplot(3,1,1)
hold on
plot(tau)
lgd = legend('tau\_x', 'tau\_y', 'tau\_psi');
lgd.Location = 'northwest';
grid
hold off

subplot(3,1,2)
hold on
plot(u_time, u_bow)
plot(u_time, u_1)
plot(u_time, u_2)
lgd = legend('u\_bow', 'u\_1', 'u\_2');
lgd.Location = 'northwest';
grid
hold off

subplot(3,1,3)
hold on
plot(u_time, a_1)
plot(u_time, a_2)
lgd = legend('a\_1', 'a\_2');
lgd.Location = 'northwest';
grid
hold off


