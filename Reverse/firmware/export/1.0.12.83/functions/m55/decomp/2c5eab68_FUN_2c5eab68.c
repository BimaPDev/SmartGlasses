/* FUN_2c5eab68 @ 0x2c5eab68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eab68(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _LAB_2c5eabd4;
  if (((*(char *)(_LAB_2c5eabd4 + 0x10) == '\x04') || (param_2 == 4)) ||
     (iVar1 = func_0x2c5e70ac(), iVar1 == 0)) {
    FUN_2c5e70b0(6,1,param_2);
  }
  *(char *)(iVar2 + 0x10) = (char)param_2;
  iVar2 = FUN_2c5e7270(6,1);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x32) != '\x03') {
      *(char *)(iVar2 + 0x32) = (char)param_2;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eabe0,0xd4,_LAB_2c5eabdc,_LAB_2c5eabd8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5eabe0,0xd1,_LAB_2c5eabdc,_LAB_2c5eabe4);
}

