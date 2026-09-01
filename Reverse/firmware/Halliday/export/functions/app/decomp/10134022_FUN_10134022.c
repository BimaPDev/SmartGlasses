/* FUN_10134022 @ 0x10134022 */

undefined4 FUN_10134022(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined8 uVar7;
  
  psVar4 = (short *)FUN_100c1f10(param_3 + 8,4);
  sVar1 = *(short *)(param_3 + 0xc);
  psVar4[1] = param_2;
  *psVar4 = sVar1 + -4;
  if (*(char *)(param_1 + 0xd) == '\a') {
    if (param_4 == 0) {
      *(undefined4 *)(param_3 + 0x14) = 0;
    }
    else {
      uVar7 = FUN_10115464();
      if (DAT_100ca8d8 == (int)uVar7) {
        uVar2 = 0;
        uVar6 = 0;
      }
      else {
        uVar2 = 0xffffffff;
        uVar6 = 0xffffffff;
      }
      iVar3 = FUN_10113f68(DAT_100ca8dc,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar6);
      if (iVar3 == 0) {
        uVar5 = (DAT_100ca8c8 - DAT_100ca8c4) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100ca8e0 | uVar5,DAT_100ca8d4,DAT_100ca8e4,uVar5,unaff_r4,unaff_r5,unaff_r6
                    );
        FUN_100c1c90(param_3);
        return 0xffffff97;
      }
      if (*(char *)(param_1 + 0xd) != '\a') {
        uVar5 = (DAT_100ca8c8 - DAT_100ca8c4) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100ca8e8 | uVar5,DAT_100ca8d4,DAT_100ca8ec,uVar5,unaff_r4,unaff_r5,unaff_r6
                    );
        FUN_100c1c90(param_3);
        FUN_100c9c00(iVar3);
        goto LAB_100ca7fc;
      }
      *(int *)(iVar3 + 4) = param_4;
      *(undefined4 *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(param_3 + 0x14) = iVar3;
    }
    FUN_10133b08(param_1);
    FUN_100c1c20(param_1 + 0x38,param_3);
    FUN_10115464();
    iVar3 = FUN_1013cd52();
    if (iVar3 < -9) {
      FUN_100a5b78(DAT_100ca8f0 | (DAT_100ca8c8 - DAT_100ca8c4) * 0x20 & 0xff00U,DAT_100ca8d4,
                   DAT_100ca8f4);
    }
    FUN_10115218();
    uVar2 = 0;
  }
  else {
    uVar5 = (DAT_100ca8c8 - DAT_100ca8c4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100ca8cc | uVar5,DAT_100ca8d4,DAT_100ca8d0,uVar5,unaff_r4,unaff_r5,unaff_r6);
    FUN_100c1c90(param_3);
LAB_100ca7fc:
    uVar2 = 0xffffff80;
  }
  return uVar2;
}

