/* FUN_2c5c6d84 @ 0x2c5c6d84 */

void FUN_2c5c6d84(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24 [4];
  uint local_14;
  
  local_14 = *DAT_2c5cd9f0;
  uVar1 = LAB_2c5cd9f4;
  if (*(int *)(param_1 + 0x2e0) == 0) goto LAB_2c5cd998;
  FUN_2c5dcca4(&local_2c,*(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0xc));
  puVar2 = *(undefined4 **)(param_1 + 0x330);
  if (local_2c == local_24) {
    if (local_28 != 0) {
      if (local_28 == 1) {
        *(undefined1 *)puVar2 = (undefined1)local_24[0];
        puVar2 = *(undefined4 **)(param_1 + 0x330);
      }
      else {
        FUN_2c674668(puVar2,local_24);
        puVar2 = *(undefined4 **)(param_1 + 0x330);
      }
    }
    *(int *)(param_1 + 0x334) = local_28;
    *(undefined1 *)((int)puVar2 + local_28) = 0;
    uVar1 = local_24[0];
  }
  else {
    if (puVar2 == (undefined4 *)(param_1 + 0x338)) {
      *(undefined4 **)(param_1 + 0x330) = local_2c;
      *(int *)(param_1 + 0x334) = local_28;
      *(undefined4 *)(param_1 + 0x338) = local_24[0];
    }
    else {
      *(undefined4 **)(param_1 + 0x330) = local_2c;
      uVar1 = *(undefined4 *)(param_1 + 0x338);
      *(int *)(param_1 + 0x334) = local_28;
      *(undefined4 *)(param_1 + 0x338) = local_24[0];
      local_2c = puVar2;
      if (puVar2 != (undefined4 *)0x0) goto LAB_2c5cd986;
    }
    local_2c = local_24;
    uVar1 = local_24[0];
  }
LAB_2c5cd986:
  local_24[0] = uVar1;
  local_28 = 0;
  *(undefined1 *)local_2c = 0;
  if (local_2c != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x330);
  param_2 = local_2c;
LAB_2c5cd998:
  if ((*DAT_2c5cd9f0 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,param_2,*DAT_2c5cd9f0 ^ local_14,0);
  }
  return;
}

