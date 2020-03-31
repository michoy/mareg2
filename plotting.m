x = observer{10}.Values.Data(1,:);
y = observer{10}.Values.Data(2,:);
psi = observer{10}.Values.Data(3,:);
x_hat = observer{7}.Values.Data(:,1);
y_hat = observer{7}.Values.Data(:,2);
psi_hat = observer{7}.Values.Data(:,3);
x_d = observer{4}.Values.Data(:,1);
y_d = observer{4}.Values.Data(:,2);
psi_d = observer{4}.Values.Data(:,3);

tau_cmd_x = observer{12}.Values.Data(:,1);
tau_cmd_y = observer{12}.Values.Data(:,2);
tau_cmd_psi = observer{12}.Values.Data(:,3);
subplot(3,1,1)
hold on
plot(x, y, x_hat, y_hat,x_d,y_d)
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
%plot(tau_cmd_psi)
legend('tau\_cmd\_x','tau\_cmd\_y')
grid
hold off