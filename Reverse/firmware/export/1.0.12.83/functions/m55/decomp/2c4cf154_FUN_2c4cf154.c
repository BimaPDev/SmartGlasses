/* FUN_2c4cf154 @ 0x2c4cf154 */

int FUN_2c4cf154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c4cf218;
  iVar1 = FUN_2c4d100c(0,param_2,param_3,0);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c0) = iVar1 + 0x1ba;
    *(undefined2 *)(iVar1 + 0x2cc) = 0xffff;
    *(int *)(iVar1 + 700) = iVar1 + 0x1b2;
    *(undefined4 *)(iVar1 + 0x2d0) = 0xffffffff;
    *(undefined2 *)(iVar1 + 0x4ac) = 0x101;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
    *(undefined4 *)(iVar1 + 0x2c8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2d4) = 0;
    *(undefined4 *)(iVar1 + 0x2d8) = 0;
    *(undefined2 *)(iVar1 + 0x2e0) = 0xffff;
    *(undefined1 *)(iVar1 + 0x2f0) = 0xff;
    *(undefined2 *)(iVar1 + 0x318) = 0xffff;
    *(undefined4 *)(iVar1 + 0x2e4) = 0;
    *(undefined4 *)(iVar1 + 0x2ec) = 0;
    *(undefined4 *)(iVar1 + 0x2b8) = 0;
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
    *(undefined4 *)(iVar1 + 0x2b0) = 0;
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    FUN_2c4d4b3c(iVar1 + 0x1d8);
    iVar2 = FUN_2c4d1098(0);
    *(int *)(iVar1 + 0x360) = iVar2;
    if (iVar2 != 0) goto LAB_2c4cf1d6;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined1 *)(iVar1 + 0x128) = 7;
    local_18 = iVar1;
    FUN_2c4ceba4(iVar1);
    if (*(int *)(local_18 + 0x360) != 0) {
      FUN_2c4d10a8(local_18 + 0x360);
    }
    FUN_2c4d1018(&local_18);
  }
  iVar1 = 0;
LAB_2c4cf1d6:
  if (*DAT_2c4cf218 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

