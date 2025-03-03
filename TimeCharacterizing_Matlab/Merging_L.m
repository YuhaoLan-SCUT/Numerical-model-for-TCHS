clear
load('Data for merging L.mat')

% Define exponent range
nexp = -2.25:0.03:0;
ARS = zeros(1,76);
ARSX02 = zeros(1,76);
ARSX05 = zeros(1,76);
ARSX08 = zeros(1,76);

for k = 1:76
    %% Process XL02 to XLP02
    XLP02 = zeros(126,8);
    for j = 1:8
        ccv = j + 1;
        XLP02(:,j) = XL02(:,j) * (ccv^nexp(k));
    end

    %% Process XL05 to XLP05
    XLP05 = zeros(126,8);
    for j = 1:8
        ccv = j + 1;
        XLP05(:,j) = XL05(:,j) * (ccv^nexp(k));
    end

    %% Process XL08 to XLP08
    XLP08 = zeros(126,8);
    for j = 1:8
        ccv = j + 1;
        XLP08(:,j) = XL08(:,j) * (ccv^nexp(k));
    end

    %% Compute row-wise mean values
    AXP02 = mean(XLP02, 2);
    AXP05 = mean(XLP05, 2);
    AXP08 = mean(XLP08, 2);

    %% Compute relative deviation for each row
    RSX02 = abs(XLP02 - AXP02) ./ AXP02;
    RSX05 = abs(XLP05 - AXP05) ./ AXP05;
    RSX08 = abs(XLP08 - AXP08) ./ AXP08;

    %% Compute the mean relative deviation
    LOSS02(k) = nanmean(mean(RSX02, 2));
    LOSS05(k) = nanmean(mean(RSX05, 2));
    LOSS08(k) = nanmean(mean(RSX08, 2));
    LOSS(k) = (LOSS02(k) + LOSS05(k) + LOSS08(k)) / 3;
end
