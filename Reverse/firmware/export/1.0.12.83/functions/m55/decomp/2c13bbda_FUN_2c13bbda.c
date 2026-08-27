/* FUN_2c13bbda @ 0x2c13bbda */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13bbda(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_DAT_2c13bc3c;
  uStack_1c = _DAT_2c13bc38;
  _uStack_20 = CONCAT22((short)((uint)param_4 >> 0x10),param_3);
  uStack_18 = param_4;
  iVar1 = FUN_2c137748(1,&uStack_20);
  if (iVar1 == 0) {
    func_0x2c13ad14(3,_DAT_2c13bc4c);
  }
  else {
    FUN_2c135988(4,0x54e,_DAT_2c13bc48,_DAT_2c13bc44,_DAT_2c13bc40,1);
  }
  if (*_DAT_2c13bc3c == iStack_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

