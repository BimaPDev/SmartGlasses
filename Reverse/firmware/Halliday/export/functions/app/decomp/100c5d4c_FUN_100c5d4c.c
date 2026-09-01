/* FUN_100c5d4c @ 0x100c5d4c */

int FUN_100c5d4c(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar6;
  
  pcVar1 = DAT_100c5e14;
  if (*DAT_100c5e14 == '\0') {
    uVar6 = FUN_1013270a(DAT_100c5e18,param_2,10000,0,param_4);
    iVar3 = (int)uVar6;
    if (iVar3 != 0) {
      FUN_100c1bc4(iVar3 + 8,0);
      *(undefined1 *)(iVar3 + 0x14) = 0;
      iVar4 = FUN_100c196c(iVar3);
      iVar2 = DAT_100c5e44;
      *(undefined2 *)(iVar4 * 0xc + DAT_100c5e44 + 2) = param_1;
      iVar4 = FUN_100c196c(iVar3);
      *(undefined4 *)(iVar4 * 0xc + iVar2 + 8) = 0;
      iVar4 = FUN_100c196c(iVar3);
      *(undefined4 *)(iVar4 * 0xc + iVar2 + 4) = 0;
      puVar5 = (undefined2 *)FUN_100c1fe4(iVar3 + 8,3);
      *puVar5 = param_1;
      *(char *)(puVar5 + 1) = (char)param_2;
      return iVar3;
    }
    FUN_10119dc2(DAT_100c5e24,DAT_100c5e20,DAT_100c5e1c,0x155,0,(int)((ulonglong)uVar6 >> 0x20));
    FUN_1011a1f0(DAT_100c5e1c,0x155,extraout_r2,extraout_r3);
    FUN_100a5b78(DAT_100c5e30 | (DAT_100c5e28 - DAT_100c5e2c) * 0x20 & 0xff00U,DAT_100c5e38,
                 DAT_100c5e34,0);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      (*(code *)*DAT_100c5e3c)(0xfffffffc);
      FUN_10119dc2(DAT_100c5e40,0x15d);
      return 0;
    }
  }
  return 0;
}

