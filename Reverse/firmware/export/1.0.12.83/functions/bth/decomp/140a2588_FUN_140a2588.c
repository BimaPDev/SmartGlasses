/* FUN_140a2588 @ 0x140a2588 */

void FUN_140a2588(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1 + 5;
  if ((puVar1 <= param_2) && (puVar2 = (uint *)param_1[4], param_2 <= puVar2)) {
    if (puVar2 <= param_1) {
      return;
    }
    puVar3 = (uint *)(*param_2 & 0xfffffffc);
    if (puVar3 != (uint *)0x0) {
      if ((int)puVar3 <= (int)param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a25dc,puVar3,param_2,puVar2,param_4);
      }
      if ((puVar1 <= puVar3) && (puVar3 <= puVar2)) {
        if (-1 < (int)(*param_2 << 0x1f)) {
          return;
        }
        if ((puVar1 <= (uint *)param_2[1]) && ((uint *)param_2[1] <= puVar2)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a25d8,param_2 + 1,puVar1,puVar2,param_4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a25d8);
}

