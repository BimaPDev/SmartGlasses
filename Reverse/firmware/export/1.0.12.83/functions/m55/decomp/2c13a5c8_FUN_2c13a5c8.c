/* FUN_2c13a5c8 @ 0x2c13a5c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13a5c8(char param_1,int param_2,undefined2 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  int iStack_14;
  
  iStack_14 = *_DAT_2c13a654;
  if (param_2 != 0) {
    FUN_2c135988(4,0x10e,_DAT_2c13a664,_DAT_2c13a660,_DAT_2c13a65c,_DAT_2c13a658,param_1,param_3);
  }
  uStack_20 = *_DAT_2c13a668;
  uStack_1c = _DAT_2c13a668[1];
  uStack_18 = (undefined2)_DAT_2c13a668[2];
  if (((param_1 == '\x02') &&
      (iVar2 = func_0x2c142510(param_2,&uStack_20,10), pcVar1 = _DAT_2c13a66c, iVar2 == 0)) &&
     (*_DAT_2c13a66c == '\0')) {
    FUN_2c135988(4,0x114,_DAT_2c13a664,_DAT_2c13a660,_DAT_2c13a670);
    *pcVar1 = '\x01';
  }
  if (*_DAT_2c13a654 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

