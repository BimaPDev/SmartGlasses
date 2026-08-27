/* FUN_140b4e9c @ 0x140b4e9c */

void FUN_140b4e9c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    if ((code *)param_1[4] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_140e53b8(*DAT_140b4ee8);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_140b4c54();
        goto LAB_140b4ede;
      }
    }
    else {
      puVar1 = (undefined4 *)(*(code *)param_1[4])(8);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    *puVar1 = 0;
    puVar1[1] = param_2;
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      *param_1 = puVar1;
      param_1[1] = puVar1;
    }
    else {
      *(undefined4 *)param_1[1] = puVar1;
      param_1[1] = puVar1;
    }
    param_1[2] = param_1[2] + 1;
    return;
  }
LAB_140b4ede:
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4ef0,DAT_140b4eec);
}

