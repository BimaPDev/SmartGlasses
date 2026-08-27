/* FUN_14050c00 @ 0x14050c00 */

undefined4 FUN_14050c00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_1404a1b4(0);
  uVar1 = DAT_14050c4c;
  FUN_140dc3ac(DAT_14050c4c,DAT_14050c50,*(undefined1 *)(iVar2 + 0xd9));
  FUN_1402a6e8(4,0x1f9,DAT_14050c5c,DAT_14050c58,DAT_14050c54,param_1,uVar1);
  if ((param_1 != 0) && (iVar2 = FUN_1404a1b4(0), *(char *)(iVar2 + 0xd9) != '\0')) {
    return 0;
  }
  return 0xff;
}

