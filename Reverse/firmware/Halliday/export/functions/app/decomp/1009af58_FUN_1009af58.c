/* FUN_1009af58 @ 0x1009af58 */

void FUN_1009af58(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_1 == 0) {
    piVar2 = (int *)FUN_1008bbb4();
    param_1 = *(int *)(*piVar2 + 0x4c);
  }
  pcVar1 = DAT_1009afec;
  if ((DAT_1009afec[2] & 2U) == 0) {
LAB_1009afbe:
    if ((param_3 != 0) && (param_2 != 4)) goto LAB_1009af84;
  }
  else {
    if (param_2 != 0) {
      if (*DAT_1009afec == '\0') {
        param_3 = *(int *)(param_1 + 4);
      }
      goto LAB_1009afbe;
    }
    FUN_1009aa6c();
    param_3 = *(int *)(param_1 + 4);
    if (param_3 != 0) goto LAB_1009af84;
  }
  param_3 = *(int *)(param_1 + 4);
LAB_1009af84:
  iVar6 = 2;
  pcVar5 = DAT_1009afec;
  do {
    if ((param_2 != iVar6) && (iVar3 = FUN_1012a9f8(pcVar5 + 0x24,param_3), iVar3 != 0)) {
      pcVar4 = *(code **)(DAT_1009aff0 + iVar6 * 4);
      if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10117c88(DAT_1009affc,0x148,DAT_1009aff8,DAT_1009aff4,param_4);
      }
      (*pcVar4)(param_1);
      pcVar5[0x24] = -1;
      pcVar5[0x25] = '\x7f';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = '\0';
      pcVar5[0x28] = -1;
      pcVar5[0x29] = '\x7f';
      pcVar5[0x2a] = '\0';
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\0';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = '\0';
      pcVar5[0x30] = '\0';
      pcVar5[0x31] = '\0';
      pcVar5[0x32] = '\0';
      pcVar5[0x33] = '\0';
    }
    iVar6 = iVar6 + -1;
    pcVar5 = pcVar5 + -0x10;
  } while (iVar6 != -1);
  *pcVar1 = (char)param_2;
  return;
}

