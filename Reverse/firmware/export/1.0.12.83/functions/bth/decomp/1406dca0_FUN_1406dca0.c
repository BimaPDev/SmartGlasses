/* FUN_1406dca0 @ 0x1406dca0 */

undefined4 FUN_1406dca0(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(DAT_1406dcdc + (param_1 + 6) * 4);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x3a) & 1) != param_2) {
      bVar2 = *(byte *)(iVar1 + 0x3a) & 0xfe;
      if (param_2 != 0) {
        bVar2 = bVar2 | 1;
      }
      *(byte *)(iVar1 + 0x3a) = bVar2;
      if (param_2 != 0) {
        FUN_14070c18();
      }
    }
    return 0;
  }
  return 0x43;
}

