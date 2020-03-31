x = observer{10}.Values.Data(1,:);
y = observer{10}.Values.Data(2,:);
psi = observer{10}.Values.Data(3,:);
x_hat = observer{7}.Values.Data(:,1);
y_hat = observer{7}.Values.Data(:,2);
psi_hat = observer{7}.Values.Data(:,3);
x_d = observer{4}.Values.Data(:,1);
y_d = observer{4}.Values.Data(:,2);
psi_d = observer{4}.Values.Data(:,3);


subplot(2,1,1)
hold on
plot(x, y, x_hat, y_hat)
legend('eta', 'eta\_hat', 'eta\_d')
grid
axis equal
hold off

subplot(2,1,2)
hold on 
plot(psi)
plot(psi_hat)
plot(psi_d)
legend('psi', 'psi\_hat', 'psi\_d')
grid 
hold off