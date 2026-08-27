/* FUN_2c4c2b88 @ 0x2c4c2b88 */

uint * FUN_2c4c2b88(int param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_3 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c2c48);
  }
  uVar2 = *param_3;
  uVar1 = uVar2 & 0xfffffffc;
  if (uVar1 == 0) {
    return param_2;
  }
  if (param_2 == (uint *)(param_1 + 0x14)) {
    return param_3;
  }
  puVar4 = (uint *)(*param_2 & 0xfffffffc);
  if (puVar4 != (uint *)0x0) {
    if ((int)puVar4 <= (int)param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c2c4c,puVar4,param_2,uVar2,param_4);
    }
    if (param_3 == puVar4) {
      if ((int)(*param_2 << 0x1f) < 0) {
        puVar4 = param_2;
        if ((int)(uVar2 << 0x1f) < 0) {
          *param_2 = uVar1 | 1;
          puVar4 = (uint *)param_3[1];
          if ((puVar4 != (uint *)0x0) && ((puVar4 <= param_2 || (puVar4 <= param_3)))) {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(DAT_2c4c2c44,param_3 + 1,uVar2 << 0x1f,puVar4,param_4);
          }
          param_2[1] = (uint)puVar4;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
          return param_2;
        }
      }
      else {
        puVar4 = param_3;
        if (-1 < (int)(uVar2 << 0x1f)) {
          *param_2 = uVar1;
          return param_2;
        }
      }
      uVar1 = FUN_2c4c29e8(param_1,puVar4);
      if (puVar4[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c2c44,puVar4 + 1);
      }
      *(uint *)(uVar1 + 4) = puVar4[1];
      iVar3 = 0;
      if ((*puVar4 & 0xfffffffc) != 0) {
        iVar3 = ((*puVar4 & 0xfffffffc) - (int)puVar4) + -4;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar3;
      uVar1 = *param_3;
      *param_2 = uVar1 & 0xfffffffc;
      if ((uVar1 & 0xfffffffc) != 0) {
        return param_2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4c2c44,param_2);
}

