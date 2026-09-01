/* FUN_100e255c @ 0x100e255c */

int FUN_100e255c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_100e2594;
  while( true ) {
    if ((int)((*DAT_100e2590 & 0x7f) >> 4) <= iVar3) {
      return 0;
    }
    puVar1 = (undefined4 *)(iVar2 + 0x30);
    iVar2 = iVar2 + 0x1f8;
    if (*(int *)*puVar1 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3 * 0x1f8 + DAT_100e2594;
}

