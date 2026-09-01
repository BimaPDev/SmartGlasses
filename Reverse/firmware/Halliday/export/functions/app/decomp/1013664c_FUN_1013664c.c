/* FUN_1013664c @ 0x1013664c */

undefined4 FUN_1013664c(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x39) = *(byte *)(iVar1 + 0x39) & 0xfd | (param_2 & 1) << 1;
    uVar2 = 0;
  }
  return uVar2;
}

