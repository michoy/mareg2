x = observer{8}.Values.Data(1,:);
y = observer{8}.Values.Data(2,:);
x_hat = observer{6}.Values.Data(:,1);
y_hat = observer{6}.Values.Data(:,2);

hold on

plot(x, y, x_hat, y_hat)
legend('eta', 'eta\_hat')
grid

hold off
