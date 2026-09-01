/* FUN_100e3dec @ 0x100e3dec */

undefined4 FUN_100e3dec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100e255c();
  if (((iVar1 == 0) || (-1 < *(int *)(iVar1 + 0xe8) << 0x18)) ||
     (-1 < *(int *)(iVar1 + 0xec) << 0x16)) {
    uVar2 = 1;
  }
  else {
    FUN_100e3b04(param_1,DAT_100e3e18);
    uVar2 = 0;
  }
  return uVar2;
}

