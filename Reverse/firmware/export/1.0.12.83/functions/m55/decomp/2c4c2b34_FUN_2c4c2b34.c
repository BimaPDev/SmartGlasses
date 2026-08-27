/* FUN_2c4c2b34 @ 0x2c4c2b34 */

void FUN_2c4c2b34(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1 + 5;
  puVar2 = param_4;
  if ((puVar1 <= param_2) && (puVar2 = (uint *)param_1[4], param_2 <= puVar2)) {
    if (puVar2 <= param_1) {
      return;
    }
    puVar3 = (uint *)(*param_2 & 0xfffffffc);
    if (puVar3 != (uint *)0x0) {
      if ((int)puVar3 <= (int)param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c2b84,puVar3,param_2,puVar2,param_4);
      }
      if ((puVar1 <= puVar3) && (puVar3 <= puVar2)) {
        if (-1 < (int)(*param_2 << 0x1f)) {
          return;
        }
        if (((uint *)param_2[1] <= puVar2) && (puVar1 <= (uint *)param_2[1])) {
          return;
        }
        param_2 = param_2 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4c2b80,param_2,puVar1,puVar2,param_4);
}

