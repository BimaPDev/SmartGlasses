/* FUN_1405b33c @ 0x1405b33c */

undefined4 FUN_1405b33c(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (1 < param_1) {
    return 0x43;
  }
  iVar2 = *(int *)(DAT_1405b370 + param_1 * 4);
  if (((iVar2 != 0) && (bVar1 = *(byte *)(iVar2 + 0x43), (bVar1 & 0x10) != 0)) && ((bVar1 & 4) == 0)
     ) {
    uVar3 = FUN_1406d628();
    return uVar3;
  }
  return 0x43;
}

