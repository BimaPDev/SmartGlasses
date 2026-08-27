/* FUN_2c49130e @ 0x2c49130e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49130e(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c491418);
  }
  uVar1 = param_2 - 1U & 0xff;
  if (uVar1 < 6) {
    uVar1 = (uint)*(byte *)(_LAB_2c4913dc + uVar1);
    uVar2 = _LAB_2c4913e0;
    if (param_1 != 1) {
      uVar2 = _LAB_2c4913e4;
    }
    if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x15f,_LAB_2c4913f4,_LAB_2c4913f8,_LAB_2c4913ec,_LAB_2c4913f0,uVar2,
            *(undefined4 *)(_LAB_2c4913e8 + uVar1 * 4));
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,_LAB_2c4913f4,_LAB_2c4913f8,_LAB_2c491410,_LAB_2c49140c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xff,_LAB_2c4913f4,_LAB_2c4913f8,_LAB_2c491408,_LAB_2c491404,param_2);
}

