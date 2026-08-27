/* FUN_2c5a8a08 @ 0x2c5a8a08 */

void FUN_2c5a8a08(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  uint local_3c [4];
  int local_2c;
  
  uVar1 = DAT_2c5a8b24;
  local_2c = *DAT_2c5a8b20;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_2c5a8874(param_1 + 0xc,0,*(undefined4 *)(param_1 + 0x10),uVar1,0);
  uVar8 = DAT_2c5a8b30;
  uVar1 = DAT_2c5a8b24;
  iVar6 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 != iVar6) {
    do {
      local_4c = uVar8;
      local_48 = *(undefined4 *)(iVar6 + 4);
      puVar3 = *(undefined1 **)(iVar6 + 8);
      uVar4 = *(uint *)(iVar6 + 0xc);
      local_44 = local_3c;
      if ((puVar3 + uVar4 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c5a8b2c);
      }
      local_50 = uVar4;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,*puVar3);
        }
        else if (uVar4 != 0) goto LAB_2c5a8ab0;
      }
      else {
        local_44 = (uint *)FUN_2c5a83b0(&local_50,0);
        local_3c[0] = local_50;
LAB_2c5a8ab0:
        FUN_2c674668(local_44,puVar3,uVar4);
      }
      *(undefined1 *)((int)local_44 + local_50) = 0;
      local_48 = 0;
      local_40 = local_50;
      FUN_2c5a8874(&local_44,0,local_50,uVar1,0);
      pcVar2 = DAT_2c5a8b28;
      local_4c = uVar8;
      if (local_44 != local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar6 = iVar6 + 0x20;
    } while (iVar9 != iVar6);
    iVar6 = *(int *)(param_1 + 0x24);
    iVar9 = *(int *)(param_1 + 0x28);
    if (iVar6 != iVar9) {
      iVar5 = iVar6 + 0x10;
      iVar7 = iVar6;
      do {
        if ((code *)**(undefined4 **)(iVar5 + -0x10) == pcVar2) {
          *(undefined4 *)(iVar5 + -0x10) = uVar8;
          if (iVar5 != *(int *)(iVar7 + 8)) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
        }
        else {
          (*(code *)**(undefined4 **)(iVar5 + -0x10))(iVar7);
        }
        iVar7 = iVar7 + 0x20;
        iVar5 = iVar5 + 0x20;
      } while (iVar9 != iVar7);
      *(int *)(param_1 + 0x28) = iVar6;
    }
  }
  if (*DAT_2c5a8b20 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

