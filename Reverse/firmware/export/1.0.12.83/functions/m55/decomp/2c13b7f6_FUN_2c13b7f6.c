/* FUN_2c13b7f6 @ 0x2c13b7f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13b7f6(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_DAT_2c13b860;
  uStack_1c = _DAT_2c13b85c;
  _uStack_20 = CONCAT22((short)((uint)param_4 >> 0x10),param_3);
  uStack_18 = param_4;
  iVar1 = FUN_2c137748(1,&uStack_20);
  if (iVar1 == 0) {
    FUN_2c135988(4,0xe5,_DAT_2c13b86c,_DAT_2c13b868,_DAT_2c13b870);
  }
  else {
    FUN_2c135988(4,0xe3,_DAT_2c13b86c,_DAT_2c13b868,_DAT_2c13b864,1);
  }
  if (*_DAT_2c13b860 == iStack_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

