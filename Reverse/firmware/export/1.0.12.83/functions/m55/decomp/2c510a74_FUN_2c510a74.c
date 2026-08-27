/* FUN_2c510a74 @ 0x2c510a74 */

void FUN_2c510a74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_2c510b34;
  iVar2 = FUN_2c510a30();
  if (iVar2 != 0) {
    while (iVar2 = FUN_2c50f11c(param_1 + 0x40,&local_20), iVar2 != 0) {
      FUN_2c50fd0c(param_1 + 0x1dc,local_20);
    }
    iVar2 = FUN_2c62ca10(param_1 + 0x24);
    uVar1 = DAT_2c510b38;
    while (DAT_2c510b38 = uVar1, iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x2c44) = 0;
      *(undefined4 *)(iVar2 + 0x1610) = 0;
      *(undefined4 *)(iVar2 + 0x1608) = 0;
      *(undefined4 *)(iVar2 + 0x160c) = 0;
      *(undefined1 *)(iVar2 + 0x1614) = 1;
      *(undefined4 *)(iVar2 + 0x2c24) = 0;
      *(undefined4 *)(iVar2 + 0x2c1c) = 0;
      *(undefined4 *)(iVar2 + 0x2c20) = 0;
      *(undefined1 *)(iVar2 + 0x2c28) = 1;
      iVar2 = FUN_2c62ca20(param_1 + 0x24);
      uVar1 = DAT_2c510b38;
    }
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(undefined1 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0;
    FUN_2c62e838(param_1,uVar1);
    FUN_2c62e838(param_1,DAT_2c510b3c);
    FUN_2c50f9b8(param_1);
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c510b34 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

