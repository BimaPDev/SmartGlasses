/* FUN_2c4f5c80 @ 0x2c4f5c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f5c80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar4 = (uint)(_LAB_2c4f5ce4 - (int)_LAB_2c4f5ce0) >> 5;
  uVar2 = param_4;
  if (uVar4 != 0) {
    puVar3 = _LAB_2c4f5ce0;
    do {
      if (*puVar3 == param_1) {
        if (*(int *)(puVar3 + 8) == 0) {
          *_LAB_2c4f5ce8 = *_LAB_2c4f5ce8 + 1;
          iVar1 = FUN_2c4f5af4(puVar3,param_1,param_2);
          if (iVar1 == 0) {
            *_LAB_2c4f5cec = *_LAB_2c4f5cec + 1;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4f5cfc,uRam2c4f5cf8,param_1,*(int *)(puVar3 + 8),param_4);
      }
      puVar3 = puVar3 + 0x10;
      uVar2 = param_3;
    } while (puVar3 != _LAB_2c4f5ce0 + uVar4 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f5cf4,_LAB_2c4f5cf0,param_1,uVar2,param_4);
}

