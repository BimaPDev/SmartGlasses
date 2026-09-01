/* FUN_10024fbc @ 0x10024fbc */

void FUN_10024fbc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_10025020;
  iVar1 = FUN_10117e44(0x34,param_4,param_5,0);
  FUN_1011e9f8(iVar1,param_2,0x23);
  *(undefined1 *)(iVar1 + 0x23) = 0;
  *(undefined4 *)(iVar1 + 0x24) = param_3;
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  *(short *)(iVar1 + 0x2c) = (short)param_5;
  iVar3 = *param_1;
  *param_1 = iVar1;
  *(int *)(iVar1 + 0x30) = iVar3;
  if (*DAT_10025020 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

