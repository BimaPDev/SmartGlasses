/* FUN_100b93bc @ 0x100b93bc */

bool FUN_100b93bc(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 <= (uint)(*(int *)(DAT_100b93d4 + 0xc) - *(int *)(DAT_100b93d4 + 4));
  if (bVar1) {
    *(uint *)(DAT_100b93d4 + 8) = param_1 + *(int *)(DAT_100b93d4 + 4);
  }
  return bVar1;
}

