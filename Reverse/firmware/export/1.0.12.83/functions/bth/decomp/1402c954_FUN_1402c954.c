/* FUN_1402c954 @ 0x1402c954 */

void FUN_1402c954(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_1402c98c;
  do {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1402c990,param_1,param_3,puVar1,param_4);
    }
    puVar1 = (undefined4 *)DAT_1402c98c[param_1 * 3];
    param_3 = puVar1[6] << 0x1a;
  } while (param_3 < 0);
  if ((puVar1[0x12] & 2) == 0) {
    *puVar1 = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402c994,param_1,param_3,puVar1,param_4);
}

