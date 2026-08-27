/* FUN_2c4dfb24 @ 0x2c4dfb24 */

int * FUN_2c4dfb24(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_2c4dfb8c;
  *param_1 = DAT_2c4dfb8c;
  param_1[8] = iVar2 + 0x20;
  FUN_2c4e0504(DAT_2c4dfb90,7,0,0,DAT_2c4dfb9c,0x18,DAT_2c4dfb98,0x1300,DAT_2c4dfb94,param_1[10],
               param_1[0xb],param_1);
  iVar2 = 0x40;
  puVar1 = DAT_2c4dfba0;
  do {
    if ((int *)*puVar1 == param_1) {
      *puVar1 = 0;
      break;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  *DAT_2c4dfba4 = *DAT_2c4dfba4 + -1;
  FUN_2c4de580(param_1);
  return param_1;
}

