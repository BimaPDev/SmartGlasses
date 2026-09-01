/* FUN_100eb184 @ 0x100eb184 */

int FUN_100eb184(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *DAT_100eb1bc;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(iVar2 + 0xc);
    if ((uVar1 <= param_1) && (param_1 < uVar1 + *(int *)(iVar2 + 8))) break;
    iVar2 = *(int *)(iVar2 + 0x10);
  }
  if ((uVar1 == param_1) && (*(int *)(iVar2 + 8) == *(int *)(param_1 + 8))) {
    if (*(uint *)(iVar2 + 4) < 0x41) {
      return iVar2;
    }
    return 1;
  }
  return 1;
}

