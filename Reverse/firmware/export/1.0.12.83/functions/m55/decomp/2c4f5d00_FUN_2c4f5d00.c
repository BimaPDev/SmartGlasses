/* FUN_2c4f5d00 @ 0x2c4f5d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f5d00(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = (uint)(_LAB_2c4f5d88 - (int)_LAB_2c4f5d84) >> 5;
  if (uVar3 != 0) {
    puVar2 = _LAB_2c4f5d84;
    do {
      if (*puVar2 == param_1) {
        if (*(int *)(puVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(_LAB_2c4f5da4,_LAB_2c4f5da0,0,param_1,param_4);
        }
        *_LAB_2c4f5d8c = *_LAB_2c4f5d8c + 1;
        FUN_2c4f5af4(puVar2,param_1,param_2,param_3);
        FUN_2c673c88();
        iVar1 = FUN_2c6471b4(*(undefined4 *)(_LAB_2c4f5d90 + 8),*(undefined4 *)(puVar2 + 8));
        FUN_2c673c88();
        if (iVar1 == 0) {
          *_LAB_2c4f5d94 = *_LAB_2c4f5d94 + 1;
        }
        else if (*(code **)(puVar2 + 10) != (code *)0x0) {
          (**(code **)(puVar2 + 10))(param_2,param_3);
          return iVar1;
        }
        return iVar1;
      }
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != _LAB_2c4f5d84 + uVar3 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f5d9c,_LAB_2c4f5d98,param_1,param_4,param_4);
}

