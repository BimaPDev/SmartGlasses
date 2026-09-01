/* FUN_100ca9b4 @ 0x100ca9b4 */

void FUN_100ca9b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar5;
  undefined4 extraout_r2_04;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar6 = DAT_100caa54;
  if ((*(char *)(param_1 + 2) == '\x02') || (*(short *)(DAT_100caa54 + 0xdc) == 0)) {
    uVar8 = FUN_1013352c(param_1 + 0xb0,0x17);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    bVar1 = (int)uVar8 != 0;
    uVar5 = extraout_r2;
    if (bVar1) {
      FUN_101334d6(DAT_100caa58);
      uVar4 = extraout_r1;
      uVar5 = extraout_r2_00;
    }
    bVar3 = false;
    bVar2 = *DAT_100caa5c;
    iVar6 = DAT_100caa60;
    for (iVar7 = 0; iVar7 < (int)(bVar2 & 0xf); iVar7 = iVar7 + 1) {
      if (((*(int *)(iVar6 + 0xcc) != 0) && (*(char *)(iVar6 + 2) == '\x02')) &&
         (*(char *)(iVar6 + 0xd) == '\a')) {
        uVar8 = FUN_101334a4(iVar6 + 0xb0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar5 = extraout_r2_01;
        if ((int)uVar8 << 8 < 0) {
          uVar8 = FUN_1013348a(iVar6);
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar5 = extraout_r2_02;
          if ((int)uVar8 == 0) {
            FUN_10133554(iVar6 + 0xb0,0x17);
            bVar3 = true;
            uVar4 = extraout_r1_00;
            uVar5 = extraout_r2_03;
          }
        }
      }
      iVar6 = iVar6 + 0xd0;
    }
    if ((!bVar3) || (iVar6 = DAT_100caa58, bVar1)) {
      return;
    }
  }
  else {
    uVar8 = FUN_1013352c(DAT_100caa54 + 0xac,0x18);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      return;
    }
    iVar6 = iVar6 + 0x204;
    uVar5 = extraout_r2_04;
  }
  FUN_101334d6(iVar6,uVar4,uVar5,param_4);
  return;
}

