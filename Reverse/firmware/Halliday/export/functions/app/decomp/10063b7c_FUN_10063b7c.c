/* FUN_10063b7c @ 0x10063b7c */

undefined4 FUN_10063b7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  int *local_48;
  undefined4 local_34;
  
  uVar6 = FUN_1013c70e();
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    FUN_10119dc2(DAT_10063c50,DAT_10063c4c,DAT_10063c48,0x8e,uVar6);
    FUN_10119dc2(DAT_10063c54);
    FUN_1011a1f0(DAT_10063c48,0x8e,extraout_r2,extraout_r3);
    uVar2 = extraout_r1;
  }
  piVar1 = DAT_10063c58;
  bVar5 = 0;
  do {
    uVar3 = (uint)bVar5;
    if (*(byte *)(piVar1 + 1) <= uVar3) {
      FUN_100a5b78((DAT_10063c60 - DAT_10063c5c) * 0x20 & 0xff00U | 0x920011,DAT_10063c68,
                   DAT_10063c64,DAT_10063c5c,param_1,param_4);
      return 0xfffffff4;
    }
    uVar6 = FUN_1011401c(piVar1 + uVar3 * 0xb + 4,uVar2,0,0);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    bVar5 = bVar5 + 1;
  } while ((int)uVar6 != 0);
  piVar4 = piVar1 + uVar3 * 0xb + 10;
  FUN_1011ea48(piVar4,0,0x14);
  *piVar1 = *piVar1 + -1;
  FUN_1011ea40(piVar4,param_2,param_3);
  local_50 = param_3;
  uStack_4c = param_4;
  local_48 = piVar4;
  local_34 = param_1;
  FUN_10113bf4(DAT_10063c6c,auStack_54,piVar1 + uVar3 * 0xb + 4);
  return 0;
}

