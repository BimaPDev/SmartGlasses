/* FUN_2c5fe364 @ 0x2c5fe364 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fe364(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*_LAB_2c5fe3c8;
  if (uVar2 - 1 < 2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xac,_LAB_2c5fe3d8,_LAB_2c5fe3d4,_LAB_2c5fe3e4,
          *(undefined4 *)(_LAB_2c5fe3e0 + uVar2 * 4));
  }
  uVar1 = _LAB_2c5fe3dc;
  if (uVar2 < 3) {
    uVar1 = _LAB_2c5fe3cc;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xb3,_LAB_2c5fe3d8,_LAB_2c5fe3d4,_LAB_2c5fe3d0,uVar1,_LAB_2c5fe3cc);
}

