clear
load('Data for merging q.mat')

% Define exponent range
nexp = 0:0.03:2.25;
ARS = zeros(1,76);
ARSQ02 = zeros(1,76);
ARSQ05 = zeros(1,76);
ARSQ08 = zeros(1,76);

for k = 1:76
    %% Process qd02 to QdP02
    QdP02 = zeros(152,8);
    for j = 1:8
        ccv = j;
        QdP02(:,j) = qd02(:,j) * (ccv^nexp(k));
    end

    %% Process qd05 to QdP05
    QdP05 = zeros(152,8);
    for j = 1:8
        ccv = j;
        QdP05(:,j) = qd05(:,j) * (ccv^nexp(k));
    end

    %% Process qd08 to QdP08
    QdP08 = zeros(152,8);
    for j = 1:8
        ccv = j;
        QdP08(:,j) = qd08(:,j) * (ccv^nexp(k));
    end

    %% Compute row-wise mean values
    AQP02 = mean(QdP02, 2);
    AQP05 = mean(QdP05, 2);
    AQP08 = mean(QdP08, 2);

    %% Compute relative deviation for each row
    RSQ02 = abs(QdP02 - AQP02) ./ AQP02;
    RSQ05 = abs(QdP05 - AQP05) ./ AQP05;
    RSQ08 = abs(QdP08 - AQP08) ./ AQP08;

    %% Compute the mean relative deviation
    LOSS02(k) = nanmean(mean(RSQ02, 2));
    LOSS05(k) = nanmean(mean(RSQ05, 2));
    LOSS08(k) = nanmean(mean(RSQ08, 2));
    LOSS(k) = (LOSS02(k) + LOSS05(k) + LOSS08(k)) / 3;
end
