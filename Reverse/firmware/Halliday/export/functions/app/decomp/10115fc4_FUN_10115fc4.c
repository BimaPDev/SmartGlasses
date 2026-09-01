/* FUN_10115fc4 @ 0x10115fc4 */

void FUN_10115fc4(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar1;
  int extraout_r3;
  int extraout_r3_00;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar1 = 0;
  iVar2 = param_4;
  iVar5 = param_4;
  if (param_3 != 0) {
    uVar4 = param_3;
    FUN_10119dc2(DAT_10116054,DAT_10116050,DAT_1011604c,0x2d,param_1,param_2,param_3,param_4,param_4
                );
    FUN_10119dc2(DAT_10116058);
    uVar3 = FUN_1011a1f0(DAT_1011604c,0x2d,uVar4,iVar2);
    uVar1 = extraout_r2;
    iVar2 = extraout_r3;
  }
  if (0x3f < param_2) {
    FUN_10119dc2(DAT_10116054,DAT_1011605c,DAT_1011604c,0x2f,uVar3,uVar1,iVar2,iVar5);
    FUN_10119dc2(DAT_10116060);
    uVar3 = FUN_1011a1f0(DAT_1011604c,0x2f,uVar1,iVar2);
    uVar1 = extraout_r2_00;
    iVar2 = extraout_r3_00;
  }
  if (param_4 == 0) {
    FUN_10119dc2(DAT_10116054,DAT_10116064,DAT_1011604c,0x30,uVar3,uVar1,iVar2,iVar5);
    FUN_10119dc2(DAT_10116068);
    FUN_1011a1f0(DAT_1011604c,0x30,uVar1,iVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) =
       (param_3 & 1) << 0x15 | (param_2 & 0x3f) << 8 | (uint)*(byte *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = param_4;
  return;
}

