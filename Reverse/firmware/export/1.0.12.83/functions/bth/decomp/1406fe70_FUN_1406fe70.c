/* FUN_1406fe70 @ 0x1406fe70 */

undefined4 FUN_1406fe70(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(DAT_1406fe94 + (param_1 + 6) * 4);
  if (iVar1 != 0) {
    bVar2 = *(byte *)(iVar1 + 0x3a) & 0xfb;
    if (param_2 != 0) {
      bVar2 = bVar2 | 4;
    }
    *(byte *)(iVar1 + 0x3a) = bVar2;
    return 0;
  }
  return 0x43;
}

