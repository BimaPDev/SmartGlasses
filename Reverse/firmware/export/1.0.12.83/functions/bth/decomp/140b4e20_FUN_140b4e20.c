/* FUN_140b4e20 @ 0x140b4e20 */

undefined4 FUN_140b4e20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140b4e98,DAT_140b4e94);
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar1 = (undefined4 *)FUN_140e53b8(*DAT_140b4e84);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_140b4c54();
      goto LAB_140b4e66;
    }
  }
  else {
    puVar1 = (undefined4 *)(*(code *)param_1[4])(8);
    if (puVar1 == (undefined4 *)0x0) {
LAB_140b4e66:
      FUN_1402a6e8(4,0xac,DAT_140b4e90,DAT_140b4e8c,DAT_140b4e88);
      return 0;
    }
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  *param_1 = puVar1;
  if (param_1[1] == 0) {
    param_1[1] = puVar1;
  }
  param_1[2] = param_1[2] + 1;
  return 1;
}

