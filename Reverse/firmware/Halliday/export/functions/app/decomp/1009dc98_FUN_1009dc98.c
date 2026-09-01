/* FUN_1009dc98 @ 0x1009dc98 */

bool FUN_1009dc98(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_1009dccc;
  if (param_1 == 0) {
    *DAT_1009dccc = 0;
  }
  else {
    DAT_1009dccc[1] = 0;
    puVar1[2] = 0xfc;
    puVar1[3] = 0;
    puVar1[5] = 7;
    puVar1[6] = 0xff;
    puVar1[7] = 7;
    *puVar1 = 1;
  }
  iVar2 = FUN_1010e9c4(DAT_1009dccc);
  return iVar2 == 0;
}

