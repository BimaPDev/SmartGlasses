/* FUN_100f5dcc @ 0x100f5dcc */

undefined4
FUN_100f5dcc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_100e825c(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78((DAT_100f5e90 - DAT_100f5e8c) * 0x20 & 0xff00U | 0x15a0011,DAT_100f5e98,
                 DAT_100f5ea0,DAT_100f5e8c,param_4);
    return 1;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0x28;
  }
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  iVar3 = FUN_1006ba84(puVar2,param_2,1);
  if (iVar3 < 0) {
    FUN_100a5b78(DAT_100f5e94 | (DAT_100f5e90 - DAT_100f5e8c) * 0x20 & 0xff00U,DAT_100f5e98,
                 DAT_100f5e9c,iVar3,param_4);
    FUN_100e833c(puVar2);
    return 1;
  }
  FUN_1006bd24(puVar2,0,2);
  iVar3 = FUN_1006bd74(puVar2);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    FUN_1006bd24(puVar2,0,0);
    uVar1 = DAT_100f5e88;
    param_1[5] = DAT_100f5e84;
    param_1[6] = uVar1;
    param_1[3] = puVar2;
    return 0;
  }
  FUN_1006bc30(puVar2);
  FUN_100e833c(puVar2);
  return 0x51;
}

