/* FUN_2c4f6498 @ 0x2c4f6498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f6498(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = (uint)(_LAB_2c4f650c - (int)_LAB_2c4f6508) >> 5;
  if (uVar3 != 0) {
    puVar2 = _LAB_2c4f6508;
    do {
      if (*puVar2 == param_1) {
        if (*(int *)(puVar2 + 8) != 0) {
          func_0x2c4f6088(puVar2,param_1,param_2,param_3);
          FUN_2c673c88();
          iVar1 = FUN_2c6471b4(*(undefined4 *)(_LAB_2c4f6510 + 8),*(undefined4 *)(puVar2 + 8));
          FUN_2c673c88();
          if ((iVar1 != 0) && (*(code **)(puVar2 + 10) != (code *)0x0)) {
            (**(code **)(puVar2 + 10))(param_2,param_3);
          }
          return iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4f6520,_LAB_2c4f651c,0,param_1,param_4);
      }
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != _LAB_2c4f6508 + uVar3 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f6518,_LAB_2c4f6514,param_1,param_4,param_4);
}

