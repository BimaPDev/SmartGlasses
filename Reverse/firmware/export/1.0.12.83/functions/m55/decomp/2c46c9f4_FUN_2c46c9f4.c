/* FUN_2c46c9f4 @ 0x2c46c9f4 */

char * FUN_2c46c9f4(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  int local_14;
  
  local_14 = *DAT_2c46cab4;
  local_3c = *DAT_2c46cab8;
  uStack_38 = DAT_2c46cab8[1];
  uStack_34 = DAT_2c46cab8[2];
  uStack_30 = DAT_2c46cab8[3];
  local_2c = DAT_2c46cab8[4];
  uStack_28 = DAT_2c46cab8[5];
  uStack_24 = DAT_2c46cab8[6];
  uStack_20 = DAT_2c46cab8[7];
  uStack_1c = DAT_2c46cab8[8];
  local_18 = (char)DAT_2c46cab8[9];
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    param_1 = -param_1;
    iVar2 = 1;
    *param_2 = '-';
  }
  else {
    iVar2 = 0;
  }
  pcVar6 = param_2 + iVar2 + -1;
  do {
    iVar3 = iVar2;
    bVar7 = param_3 <= param_1;
    pcVar6 = pcVar6 + 1;
    *pcVar6 = *(char *)((int)&local_3c + (param_1 - param_3 * (param_1 / param_3)));
    param_1 = param_1 / param_3;
    iVar2 = iVar3 + 1;
  } while (bVar7);
  param_2[iVar3 + 1] = '\0';
  if ((int)(uint)(*param_2 == '-') <= iVar3 >> 1) {
    pcVar6 = param_2 + iVar3 + 1;
    pcVar4 = param_2 + (*param_2 == '-');
    do {
      pcVar6 = pcVar6 + -1;
      cVar1 = *pcVar4;
      pcVar5 = pcVar4 + 1;
      *pcVar4 = *pcVar6;
      *pcVar6 = cVar1;
      pcVar4 = pcVar5;
    } while (pcVar5 != param_2 + (iVar3 >> 1) + 1);
  }
  if (*DAT_2c46cab4 == local_14) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

