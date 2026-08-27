/* FUN_2c5ddff8 @ 0x2c5ddff8 */

int FUN_2c5ddff8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int local_44;
  undefined4 uStack_40;
  undefined4 *local_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_2c5de11c;
  local_44 = 0;
  uStack_40 = 0;
  local_3c = (undefined4 *)0x0;
  uStack_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = (int *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_2c5ddc98(&local_44,
               (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28) >> 2) +
               ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x20) >> 2) + -1) * 0x80 +
               (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) >> 2));
  puVar2 = local_3c;
  puVar8 = *(undefined4 **)(param_1 + 0x14);
  puVar10 = *(undefined4 **)(param_1 + 0x24);
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x20);
  puVar5 = local_34;
  puVar7 = local_3c;
  piVar12 = local_30;
  while (puVar9 = puVar8, puVar1 = local_2c, puVar10 != puVar8) {
    while( true ) {
      puVar8 = puVar9 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = *puVar9;
      if (puVar3 == puVar8) {
        puVar8 = *(undefined4 **)(iVar11 + 4);
        iVar11 = iVar11 + 4;
        puVar3 = puVar8 + 0x80;
      }
      puVar7 = puVar6;
      if (puVar5 != puVar6) break;
      piVar12 = piVar12 + 1;
      puVar7 = (undefined4 *)*piVar12;
      puVar5 = puVar7 + 0x80;
      puVar9 = puVar8;
      if (puVar10 == puVar8) goto joined_r0x2c5de07a;
    }
  }
joined_r0x2c5de07a:
  do {
    local_2c = puVar1;
    if (puVar1 == puVar2) {
      iVar11 = 0;
LAB_2c5de0d6:
      if (local_44 == 0) {
        if (*DAT_2c5de11c != local_1c) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return iVar11;
      }
      if ((int *)(local_20 + 4) <= local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,*local_30);
    }
    if (local_28 == puVar1) {
      iVar11 = *(int *)(*(int *)(local_20 + -4) + 0x1fc);
      iVar4 = FUN_2c66b624(param_2,*(undefined4 *)(iVar11 + 0xc));
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,puVar1);
      }
      goto LAB_2c5de0d6;
    }
    iVar11 = puVar1[-1];
    iVar4 = FUN_2c66b624(param_2,*(undefined4 *)(iVar11 + 0xc));
    if (iVar4 == 0) goto LAB_2c5de0d6;
    puVar1 = puVar1 + -1;
  } while( true );
}

