eta = logsout{13}.Values;
x = logsout{13}.Values.Data(:,1);
y = logsout{13}.Values.Data(:,2);

eta_h = logsout{14}.Values;
x_h = logsout{14}.Values.Data(:,1);
y_h = logsout{14}.Values.Data(:,2);


nu = logsout{20}.Values;
nu_hat= logsout{15}.Values;

bias_hat = logsout{17}.Values;


subplot(3,1,1)
hold on
plot(y, x, y_h, x_h)
lgd = legend('eta', 'eta\_hat');
lgd.Location = 'northeast';
grid
axis equal
hold off


subplot(3,1,2)
hold on
plot(nu)
plot(nu_hat)
lgd = legend('nu_x','nu_y','nu_{psi}', 'nu\_hat_x','nu\_hat_y','nu\_hat_{psi}');
lgd.Location = 'northeast';
grid
hold off

subplot(3,1,3)
hold on
plot(bias_hat)
lgd = legend('bias_x','bias_y','bias_{psi}');
lgd.Location = 'northeast';
grid
hold off



