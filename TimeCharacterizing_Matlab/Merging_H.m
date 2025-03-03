clear
load('Data for merging H.mat')

% Define exponent range
nexp = -2:0.03:1;
numExp = length(nexp);
ARS = zeros(1, numExp);
ARSX02 = zeros(1, numExp);
ARSX05 = zeros(1, numExp);
ARSX08 = zeros(1, numExp);

% Get the number of rows for each dataset
numRowsH02 = size(H02,1);
numRowsH05 = size(H05,1);
numRowsH08 = size(H08,1);

for k = 1:numExp
    % Compute scaling factors
    ccv = 6.912 * (0.6 + 0.1 * (1:8));

    %% Process H02 to HP02
    HP02 = H02 .* (ccv.^nexp(k));
    
    %% Process H05 to HP05
    HP05 = H05 .* (ccv.^nexp(k));

    %% Process H08 to HP08
    HP08 = H08 .* (ccv.^nexp(k));

    %% Compute row-wise mean values
    AXP02 = mean(HP02, 2);
    AXP05 = mean(HP05, 2);
    AXP08 = mean(HP08, 2);

    %% Compute relative deviation for each row
    RSX02 = abs(HP02 - AXP02) ./ AXP02;
    RSX05 = abs(HP05 - AXP05) ./ AXP05;
    RSX08 = abs(HP08 - AXP08) ./ AXP08;

    %% Compute the mean relative deviation
    LOSS02(k) = nanmean(mean(RSX02, 2));
    LOSS05(k) = nanmean(mean(RSX05, 2));
    LOSS08(k) = nanmean(mean(RSX08, 2));
    LOSS(k) = (LOSS02(k) + LOSS05(k) + LOSS08(k)) / 3;
end
