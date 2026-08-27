/* FUN_2c4b5128 @ 0x2c4b5128 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b5128(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4b5194,_LAB_2c4b5184);
  }
  if (param_2 != 0) {
    if (param_3 != 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4b518c,_LAB_2c4b5184,*param_1,param_3,0xc);
    }
    uVar1 = *(uint *)(param_2 + 4) & 0xff;
    if (uVar1 != 0) {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4b5188,_LAB_2c4b5184,*param_1);
      }
      FUN_2c673c08();
    }
    FUN_2c4b4fd4(param_1,*(undefined4 *)(param_2 + 8));
    return 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4b5190,_LAB_2c4b5184,*param_1);
}

