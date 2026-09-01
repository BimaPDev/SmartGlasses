/* FUN_100d6468 @ 0x100d6468 */

void FUN_100d6468(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100d64bc;
  iVar4 = 0;
  while( true ) {
    iVar2 = *piVar1;
    iVar3 = (uint)*(byte *)(iVar2 + (iVar4 + 0xd) * 8 + 0xb) << 0x1f;
    if ((iVar3 < 0) &&
       (iVar2 = FUN_1011ea30(iVar2 + iVar4 * 8 + 0x6d,param_1,6,iVar3,param_4), iVar2 == 0)) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 3) {
      return;
    }
  }
  if ((param_2 != 3) && (param_2 != 9)) {
    return;
  }
  iVar4 = *piVar1 + (iVar4 + 0xd) * 8;
  *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xfe;
  return;
}

