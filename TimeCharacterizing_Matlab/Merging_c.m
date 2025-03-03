clear
load('Data for merging c.mat')

% Define exponent range
nexp = -1.5:0.02:0;
ARS = zeros(1,76);
ARSCVP02 = zeros(1,76);
ARSCVP05 = zeros(1,76);
ARSCVP08 = zeros(1,76);

for k = 1:76
    %% Process Cv02 to CvP02
    CvP02 = zeros(293,8);
    for j = 1:8
        ccv = 0.2 * j + 1;
        for i = 1:293
            CvP02(i,j) = cv02(i,j) * (ccv^nexp(k));
        end
    end

    %% Process Cv05 to CvP05
    CvP05 = zeros(248,8);
    for j = 1:8
        ccv = 0.2 * j + 1;
        for i = 1:248
            CvP05(i,j) = cv05(i,j) * (ccv^nexp(k));
        end
    end

    %% Process Cv08 to CvP08
    CvP08 = zeros(221,7);
    for j = 1:7
        ccv = 0.1 * j + 1.1;
        for i = 1:221
            CvP08(i,j) = cv08(i,j) * (ccv^nexp(k));
        end
    end

    %% Compute row-wise mean values
    ACVP02 = mean(CvP02, 2);
    ACVP05 = mean(CvP05, 2);
    ACVP08 = mean(CvP08, 2);

    %% Compute relative deviation for each row
    RSCVP02 = abs(CvP02 - ACVP02) ./ ACVP02;
    RSCVP05 = abs(CvP05 - ACVP05) ./ ACVP05;
    RSCVP08 = abs(CvP08 - ACVP08) ./ ACVP08;

    %% Compute the mean relative deviation
    LOSS02(k) = nanmean(mean(RSCVP02, 2));
    LOSS05(k) = nanmean(mean(RSCVP05, 2));
    LOSS08(k) = nanmean(mean(RSCVP08, 2));
    LOSS(k) = (LOSS02(k) + LOSS05(k) + LOSS08(k)) / 3;
end
