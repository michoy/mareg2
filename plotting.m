x = observer{8}.Values.Data(1,:);
y = observer{8}.Values.Data(2,:);
psi = observer{8}.Values.Data(3,:);
x_hat = observer{6}.Values.Data(:,1);
y_hat = observer{6}.Values.Data(:,2);
psi_hat = observer{6}.Values.Data(:,3);


subplot(2,1,1)
hold on
plot(x, y, x_hat, y_hat)
legend('eta', 'eta\_hat')
grid
axis equal
hold off

subplot(2,1,2)
hold on 
plot(psi)
plot(psi_hat)
legend('psi', 'psi\_hat')
grid 
hold off