/* FUN_2c5fe21c @ 0x2c5fe21c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fe21c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x80,_LAB_2c5fe2d8,_LAB_2c5fe2d4,_LAB_2c5fe2ec,param_2);
  }
  uVar2 = (uint)*_LAB_2c5fe2c4;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x85,_LAB_2c5fe2d8,_LAB_2c5fe2d4,_LAB_2c5fe2e0);
  }
  uVar1 = _LAB_2c5fe2dc;
  if (uVar2 < 3) {
    uVar1 = *(undefined4 *)(_LAB_2c5fe2c8 + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x96,_LAB_2c5fe2d8,_LAB_2c5fe2d4,_LAB_2c5fe2d0,uVar1,_LAB_2c5fe2cc);
}

