/* FUN_2c521f34 @ 0x2c521f34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c521f34(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar3 = FUN_2c5ef8f4();
    uVar2 = _LAB_2c522068;
    uVar1 = _LAB_2c522064;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52206c,0x1c0,uVar2,uVar1,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c52206c,0x1b7,_LAB_2c522068,_LAB_2c52207c);
}

