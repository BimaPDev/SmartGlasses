/* FUN_10049eac @ 0x10049eac */

void FUN_10049eac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_10049ee4;
  iVar2 = *DAT_10049ee8;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3dc) != 0)) {
    FUN_100932b0(*(int *)(iVar2 + 0x3dc),0,param_3,DAT_10049ee8,param_1);
    *(undefined4 *)(iVar2 + 0x3dc) = 0;
  }
  if (*DAT_10049ee4 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

