:: (c) Spyridon Zervos


@echo off

pushd ..
external\premake\premake5.exe --file=Build.lua vs2022
popd

pause