/* FUN_2c4dfbbc @ 0x2c4dfbbc */

int * FUN_2c4dfbbc(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4de5f8();
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = DAT_2c4dfc04;
  *param_1 = DAT_2c4dfc04;
  param_1[8] = iVar2 + 0x20;
  FUN_2c4df4e6(param_1 + 4,0x20);
  iVar2 = 0x40;
  piVar1 = DAT_2c4dfc08;
  do {
    if (*piVar1 == 0) {
      *piVar1 = (int)param_1;
      break;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  *DAT_2c4dfc0c = *DAT_2c4dfc0c + 1;
  iVar2 = DAT_2c4dfc10;
  param_1[10] = DAT_2c4dfc10;
  param_1[0xb] = iVar2;
  return param_1;
}

