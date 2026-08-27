/* FUN_1404a648 @ 0x1404a648 */

void FUN_1404a648(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_1405194c();
  iVar3 = DAT_1404a6bc;
  if (iVar1 != 0) {
    FUN_1402a6e8(4,0x5b1,DAT_1404a6c8,DAT_1404a6c4,DAT_1404a6d4,DAT_1404a6d0,iVar1);
    iVar3 = 0;
  }
  FUN_1402a6e8(4,0x677,DAT_1404a6c8,DAT_1404a6c4,DAT_1404a6c0,*(undefined1 *)(DAT_1404a6bc + 0x122),
               *(undefined1 *)(DAT_1404a6bc + 0x120),*(undefined1 *)(iVar3 + 0xdf));
  uVar2 = FUN_1404a5f0();
  FUN_1402a6e8(4,0x67a,DAT_1404a6c8,DAT_1404a6c4,DAT_1404a6cc,uVar2);
  return;
}

