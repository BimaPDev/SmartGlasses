/* FUN_2c4f278c @ 0x2c4f278c */

uint FUN_2c4f278c(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *local_40;
  int local_38;
  char *pcStack_34;
  int local_30;
  int local_2c;
  
  local_40 = (char *)*param_3;
  local_2c = *DAT_2c4f2918;
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 0x3ff;
  }
  uVar1 = DAT_2c4f291c;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x20);
  uVar6 = DAT_2c4f2920;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
LAB_2c4f27c4:
  do {
    iVar3 = FUN_2c66c5c0(local_40,uVar1);
    pcVar8 = local_40 + iVar3;
    iVar4 = FUN_2c66b63c(pcVar8,uVar1);
    if (iVar4 == 1) {
      if (local_40[iVar3] != '.') goto LAB_2c4f27ec;
LAB_2c4f28c2:
      local_40 = pcVar8 + iVar4;
      goto LAB_2c4f27c4;
    }
    if (((iVar4 == 2) && (*pcVar8 == '.')) && (pcVar8[1] == '.')) goto LAB_2c4f28c2;
LAB_2c4f27ec:
    local_40 = pcVar8 + iVar4;
    iVar3 = 1;
    pcVar9 = local_40;
    while( true ) {
      iVar5 = FUN_2c66c5c0(pcVar9,uVar1);
      pcVar9 = pcVar9 + iVar5;
      iVar5 = FUN_2c66b63c(pcVar9,uVar1);
      if (iVar5 == 0) break;
      if (((iVar5 == 2) && (*pcVar9 == '.')) && (pcVar9[1] == '.')) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          local_40 = pcVar9 + 2;
          goto LAB_2c4f27c4;
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      pcVar9 = pcVar9 + iVar5;
    }
    if (*pcVar8 == '\0') goto LAB_2c4f28a2;
    *param_3 = pcVar8;
    if (uVar6 >> 0x14 != 2) {
      uVar6 = 0xffffffec;
LAB_2c4f28a2:
      if (*DAT_2c4f2918 != local_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return uVar6;
    }
    uVar6 = (uVar6 & 0xfffff) >> 10;
    if ((uVar6 != 0x3ff) &&
       (uVar6 = FUN_2c4f221c(param_1,param_2,DAT_2c4f2928,DAT_2c4f2924 | uVar6 << 10,0,
                             param_2 + 0x18,8), (int)uVar6 < 0)) goto LAB_2c4f28a2;
    uVar2 = DAT_2c4f292c;
    while( true ) {
      iVar3 = FUN_2c66b60a(pcVar8,0x2f);
      puVar7 = param_4;
      if (iVar3 != 0) {
        puVar7 = (undefined2 *)0x0;
      }
      local_38 = param_1;
      pcStack_34 = pcVar8;
      local_30 = iVar4;
      uVar6 = FUN_2c4f1b28(param_1,param_2,param_2 + 0x18,0x78000000,iVar4,puVar7,uVar2,&local_38);
      if ((int)uVar6 < 0) goto LAB_2c4f28a2;
      if (uVar6 != 0) break;
      if (*(char *)(param_2 + 0x17) == '\0') {
        uVar6 = 0xfffffffe;
        goto LAB_2c4f28a2;
      }
    }
  } while( true );
}

