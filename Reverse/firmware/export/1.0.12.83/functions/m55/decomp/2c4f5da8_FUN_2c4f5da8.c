/* FUN_2c4f5da8 @ 0x2c4f5da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f5da8(undefined2 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  undefined2 uStack_410;
  undefined1 auStack_40e [1026];
  int iStack_c;
  
  iStack_c = *_LAB_2c4f5e28;
  if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f5e3c,param_3,0x400,0);
  }
  uStack_410 = param_1;
  FUN_2c674668(auStack_40e);
  uVar1 = (uint)(_LAB_2c4f5e30 - (int)_LAB_2c4f5e2c) >> 5;
  if (uVar1 != 0) {
    psVar2 = _LAB_2c4f5e2c;
    do {
      if (*psVar2 == 1) {
        (**(code **)(psVar2 + 4))(&uStack_410,param_3 + 2 & 0xffff);
        if (*_LAB_2c4f5e28 == iStack_c) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      psVar2 = psVar2 + 0x10;
    } while (psVar2 != _LAB_2c4f5e2c + uVar1 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f5e38,_LAB_2c4f5e34,1);
}

