/* FUN_1404b294 @ 0x1404b294 */

void FUN_1404b294(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1404b2f0;
  if (param_1 == 0) {
    iVar2 = *DAT_1404b2f0;
    *(undefined1 *)(DAT_1404b2f4 + 0x1b) = 0;
  }
  else {
    FUN_1402a6e8(4,0x5b1,DAT_1404b304,DAT_1404b300,DAT_1404b2f8,DAT_1404b2fc,param_1);
    uRam0000001b = 0;
    iVar2 = *DAT_1404b2f0;
    piVar1 = DAT_1404b2f0;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_140e52f8(DAT_1404b308,0,0);
    *piVar1 = iVar2;
  }
  FUN_140e5378(iVar2,30000);
  FUN_1403d238(0x30);
  return;
}

