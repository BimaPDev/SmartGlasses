/* FUN_10014cc4 @ 0x10014cc4 */

undefined4 FUN_10014cc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_10014ec4;
  iVar3 = thunk_FUN_1009f30c(8,DAT_10014ec8,param_3,0);
  pcVar4 = (char *)thunk_FUN_1009f30c(0x108,DAT_10014ec8);
  if (iVar3 == 0) {
    if (pcVar4 != (char *)0x0) {
      iVar5 = -0x16;
      goto LAB_10014e86;
    }
  }
  else {
    if ((pcVar4 == (char *)0x0) ||
       (((*(int *)(param_1 + 0x21c) == 0 && (*(int *)(param_1 + 0x220) == 0)) &&
        (*(int *)(param_1 + 0x228) == 0)))) {
LAB_10014d3c:
      iVar5 = -0x16;
    }
    else {
      iVar8 = param_1 + 7;
      local_38 = 0;
      uStack_34 = 0;
      local_30 = 0;
      iVar5 = FUN_1006bb68(&local_38,iVar8,*(int *)(param_1 + 0x21c),
                           *(undefined4 *)(param_1 + 0x220));
      if (iVar5 != 0) {
        FUN_100a5b78(DAT_10014ed4 | (DAT_10014ed0 - DAT_10014ecc) * 0x20 & 0xff00U,DAT_10014edc,
                     DAT_10014ed8);
        goto LAB_10014d3c;
      }
      iVar5 = FUN_1006bd24(&local_38,0,2,0);
      if (iVar5 != 0) {
        iVar8 = DAT_10014ed0 - DAT_10014ecc;
        uVar6 = DAT_10014ee4;
        uVar7 = DAT_10014ee0;
LAB_10014d62:
        FUN_100a5b78(uVar6 | iVar8 * 0x20 & 0xff00U,DAT_10014edc,uVar7,iVar5);
        FUN_1006bc30(&local_38);
        goto LAB_10014d3c;
      }
      iVar5 = FUN_1006bd74(&local_38);
      if (iVar5 == 0) {
        iVar8 = DAT_10014ed0 - DAT_10014ecc;
        iVar5 = 0;
        uVar6 = DAT_10014eec;
        uVar7 = DAT_10014ee8;
        goto LAB_10014d62;
      }
      FUN_1006bc30(&local_38);
      iVar5 = FUN_1006bf70(iVar3,iVar8,*(undefined4 *)(param_1 + 0x21c),
                           *(undefined4 *)(param_1 + 0x220));
      if (iVar5 == 0) {
        iVar5 = FUN_1006c070(iVar3,pcVar4);
        iVar2 = DAT_10014ed0;
        iVar1 = DAT_10014ecc;
        if ((iVar5 != 0) || (pcVar4[1] == '\0')) {
          FUN_100a5b78(DAT_10014ef0 | (DAT_10014ed0 - DAT_10014ecc) * 0x20 & 0xff00U,DAT_10014edc,
                       DAT_10014ef4,iVar5);
          FUN_1006c184(iVar3);
          goto LAB_10014d3c;
        }
        pcVar9 = pcVar4 + 1;
        if (((*pcVar4 == '\0') && (iVar5 = FUN_100145b0(pcVar9,0), iVar5 != 0)) &&
           (*(int *)(pcVar4 + 0x104) == *(int *)(param_1 + 0x228))) {
          iVar5 = 0;
        }
        else {
          FUN_100a5b78((iVar2 - iVar1) * 0x20 & 0xff00U | 0x2280011,DAT_10014edc,DAT_10014ef8);
          iVar5 = -0x16;
        }
        FUN_100a5b78(DAT_10014efc | (iVar2 - iVar1) * 0x20 & 0xff00U,DAT_10014edc,DAT_10014f00,
                     pcVar9);
        FUN_1011ea48(param_1 + 0x12,0,0x201);
        FUN_10118a1c(param_1 + 0x12,0x201,DAT_10014f04,DAT_10014f0c,iVar8,DAT_10014f08,
                     *(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220),
                     *(undefined4 *)(param_1 + 0x228),pcVar9);
        FUN_1006c184(iVar3);
      }
    }
    FUN_1012d1f4(iVar3);
    if (pcVar4 != (char *)0x0) {
LAB_10014e86:
      FUN_1012d1f4(pcVar4);
    }
    uVar7 = 0;
    if (iVar5 == 0) goto LAB_10014eac;
  }
  FUN_1011ea48(param_1 + 0x12,0,0x201);
  FUN_1011ea48(param_1 + 0x214,0,0x1c);
  uVar7 = 0xffffffea;
LAB_10014eac:
  if (*DAT_10014ec4 != local_2c) {
    FUN_1013cdc0();
  }
  return uVar7;
}

