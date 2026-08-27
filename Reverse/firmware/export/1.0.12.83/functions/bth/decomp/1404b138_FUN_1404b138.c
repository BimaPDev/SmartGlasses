/* FUN_1404b138 @ 0x1404b138 */

void FUN_1404b138(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_1402a6e8(4,0xe85,DAT_1404b1bc,DAT_1404b1b8,DAT_1404b1b4,param_1);
  iVar3 = DAT_1404b1c0;
  if (param_1 != 0) {
    FUN_1402a6e8(4,0x5b1,DAT_1404b1bc,DAT_1404b1b8,DAT_1404b1cc,DAT_1404b1c8,param_1);
    iVar3 = 0;
  }
  iVar1 = DAT_1404b1c0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  piVar2 = DAT_1404b1c4;
  if (*(char *)(iVar1 + 0x30) != '\x01') {
    iVar3 = *DAT_1404b1c4;
    if (iVar3 == 0) {
      iVar3 = FUN_140e52f8(DAT_1404b1d0,0,0);
      *piVar2 = iVar3;
    }
    FUN_140e5378(iVar3,30000);
    FUN_1403d238(0x30);
    return;
  }
  return;
}

