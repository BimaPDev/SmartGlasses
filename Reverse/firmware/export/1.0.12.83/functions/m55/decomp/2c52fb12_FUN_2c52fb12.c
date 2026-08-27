/* FUN_2c52fb12 @ 0x2c52fb12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c52fb12(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = _DAT_2c52fb30;
  *(undefined1 *)(param_1 + 1) = 0x12;
  if (*(code **)(*param_1 + 0x10) != pcVar1) {
    (**(code **)(*param_1 + 0x10))();
  }
  return 0;
}

