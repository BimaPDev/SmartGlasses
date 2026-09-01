/* FUN_10050a24 @ 0x10050a24 */

void FUN_10050a24(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  undefined8 uVar9;
  
  iVar7 = *DAT_10050c4c;
  iVar3 = param_1;
  iVar2 = FUN_1004f6cc();
  uVar8 = (DAT_10050c54 - DAT_10050c50) * 0x20 & 0xff00;
  FUN_100a5b78(uVar8 | 0xdc0031,DAT_10050c5c,DAT_10050c58,DAT_10050c50,iVar3,param_2,param_3);
  if (*(int *)(iVar2 + 0x40) == 0) {
    uVar6 = 0xfffffff2;
    goto LAB_10050c06;
  }
  uVar6 = extraout_r1;
  if ((param_1 == 0) &&
     (uVar9 = FUN_1011dbde(iVar2 + 0xe4,500), uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20),
     (int)uVar9 != 0)) {
    FUN_100a5b78(uVar8 | 0xe30011,DAT_10050c5c,DAT_10050c60);
    uVar6 = extraout_r1_00;
  }
  unaff_r9 = iVar2 + 0x20;
  iVar3 = FUN_10113cfc(unaff_r9,uVar6,10000,0);
  if (iVar3 != 0) {
    FUN_100a5b78(uVar8 | 0xe80011,DAT_10050c5c,DAT_10050c64);
  }
  FUN_10115078(*(undefined4 *)(iVar2 + 0x1c));
  FUN_1011aabe(0);
  if (*(int *)(iVar2 + 0x38) != 0) {
    FUN_100a5b78(uVar8 | 0xee0011,DAT_10050c5c,DAT_10050c68);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    FUN_100a0a70();
    FUN_100a0b00(*(undefined4 *)(iVar2 + 0x40));
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  unaff_r7 = iVar2 + 0x44;
  if (param_1 == 0) {
    unaff_r6 = thunk_FUN_1009f30c(0x96,DAT_10050c6c);
    if (unaff_r6 == 0) goto LAB_10050b36;
    FUN_1011ea40(unaff_r6,unaff_r7,0x96);
    puVar4 = (undefined1 *)FUN_1013d44e(unaff_r6,DAT_10050c70);
    if ((puVar4 != (undefined1 *)0x0) && (iVar3 = FUN_1011ea18(puVar4,DAT_10050c70), iVar3 == 0)) {
      *puVar4 = 0;
      iVar3 = FUN_1006c364(unaff_r7,unaff_r6);
      if (iVar3 != 0) goto LAB_10050c14;
      FUN_100a5b78(uVar8 | 0x1040032,DAT_10050c5c,DAT_10050c74,unaff_r7,unaff_r6);
    }
    while( true ) {
      FUN_1012d1f4(unaff_r6);
LAB_10050b36:
      FUN_100a5b78(DAT_10050c78 | uVar8,DAT_10050c5c,DAT_10050c7c,DAT_10050c5c,0x111,unaff_r7);
      FUN_100a5b78(uVar8 | 0x1120031,DAT_10050c5c,DAT_10050c80,*(undefined1 *)(iVar2 + 0xe1));
      if ((*(byte *)(iVar2 + 0xe1) & 0xfb) == 1) {
        if (*(int *)(iVar2 + 0xdc) != 0) {
          FUN_1011ea48(DAT_10050c84,0,0x100);
          FUN_1013d3f0(DAT_10050c84,*(undefined4 *)(iVar2 + 0xdc),0x113);
          puVar4 = (undefined1 *)FUN_1011ea08(DAT_10050c84,0x2e);
          if ((puVar4 != (undefined1 *)0x0) &&
             (iVar3 = FUN_1011ea18(puVar4,DAT_10050c70), iVar3 == 0)) {
            *puVar4 = 0;
          }
          FUN_100a5b78(uVar8 | 0x11e0031,DAT_10050c5c,DAT_10050c88,DAT_10050c84);
        }
        if ((param_1 == 0) && (*(char *)(iVar2 + 0xe1) == '\x01')) {
          iVar3 = FUN_1011ea10(iVar2 + 0x108);
          if (iVar3 != 0) {
            FUN_1003464c(iVar2 + 0x108,iVar2 + 0x112);
          }
        }
        (**(code **)(DAT_10050c8c + 8))();
      }
      unaff_r6 = 0;
      FUN_100509fc(unaff_r9);
      *(undefined4 *)(iVar2 + 0xdc) = 0;
      FUN_1011ea48(unaff_r7,0,0x96);
      uVar1 = DAT_10050c94;
      uVar6 = DAT_10050c5c;
      uVar5 = DAT_10050c90 | uVar8;
      *(undefined1 *)(iVar2 + 0xe1) = 0;
      FUN_100a5b78(uVar5,uVar6,uVar1);
      uVar6 = 0;
LAB_10050c06:
      if (*DAT_10050c4c == iVar7) break;
      iVar3 = FUN_1013cdc0(uVar6);
LAB_10050c14:
      FUN_100a5b78(uVar8 | 0x1060013,DAT_10050c5c,DAT_10050c98,unaff_r7,unaff_r6,iVar3);
    }
    return;
  }
  FUN_100a5b78(uVar8 | 0x10e0031,DAT_10050c5c,DAT_10050c9c,unaff_r7);
  goto LAB_10050b36;
}

