/* FUN_2c5394e0 @ 0x2c5394e0 */

void FUN_2c5394e0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_70;
  uint *local_6c;
  uint local_68;
  uint local_64 [4];
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  int *local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  puVar5 = *(undefined1 **)(param_2 + 0xc);
  local_24 = *DAT_2c5396f8;
  if ((puVar5 == (undefined1 *)0x0) || (*(int *)(param_2 + 8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53970c,0x3ef,DAT_2c539708,DAT_2c539704);
  }
  puVar4 = *(undefined1 **)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x8c);
  local_6c = local_64;
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c5396e0;
  local_70 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      local_64[0] = CONCAT31(local_64[0]._1_3_,*puVar4);
    }
    else if (uVar3 != 0) goto LAB_2c53965a;
  }
  else {
    local_6c = (uint *)FUN_2c53594c(&local_70,0);
    local_64[0] = local_70;
LAB_2c53965a:
    FUN_2c674668(local_6c,puVar4,uVar3);
  }
  *(undefined1 *)((int)local_6c + local_70) = 0;
  local_68 = local_70;
  if (local_70 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c539714);
  }
  FUN_2c5392f4(&local_6c,DAT_2c5396fc,1);
  local_54 = local_4c;
  if (puVar5 == (undefined1 *)0x0) {
LAB_2c5396e0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c539710);
  }
  uVar3 = FUN_2c66c4ec(puVar5);
  local_70 = uVar3;
  if (uVar3 < 0x10) {
    puVar2 = local_4c;
    if (uVar3 == 1) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*puVar5);
    }
    else if (uVar3 != 0) goto LAB_2c539676;
  }
  else {
    local_54 = (uint *)FUN_2c53594c(&local_70,0);
    local_4c[0] = local_70;
    puVar2 = local_54;
LAB_2c539676:
    FUN_2c674668(puVar2,puVar5,uVar3);
    puVar2 = local_54;
  }
  *(undefined1 *)((int)puVar2 + local_70) = 0;
  uVar3 = local_64[0];
  if (local_6c == local_64) {
    uVar3 = 0xf;
  }
  local_50 = local_70;
  if (uVar3 < local_68 + local_70) {
    uVar3 = local_4c[0];
    if (local_54 == local_4c) {
      uVar3 = 0xf;
    }
    if (local_68 + local_70 <= uVar3) {
      piVar1 = (int *)FUN_2c539348(&local_54,0,0,local_6c,local_68);
      if ((int *)*piVar1 == piVar1 + 2) {
        local_34 = piVar1[2];
        iStack_30 = piVar1[3];
        iStack_2c = piVar1[4];
        iStack_28 = piVar1[5];
        local_3c = &local_34;
      }
      else {
        local_34 = piVar1[2];
        local_3c = (int *)*piVar1;
      }
      local_38 = piVar1[1];
      *piVar1 = (int)(piVar1 + 2);
      piVar1[1] = 0;
      *(undefined1 *)(piVar1 + 2) = 0;
      goto LAB_2c5395d8;
    }
  }
  piVar1 = (int *)FUN_2c5392f4(&local_6c);
  if ((int *)*piVar1 == piVar1 + 2) {
    local_34 = piVar1[2];
    iStack_30 = piVar1[3];
    iStack_2c = piVar1[4];
    iStack_28 = piVar1[5];
    local_3c = &local_34;
  }
  else {
    local_34 = piVar1[2];
    local_3c = (int *)*piVar1;
  }
  local_38 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
LAB_2c5395d8:
  FUN_2c5367a8(param_1,local_3c);
  if (local_3c != &local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_54 != local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_6c != local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *DAT_2c539700 = 1;
  if (*DAT_2c5396f8 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

