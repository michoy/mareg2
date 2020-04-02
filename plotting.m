x = logsout{13}.Values.Data(1,:);
y = logsout{13}.Values.Data(2,:);
psi = logsout{13}.Values.Data(3,:);

x_hat = logsout{10}.Values.Data(:,1);
y_hat = logsout{10}.Values.Data(:,2);
psi_hat = logsout{10}.Values.Data(:,3);

x_d = logsout{5}.Values.Data(:,1);
y_d = logsout{5}.Values.Data(:,2);
psi_d = logsout{5}.Values.Data(:,3);

tau_cmd_x = logsout{2}.Values.Data(1,:);
tau_cmd_y = logsout{2}.Values.Data(2,:);
tau_cmd_psi = logsout{2}.Values.Data(3,:);

subplot(3,1,1)
hold on
plot(x, y, x_hat, y_hat, x_d, y_d)
lgd = legend('eta', 'eta\_hat', 'eta\_d');
lgd.Location = 'southwest';
grid
axis equal
hold off

subplot(3,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
lgd = legend('psi', 'psi\_hat', 'psi\_d');
lgd.Location = 'southwest';
grid 
hold off

subplot(3,1,3)
hold on
plot(tau_cmd_x)
plot(tau_cmd_y)
plot(tau_cmd_psi)
lgd = legend('tau\_cmd\_x', 'tau\_cmd\_y', 'tau\_cmd\_psi');
lgd.Location = 'southwest';
grid
hold off