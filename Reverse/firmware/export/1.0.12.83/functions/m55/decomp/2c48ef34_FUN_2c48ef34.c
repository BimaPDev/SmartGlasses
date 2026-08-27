/* FUN_2c48ef34 @ 0x2c48ef34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48ef34(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 < 3) && (-1 < param_2)) {
    iVar2 = *(int *)(_LAB_2c48f060 + param_1 * 4);
    iVar1 = *(int *)(_LAB_2c48f064 + param_1 * 4);
    uVar3 = 0;
    if (0 < iVar2) {
      if (iVar2 < iVar1) {
        uVar3 = (iVar2 * 0xf + (iVar1 >> 1)) / iVar1;
      }
      else {
        uVar3 = 0xf;
      }
    }
    if (iVar2 < param_2) {
      if (param_2 < iVar1) {
        uVar3 = uVar3 + (int)((0xf - uVar3) * (param_2 - iVar2) + (iVar1 - iVar2 >> 1)) /
                        (iVar1 - iVar2);
      }
      else {
        uVar3 = 0xf;
      }
    }
    if (param_1 == 1) {
      FUN_2c4fa6dc(uVar3 & 0xff);
    }
    else {
      if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xac,_LAB_2c48f06c,_LAB_2c48f070,_LAB_2c48f07c,_LAB_2c48f078,param_1);
      }
      FUN_2c4f8760(uVar3 & 0xff);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xaf,_LAB_2c48f06c,_LAB_2c48f070,_LAB_2c48f068,_LAB_2c48f078,param_1,param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x44,_LAB_2c48f06c,_LAB_2c48f070,_LAB_2c48f084,_LAB_2c48f080,param_1,param_2);
}

