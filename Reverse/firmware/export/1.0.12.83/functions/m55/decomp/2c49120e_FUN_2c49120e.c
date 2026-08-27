/* FUN_2c49120e @ 0x2c49120e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49120e(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xff,_LAB_2c4912dc,_LAB_2c4912e0,_LAB_2c491308,_LAB_2c491304,param_2);
  }
  uVar3 = (uint)*(byte *)(_LAB_2c4912c4 + param_4);
  iVar1 = func_0x2c4fac9c(uVar3);
  if (iVar1 != 0) {
    uVar2 = _LAB_2c4912c8;
    if (param_1 != 1) {
      uVar2 = _LAB_2c4912cc;
    }
    if (uVar3 < 5) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x14b,_LAB_2c4912dc,_LAB_2c4912e0,_LAB_2c4912d4,_LAB_2c4912d8,uVar2,
            *(undefined4 *)(_LAB_2c4912d0 + uVar3 * 4));
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,_LAB_2c4912dc,_LAB_2c4912e0,_LAB_2c4912fc,_LAB_2c4912f8);
  }
  return 0xffffffff;
}

