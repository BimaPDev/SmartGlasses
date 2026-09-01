/* FUN_10105540 @ 0x10105540 */

void FUN_10105540(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)*(short *)(param_1 + 0x12e);
  if (iVar6 == 0x4000) {
    iVar3 = (int)*(short *)(param_1 + 0x12a);
    *(int *)(param_1 + 0x238) = iVar3;
    iVar5 = iVar3;
LAB_1010556c:
    if (iVar3 == 0x4000) {
LAB_101055de:
      *(undefined4 *)(param_1 + 0x240) = DAT_10105644;
      sVar1 = *(short *)(param_1 + 0x126);
      goto joined_r0x101055ec;
    }
  }
  else {
    if (*(short *)(param_1 + 0x130) != 0x4000) {
      iVar3 = (int)*(short *)(param_1 + 0x12a);
      iVar5 = (int)*(short *)(param_1 + 0x130) * (int)*(short *)(param_1 + 300) + iVar6 * iVar3 >>
              0xe;
      *(int *)(param_1 + 0x238) = iVar5;
      goto LAB_1010556c;
    }
    iVar5 = (int)*(short *)(param_1 + 300);
    *(int *)(param_1 + 0x238) = iVar5;
    if (*(short *)(param_1 + 0x12a) == 0x4000) goto LAB_101055de;
  }
  uVar4 = DAT_10105630;
  if (*(short *)(param_1 + 300) != 0x4000) {
    uVar4 = DAT_10105634;
  }
  *(undefined4 *)(param_1 + 0x240) = uVar4;
  sVar1 = *(short *)(param_1 + 0x126);
joined_r0x101055ec:
  if (sVar1 == 0x4000) {
    *(undefined4 *)(param_1 + 0x244) = DAT_10105644;
  }
  else {
    uVar4 = DAT_10105630;
    if (*(short *)(param_1 + 0x128) != 0x4000) {
      uVar4 = DAT_10105638;
    }
    *(undefined4 *)(param_1 + 0x244) = uVar4;
  }
  uVar4 = DAT_10105640;
  *(undefined4 *)(param_1 + 0x24c) = DAT_1010563c;
  *(undefined4 *)(param_1 + 0x250) = uVar4;
  uVar2 = DAT_10105650;
  uVar4 = DAT_1010564c;
  if (iVar5 == 0x4000) {
    if (iVar6 == 0x4000) {
      *(undefined4 *)(param_1 + 0x24c) = DAT_10105654;
      *(undefined4 *)(param_1 + 0x250) = uVar2;
      *(undefined4 *)(param_1 + 0x104) = 0;
      return;
    }
    if (*(short *)(param_1 + 0x130) == 0x4000) {
      *(undefined4 *)(param_1 + 0x24c) = DAT_10105648;
      *(undefined4 *)(param_1 + 0x250) = uVar4;
    }
  }
  else if (iVar5 + 0x3ffU < 0x7ff) {
    *(undefined4 *)(param_1 + 0x238) = 0x4000;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}

