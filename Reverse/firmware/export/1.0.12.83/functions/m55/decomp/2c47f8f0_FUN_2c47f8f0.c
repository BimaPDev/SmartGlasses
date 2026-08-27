/* FUN_2c47f8f0 @ 0x2c47f8f0 */

void FUN_2c47f8f0(uint *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c47fb40;
  puVar12 = param_1 + -1;
  puVar13 = (uint *)(param_2 + -4);
  do {
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    *puVar12 = *puVar13;
  } while (puVar13 != (uint *)(param_2 + 0x1c));
  local_38 = *(undefined4 *)(param_2 + 0x2c);
  local_34 = *(undefined4 *)(param_2 + 0x30);
  local_44 = 0;
  local_30 = *(undefined4 *)(param_2 + 0x34);
  local_2c = *(undefined4 *)(param_2 + 0x38);
  local_28 = *(undefined4 *)(param_2 + 0x3c);
  local_40 = 0;
  local_3c = 0;
  iVar2 = FUN_2c47f410(&local_44,&local_44,&local_44,8);
  iVar3 = FUN_2c47f410(param_1,param_1,&local_44,8);
  local_38 = *(undefined4 *)(param_2 + 0x30);
  local_34 = *(undefined4 *)(param_2 + 0x34);
  local_28 = 0;
  local_30 = *(undefined4 *)(param_2 + 0x38);
  local_2c = *(undefined4 *)(param_2 + 0x3c);
  iVar4 = FUN_2c47f410(&local_44,&local_44,&local_44,8);
  iVar5 = FUN_2c47f410(param_1,param_1,&local_44,8);
  local_44 = *(undefined4 *)(param_2 + 0x20);
  local_40 = *(undefined4 *)(param_2 + 0x24);
  local_38 = 0;
  local_3c = *(undefined4 *)(param_2 + 0x28);
  local_2c = *(undefined4 *)(param_2 + 0x38);
  local_28 = *(undefined4 *)(param_2 + 0x3c);
  local_34 = 0;
  local_30 = 0;
  iVar6 = FUN_2c47f410(param_1,param_1,&local_44,8);
  local_38 = *(undefined4 *)(param_2 + 0x34);
  local_44 = *(undefined4 *)(param_2 + 0x24);
  local_40 = *(undefined4 *)(param_2 + 0x28);
  local_3c = *(undefined4 *)(param_2 + 0x2c);
  local_34 = *(undefined4 *)(param_2 + 0x38);
  local_30 = *(undefined4 *)(param_2 + 0x3c);
  local_28 = *(undefined4 *)(param_2 + 0x20);
  local_2c = local_38;
  iVar7 = FUN_2c47f410(param_1,param_1,&local_44,8);
  local_44 = *(undefined4 *)(param_2 + 0x2c);
  local_40 = *(undefined4 *)(param_2 + 0x30);
  local_38 = 0;
  local_3c = *(undefined4 *)(param_2 + 0x34);
  local_2c = *(undefined4 *)(param_2 + 0x20);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  local_34 = 0;
  local_30 = 0;
  iVar8 = FUN_2c47f470(param_1,param_1,&local_44,8);
  local_44 = *(undefined4 *)(param_2 + 0x30);
  local_40 = *(undefined4 *)(param_2 + 0x34);
  local_3c = *(undefined4 *)(param_2 + 0x38);
  local_38 = *(undefined4 *)(param_2 + 0x3c);
  local_2c = *(undefined4 *)(param_2 + 0x24);
  local_28 = *(undefined4 *)(param_2 + 0x2c);
  local_34 = 0;
  local_30 = 0;
  iVar9 = FUN_2c47f470(param_1,param_1,&local_44,8);
  local_44 = *(undefined4 *)(param_2 + 0x34);
  local_40 = *(undefined4 *)(param_2 + 0x38);
  local_2c = 0;
  local_3c = *(undefined4 *)(param_2 + 0x3c);
  local_38 = *(undefined4 *)(param_2 + 0x20);
  local_34 = *(undefined4 *)(param_2 + 0x24);
  local_30 = *(undefined4 *)(param_2 + 0x28);
  local_28 = *(undefined4 *)(param_2 + 0x30);
  iVar10 = FUN_2c47f470(param_1,param_1,&local_44,8);
  local_44 = *(undefined4 *)(param_2 + 0x38);
  local_28 = *(undefined4 *)(param_2 + 0x34);
  local_40 = *(undefined4 *)(param_2 + 0x3c);
  local_38 = *(undefined4 *)(param_2 + 0x24);
  local_3c = 0;
  local_34 = *(undefined4 *)(param_2 + 0x28);
  local_2c = 0;
  local_30 = *(undefined4 *)(param_2 + 0x2c);
  iVar11 = FUN_2c47f470(param_1,param_1,&local_44,8);
  uVar1 = DAT_2c47fb48;
  iVar11 = ((((iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7) - iVar8) - iVar9) - iVar10) - iVar11;
  if (iVar11 < 0) {
    do {
      iVar2 = FUN_2c47f410(param_1,param_1,uVar1,8);
      iVar11 = iVar11 + iVar2;
    } while (iVar11 < 0);
LAB_2c47fb26:
    if (*DAT_2c47fb40 != local_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  do {
    puVar12 = DAT_2c47fb44;
    puVar13 = param_1 + 8;
    if (iVar11 == 0) {
      do {
        puVar13 = puVar13 + -1;
        if (*puVar13 < *puVar12) goto LAB_2c47fb26;
      } while ((*puVar13 <= *puVar12) && (puVar12 = puVar12 + -1, puVar13 != param_1));
    }
    iVar2 = FUN_2c47f470(param_1,param_1,uVar1,8);
    iVar11 = iVar11 - iVar2;
  } while( true );
}

