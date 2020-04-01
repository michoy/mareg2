x = log{11}.Values.Data(1,:);
y = log{11}.Values.Data(2,:);
psi = log{11}.Values.Data(3,:);

x_hat = log{9}.Values.Data(:,1);
y_hat = log{9}.Values.Data(:,2);
psi_hat = log{9}.Values.Data(:,3);

x_d = log{5}.Values.Data(:,1);
y_d = log{5}.Values.Data(:,2);
psi_d = log{5}.Values.Data(:,3);

tau_cmd_x = log{4}.Values.Data(1,:);
tau_cmd_y = log{4}.Values.Data(2,:);
tau_cmd_psi = log{4}.Values.Data(3,:);

subplot(3,1,1)
hold on
plot(x, y, x_hat, y_hat, x_d, y_d)
legend('eta', 'eta\_hat', 'eta\_d')
grid
axis equal
hold off

subplot(3,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
legend('psi', 'psi\_hat', 'psi\_d')
grid 
hold off

subplot(3,1,3)
hold on
plot(tau_cmd_x)
plot(tau_cmd_y)
plot(tau_cmd_psi)
legend('tau\_cmd\_x', 'tau\_cmd\_y', 'tau\_cmd\_psi')
grid
hold off