/* FUN_100eec40 @ 0x100eec40 */

int FUN_100eec40(uint param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100eec64;
  if (*(ushort *)(iVar1 + 0x12) == param_1) {
    return (int)*(char *)(iVar1 + 2);
  }
  if (*(ushort *)(iVar1 + 0x14) == param_1) {
    return (int)(char)(*(char *)(iVar1 + 2) + '\x01');
  }
  iVar1 = FUN_100eec10();
  return iVar1;
}

