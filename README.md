# You Used to Call me on my Shell Phone: Windows Shellcoding for Beginners
|--------------------------|
|WINDOWS SHELLCODE TRAINING|
|--------------------------|
This repo will consist of my old and new PowerPoint presentation for my talk on developing and understanding Windows shellcode. 

## What is Covered
- How Windows shellcode works
- The "anatomy" of Windows shellcode
- How to develop your own
- So much more

# Wild West Hackin' Fest: Mile High February 2026 Talk
Official repo for my internal and Wild West Hackin' Fest: Mile High "talk" called "Windows Shellcoding for Beginners: You Used to Call me on my Shell Phone" that I will be doing in February of 2026 in Denver, Colorado! 

It will also be used during trainings for various different offensive cyber security trainings in 2026! 

# Windows Shellcode Crash Course
Shellcode can be obtained by two primary methods:
1. Hackers can create their own Assembly programs, "carve out" (using `objdump`) the core of the shellcode instructions and obtain a byte array for usage in another delivery technique.
   - Essentially the process of converting machine instructions (opcodes -> byte array)
   - Least convenient, most stealthy, and time consuming
2. Acquired via third-party means
   - Generated via `msfvenom`, obtained from Exploit-DB, Shellstorm, GitHub, etc.
   - Potential security risk
   - Least trustworthy
   - Likely already existent security signatures by AV/EDR solutions
  
     
