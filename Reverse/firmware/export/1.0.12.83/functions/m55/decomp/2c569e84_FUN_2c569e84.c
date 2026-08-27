/* FUN_2c569e84 @ 0x2c569e84 */

void FUN_2c569e84(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint local_60;
  undefined1 *local_5c;
  uint uStack_58;
  undefined1 auStack_54 [16];
  uint *local_44;
  uint local_40;
  uint local_3c [4];
  int local_2c;
  
  piVar2 = DAT_2c56a01c;
  local_2c = *DAT_2c56a020;
  if (*DAT_2c56a01c == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar2 = (int *)FUN_2c47245c(0,0x4c);
  FUN_2c674268(piVar2,0,0x4c);
  piVar7 = piVar2 + 0xf;
  *piVar2 = DAT_2c56a024;
  *(undefined1 *)(piVar2 + 3) = 0;
  piVar2[1] = (int)(piVar2 + 3);
  *(undefined1 *)(piVar2 + 9) = 0;
  piVar2[7] = (int)(piVar2 + 9);
  *(undefined1 *)(piVar2 + 0xf) = 0;
  piVar2[0xd] = (int)piVar7;
  uVar3 = FUN_2c66c4ec(param_2);
  FUN_2c569cf0(piVar2 + 1,0,0,param_2,uVar3);
  uVar3 = FUN_2c66c4ec(param_3);
  FUN_2c569cf0(piVar2 + 7,0,piVar2[8],param_3,uVar3);
  if ((int *)(param_4 + 0x34) != piVar2 + 0xd) {
    piVar6 = (int *)piVar2[0xd];
    uVar5 = *(uint *)(param_4 + 0x38);
    if (piVar7 == piVar6) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = piVar2[0xf];
    }
    if (uVar4 < uVar5) {
      local_60 = uVar5;
      piVar6 = (int *)FUN_2c5694c8(&local_60);
      if (piVar7 != (int *)piVar2[0xd]) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar2[0xd] = (int)piVar6;
      piVar2[0xf] = local_60;
    }
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *(undefined1 *)piVar6 = **(undefined1 **)(param_4 + 0x34);
        piVar6 = (int *)piVar2[0xd];
      }
      else {
        FUN_2c674668(piVar6,*(undefined1 **)(param_4 + 0x34),uVar5);
        piVar6 = (int *)piVar2[0xd];
      }
    }
    piVar2[0xe] = uVar5;
    *(undefined1 *)((int)piVar6 + uVar5) = 0;
  }
  FUN_2c58c9d8(&local_5c,piVar2);
  puVar1 = local_5c;
  local_44 = local_3c;
  if ((local_5c + uStack_58 != (undefined1 *)0x0) && (local_5c == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c56a028);
  }
  local_60 = uStack_58;
  if (uStack_58 < 0x10) {
    if (uStack_58 == 1) {
      local_3c[0] = CONCAT31(local_3c[0]._1_3_,*local_5c);
      goto LAB_2c569f5c;
    }
    if (uStack_58 == 0) goto LAB_2c569f5c;
  }
  else {
    local_44 = (uint *)FUN_2c5694c8(&local_60,0);
    local_3c[0] = local_60;
  }
  FUN_2c674668(local_44,puVar1,uStack_58);
LAB_2c569f5c:
  *(undefined1 *)((int)local_44 + local_60) = 0;
  local_40 = local_60;
  FUN_2c592760(param_1,1,&local_44);
  if (local_44 != local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  if (local_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c56a020 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

