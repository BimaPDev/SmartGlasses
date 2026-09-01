/* FUN_1006323c @ 0x1006323c */

void FUN_1006323c(int param_1,uint param_2,uint param_3)

{
  uint extraout_r2;
  uint uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar3 = 1 << (param_2 & 0xff);
  uVar2 = **(uint **)(param_1 + 4);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar1 = param_3;
  if ((uVar3 & uVar2) == 0) {
    FUN_10119dc2(DAT_100632cc,DAT_100632c8,DAT_100632c4,0x50a,param_1,param_2);
    FUN_10119dc2(DAT_100632d0);
    uVar6 = FUN_1011a1f0(DAT_100632c4,0x50a,param_3,uVar2);
    uVar1 = extraout_r2;
  }
  bVar5 = (uVar3 & *puVar4) != 0;
  if (bVar5) {
    param_3 = LZCOUNT(param_3);
  }
  if (bVar5) {
    param_3 = param_3 >> 5;
  }
  uVar2 = **(uint **)(param_1 + 4);
  if ((uVar3 & uVar2) == 0) {
    FUN_10119dc2(DAT_100632cc,DAT_100632c8,DAT_100632c4,0x4e0,uVar6);
    FUN_10119dc2(DAT_100632d0);
    FUN_1011a1f0(DAT_100632c4,0x4e0,uVar1,uVar2);
  }
  if (param_3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x100632ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

