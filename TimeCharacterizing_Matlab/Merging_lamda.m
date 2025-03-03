clear
load('Data for merging lamda.mat')

% Define exponent range
nexp = -0.5:0.02:1.0;
ARS = zeros(1,76);
ARSL02 = zeros(1,76);
ARSL05 = zeros(1,76);
ARSL08 = zeros(1,76);

for k = 1:76
    %% Process lamda02 to LP02
    LP02 = zeros(115,8);
    for j = 1:8
        ccv = 2.5 * j;
        LP02(:,j) = lamda02(:,j) * (ccv^nexp(k));
    end

    %% Process lamda05 to LP05
    LP05 = zeros(115,8);
    for j = 1:8
        ccv = 2.5 * j;
        LP05(:,j) = lamda05(:,j) * (ccv^nexp(k));
    end

    %% Process lamda08 to LP08
    LP08 = zeros(115,8);
    for j = 1:8
        ccv = 2.5 * j;
        LP08(:,j) = lamda08(:,j) * (ccv^nexp(k));
    end

    %% Compute row-wise mean values
    ALP02 = mean(LP02, 2);
    ALP05 = mean(LP05, 2);
    ALP08 = mean(LP08, 2);

    %% Compute relative deviation for each row
    RSL02 = abs(LP02 - ALP02) ./ ALP02;
    RSLP05 = abs(LP05 - ALP05) ./ ALP05;
    RSLP08 = abs(LP08 - ALP08) ./ ALP08;

    %% Compute the mean relative deviation
    LOSS02(k) = nanmean(mean(RSL02, 2));
    LOSS05(k) = nanmean(mean(RSLP05, 2));
    LOSS08(k) = nanmean(mean(RSLP08, 2));
    LOSS(k) = (LOSS02(k) + LOSS05(k) + LOSS08(k)) / 3;
end
