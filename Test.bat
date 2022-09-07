for %%f in (out\build\x86-Release\Ext\Test\Graphics\*.exe) do call %%f
for %%f in (out\build\x86-Release\Ext\Test\Core\*.exe) do call %%f
for %%f in (out\build\x86-Release\Ext\Test\Loaders\*.exe) do call %%f
for %%f in (out\build\x86-Release\Ext\Test\Formats\*.exe) do call %%f
for %%f in (out\build\x86-Release\Ext\Test\Managers\*.exe) do call %%f
for %%f in (out\build\x86-Release\Ext\Test\Readers\*.exe) do call %%f

for %%f in (out\build\x86-Release\Sources\Fallout\Test\Gameplay\*.exe) do call %%f
for %%f in (out\build\x86-Release\Sources\Fallout\Test\Critters\*.exe) do call %%f
for %%f in (out\build\x86-Release\Sources\Fallout\Test\Managers\*.exe) do call %%f

pause