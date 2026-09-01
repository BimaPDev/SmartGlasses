/* FUN_10132f8e @ 0x10132f8e */

undefined4 FUN_10132f8e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100c5d4c(0x202d,1);
  if (iVar1 != 0) {
    FUN_10132eaa(iVar1,param_1);
    uVar2 = FUN_100c5e48(0x202d,iVar1,0,param_4);
    return uVar2;
  }
  return 0xffffff97;
}

