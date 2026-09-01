/* FUN_100b98d0 @ 0x100b98d0 */

int FUN_100b98d0(ushort *param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte local_1d;
  undefined1 auStack_1c [8];
  
  iVar3 = FUN_100b93e4(*param_1,auStack_1c);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_100b93e4(-(uint)*param_1,auStack_1c);
  piVar2 = DAT_100b9938;
  cVar4 = '\x05';
  DAT_100b9938[2] = -1;
  piVar2[3] = 0;
  do {
    FUN_100b940c(&local_1d);
    cVar4 = cVar4 + -1;
    piVar2[3] = (uint)local_1d | piVar2[3] << 8;
  } while (cVar4 != '\0');
  FUN_100b93e4(0,DAT_100b9938);
  uVar1 = *param_1;
  piVar2[1] = *piVar2 + (uint)uVar1;
  *param_1 = uVar1 - 5;
  return iVar3;
}

