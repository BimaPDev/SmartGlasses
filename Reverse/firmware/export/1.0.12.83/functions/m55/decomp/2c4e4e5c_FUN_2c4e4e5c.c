/* FUN_2c4e4e5c @ 0x2c4e4e5c */

undefined4 * FUN_2c4e4e5c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_2c4e4e8c;
  *param_1 = DAT_2c4e4e88;
  iVar2 = 8;
  do {
    if ((undefined4 *)*puVar1 == param_1) {
      *puVar1 = 0;
      break;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  FUN_2c4e4dc0(param_1);
  return param_1;
}

