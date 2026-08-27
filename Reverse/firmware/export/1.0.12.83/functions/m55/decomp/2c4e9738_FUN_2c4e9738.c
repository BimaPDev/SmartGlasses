/* FUN_2c4e9738 @ 0x2c4e9738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e9738(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = _LAB_2c4e98bc;
  piVar1 = _LAB_2c4e98b4;
  if (*_LAB_2c4e98b4 != 0) {
    uVar3 = func_0x2c4c2878(0,*_LAB_2c4e98b4 + 4,0x2b8,0);
    *(undefined4 *)*piVar1 = uVar3;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb5,_LAB_2c4e98c0,_LAB_2c4e98c4,uVar2,700);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(1,0xb0,_LAB_2c4e98c0,_LAB_2c4e98c4,_LAB_2c4e98e0);
}

