/* FUN_10121996 @ 0x10121996 */

bool FUN_10121996(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar2 = *(byte *)(iVar1 + 0x79) == param_2;
  if (bVar2) {
    *(int *)(iVar1 + 0x74) = iVar1 + 0x78;
  }
  return bVar2;
}

