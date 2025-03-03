set MATLAB=D:\Software\Matlab2018

cd .

if "%1"=="" (D:\Software\MATLAB~1\bin\win64\gmake -f Sim1017_CODE.mk all) else (D:\Software\MATLAB~1\bin\win64\gmake -f Sim1017_CODE.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
