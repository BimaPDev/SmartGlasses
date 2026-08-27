/* FUN_2c5528b4 @ 0x2c5528b4 */

bool FUN_2c5528b4(int *param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  local_24 = *DAT_2c5529ec;
  puVar7 = *(undefined1 **)(param_2 + 4);
  uVar5 = *(uint *)(param_2 + 8);
  local_54 = local_4c;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5529d8;
  local_58 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c5529ae;
  }
  else {
    local_54 = (uint *)FUN_2c54f538(&local_58,0,param_3,0);
    local_4c[0] = local_58;
LAB_2c5529ae:
    FUN_2c674668(local_54,puVar7,uVar5);
  }
  *(undefined1 *)((int)local_54 + local_58) = 0;
  local_50 = local_58;
  FUN_2c5392f4(&local_54,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  iVar6 = *param_1;
  puVar7 = *(undefined1 **)(iVar6 + 4);
  uVar5 = *(uint *)(iVar6 + 8);
  local_3c = local_34;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c5529d8:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5529f0);
  }
  local_58 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar7);
      goto LAB_2c552928;
    }
    if (uVar5 == 0) goto LAB_2c552928;
  }
  else {
    local_3c = (uint *)FUN_2c54f538(&local_58,0);
    local_34[0] = local_58;
  }
  FUN_2c674668(local_3c,puVar7,uVar5);
LAB_2c552928:
  *(undefined1 *)((int)local_3c + local_58) = 0;
  local_38 = local_58;
  FUN_2c5392f4(&local_3c,*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20));
  uVar3 = local_38;
  puVar2 = local_3c;
  uVar5 = local_50;
  puVar1 = local_54;
  uVar4 = local_50;
  if (local_38 <= local_50) {
    uVar4 = local_38;
  }
  if ((uVar4 == 0) || (iVar6 = FUN_2c66960c(local_54,local_3c), iVar6 == 0)) {
    iVar6 = uVar5 - uVar3;
  }
  if (puVar2 != local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  if (puVar1 != local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  if (*DAT_2c5529ec != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar6 == 0;
}

