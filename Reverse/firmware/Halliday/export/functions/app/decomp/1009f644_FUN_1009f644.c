/* FUN_1009f644 @ 0x1009f644 */

int FUN_1009f644(int param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_2 + 4);
  piVar1 = (int *)thunk_FUN_1009f30c(8,DAT_1009f7bc);
  pcVar2 = (char *)thunk_FUN_1009f30c(0x108,DAT_1009f7bc);
  if (piVar1 == (int *)0x0) {
    iVar3 = -2;
  }
  else {
    if ((pcVar2 == (char *)0x0) || (*(short *)(param_1 + 0x196) == 0)) {
      iVar3 = -2;
    }
    else {
      iVar3 = FUN_1006bf70(piVar1,*(undefined4 *)(param_1 + 0x19c),
                           **(undefined4 **)(param_1 + (uint)*(byte *)(param_1 + 0x195) * 4),0);
      uVar8 = (DAT_1009f7c0 - DAT_1009f7c4) * 0x20 & 0xff00;
      if (iVar3 == 0) {
        iVar7 = *piVar1;
        uVar6 = 0;
        do {
          FUN_1011ea48(pcVar2,0,0x108);
          iVar3 = FUN_1006c070(piVar1,pcVar2);
          if ((iVar3 != 0) || (pcVar2[1] == '\0')) {
            uVar8 = uVar8 | 0x1820011;
            uVar5 = DAT_1009f7c8;
            goto LAB_1009f6e4;
          }
          if ((*(code **)(param_1 + 0x1a0) != (code *)0x0) &&
             ((*pcVar2 == '\0' && (iVar4 = (**(code **)(param_1 + 0x1a0))(pcVar2 + 1,0), iVar4 != 0)
              ))) {
            uVar6 = uVar6 + 1;
          }
        } while (uVar6 < *(ushort *)(param_1 + 0x196));
        FUN_100a5b78(uVar8 | 0x18a0031,DAT_1009f7cc,DAT_1009f7d0);
        FUN_1006c184(piVar1);
        FUN_1011ea10(pcVar2 + 1);
        FUN_1011ea48(*(undefined4 *)(iVar9 + 0x34),0,0x202);
        FUN_10118a1c(*(undefined4 *)(iVar9 + 0x34),0x202,DAT_1009f7d4,DAT_1009f7dc,
                     *(undefined4 *)(param_1 + 0x19c),DAT_1009f7d8,
                     **(undefined4 **)(param_1 + (uint)*(byte *)(param_1 + 0x195) * 4),
                     *(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(pcVar2 + 0x104),pcVar2 + 1);
        *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar9 + 0x34);
        *(undefined4 **)(param_2 + 8) = (undefined4 *)(iVar9 + 0x38);
      }
      else {
        uVar8 = uVar8 | DAT_1009f7e0;
        uVar5 = DAT_1009f7e4;
LAB_1009f6e4:
        FUN_100a5b78(uVar8,DAT_1009f7cc,uVar5,iVar3);
        FUN_1006c184(piVar1);
      }
    }
    FUN_1012d1f4(piVar1);
  }
  if (pcVar2 != (char *)0x0) {
    FUN_1012d1f4(pcVar2);
  }
  return iVar3;
}

