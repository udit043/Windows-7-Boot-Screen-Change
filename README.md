# Windows-7-Boot-Screen-Change

I can change Windows 7 boot screen with any pic through my program.

What my program do :
Add onr registry 
( HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Background /v OEMBackground /t REG_DWORD /d 1 /f\"") )

Copy the image to ( C:\\Windows\\System32\\oobe\\info\\backgrounds\\ ) folder after extracting from executable file.
And the boot screen is replaced with your pic.

Here is the executable file
( https://www.dropbox.com/s/24789r3w2wssyjj/final%28zx%29.exe?dl=0 )

Boot Image 

![myboot - copy](https://cloud.githubusercontent.com/assets/9850882/12079081/f9f27e54-b251-11e5-9aaa-1d64168d8613.jpg)
