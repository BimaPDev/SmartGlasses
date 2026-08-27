/* FUN_2c4afd4c @ 0x2c4afd4c */

void FUN_2c4afd4c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_2c4afd7c;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)(DAT_2c4afd7c + (*(int *)(DAT_2c4afd7c + 0x6bc) + 0x1aa) * 4);
    *param_2 = *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x6bc) * 4 + 0x6b4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4afd84,DAT_2c4afd80,param_3,param_4,param_4);
}

