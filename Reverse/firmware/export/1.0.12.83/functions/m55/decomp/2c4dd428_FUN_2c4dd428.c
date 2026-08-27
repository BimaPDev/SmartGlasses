/* FUN_2c4dd428 @ 0x2c4dd428 */

int * FUN_2c4dd428(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_2c4dd498;
  iVar2 = DAT_2c4dd498 + 0x60;
  *param_1 = DAT_2c4dd498;
  param_1[8] = iVar2;
  param_1[0xc] = iVar1 + 0x6c;
  iVar1 = FUN_2c4de9c0(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_2c4de6ca(param_1,0x6330,0x15,1);
    FUN_2c4e0504(DAT_2c4dd49c,0,0,0,DAT_2c4dd4a8,0x15,DAT_2c4dd4a4,0x1300,DAT_2c4dd4a0,param_1[0xb],
                 param_1[10]);
  }
  iVar1 = DAT_2c4dd4ac;
  iVar2 = DAT_2c4dd4ac + 0x24;
  *param_1 = DAT_2c4dd4ac;
  param_1[8] = iVar2;
  param_1[0xc] = iVar1 + 0x30;
  FUN_2c4dfb24(param_1);
  return param_1;
}

