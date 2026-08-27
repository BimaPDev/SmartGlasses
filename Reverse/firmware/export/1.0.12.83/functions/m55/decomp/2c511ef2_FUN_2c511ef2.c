/* FUN_2c511ef2 @ 0x2c511ef2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c511ef2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  *(short *)(param_1 + 1) = (short)param_4;
  param_1[4] = param_4;
  param_1[5] = param_4;
  iVar1 = FUN_2c5fd09c();
  param_1[2] = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c511f88,0x54,_LAB_2c511f84,_LAB_2c511f80,_LAB_2c511f8c);
  }
  iVar1 = FUN_2c5fd0c0(iVar1,_LAB_2c511f74,0,0,param_1,_LAB_2c511f70,0x11);
  *(char *)(param_1 + 3) = (char)iVar1;
  if (iVar1 != -1) {
    func_0x2c5fd510(param_1[2],iVar1,2);
    func_0x2c52f594(param_1 + 6,_LAB_2c511f78);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c511f88,0x57,_LAB_2c511f84,_LAB_2c511f80,_LAB_2c511f7c);
}

