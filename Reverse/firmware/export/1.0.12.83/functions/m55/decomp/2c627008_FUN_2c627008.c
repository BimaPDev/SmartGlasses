/* FUN_2c627008 @ 0x2c627008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c627008(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lv_mem_alloc(0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c62705c,0xfb,_LAB_2c627058,_LAB_2c627054);
  }
  FUN_2c62c3b0(iVar1,0x34);
  iVar2 = FUN_2c4f4884(*(undefined4 *)(param_1 + 0x30),iVar1,param_2);
  if (iVar2 == 0) {
    return iVar1;
  }
  FUN_2c62bea8(iVar1);
  return 0;
}

