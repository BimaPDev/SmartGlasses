/* FUN_100b9988 @ 0x100b9988 */

void FUN_100b9988(void)

{
  int *piVar1;
  int iVar2;
  byte local_9;
  
  iVar2 = DAT_100b99bc;
  if (0xffffff < *(uint *)(DAT_100b99bc + 8)) {
    return;
  }
  piVar1 = (int *)(DAT_100b99bc + 0xc);
  *(uint *)(DAT_100b99bc + 8) = *(uint *)(DAT_100b99bc + 8) << 8;
  *(int *)(iVar2 + 0xc) = *piVar1 << 8;
  FUN_100b940c(&local_9);
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | (uint)local_9;
  return;
}

