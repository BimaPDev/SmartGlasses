/* FUN_2c5abfac @ 0x2c5abfac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5abfac(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    iVar1 = FUN_2c5abf68();
    func_0x2c5ae434(*(undefined4 *)(iVar1 + 0x180),param_1);
  }
  iVar1 = FUN_2c5abf68();
  *(char *)(iVar1 + 0x1d9) = (char)param_1;
  iVar1 = FUN_2c5abf68();
  FUN_2c643084(_LAB_2c5b449c,_LAB_2c5b448c,_LAB_2c5b448c,_LAB_2c5b4498,_DAT_2c5b4494,_LAB_2c5b4490,
               param_1,*(undefined1 *)(iVar1 + 0x1a9));
  return;
}

