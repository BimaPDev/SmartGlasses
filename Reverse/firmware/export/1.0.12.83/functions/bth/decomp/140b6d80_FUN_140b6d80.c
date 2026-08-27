/* FUN_140b6d80 @ 0x140b6d80 */

int FUN_140b6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_14 = *DAT_140b6e44;
  iVar1 = FUN_140b6fe0(0,param_2,param_3,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
    *(undefined4 *)(iVar1 + 0x2c8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2d0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2d4) = 0;
    *(undefined2 *)(iVar1 + 0x2cc) = 0xffff;
    *(undefined2 *)(iVar1 + 0x318) = 0xffff;
    *(undefined2 *)(iVar1 + 0x4ac) = 0x101;
    *(int *)(iVar1 + 0x2c0) = iVar1 + 0x1ba;
    *(undefined2 *)(iVar1 + 0x2e0) = 0xffff;
    *(undefined1 *)(iVar1 + 0x2f0) = 0xff;
    *(int *)(iVar1 + 700) = iVar1 + 0x1b2;
    *(undefined4 *)(iVar1 + 0x2b0) = 0;
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    *(undefined4 *)(iVar1 + 0x2d8) = 0;
    *(undefined4 *)(iVar1 + 0x2e4) = 0;
    *(undefined4 *)(iVar1 + 0x2ec) = 0;
    *(undefined4 *)(iVar1 + 0x2b8) = 0;
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
    FUN_140e5218(iVar1 + 0x1d8);
    iVar2 = FUN_140b706c(0);
    *(int *)(iVar1 + 0x360) = iVar2;
    if (iVar2 != 0) goto LAB_140b6e02;
    *(undefined1 *)(iVar1 + 0x128) = 7;
    *(undefined4 *)(iVar1 + 4) = 0;
    local_18 = iVar1;
    FUN_140b6800(iVar1);
    if (*(int *)(local_18 + 0x360) != 0) {
      FUN_140b707c(local_18 + 0x360);
    }
    FUN_140b6fec(&local_18);
  }
  iVar1 = 0;
LAB_140b6e02:
  if (*DAT_140b6e44 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

