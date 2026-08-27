/* FUN_140b4ca8 @ 0x140b4ca8 */

void FUN_140b4ca8(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != (code *)0x0) {
    iVar1 = (*param_2)(0x18);
    if (iVar1 != 0) {
      *(code **)(iVar1 + 0x10) = param_2;
      *(undefined4 *)(iVar1 + 0x14) = param_3;
      *(undefined4 *)(iVar1 + 0xc) = param_1;
    }
    return;
  }
  iVar1 = FUN_140e53b8(*DAT_140b4cd8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4ce0,DAT_140b4cdc);
}

