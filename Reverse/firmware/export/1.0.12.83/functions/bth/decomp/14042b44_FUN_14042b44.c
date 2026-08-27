/* FUN_14042b44 @ 0x14042b44 */

void FUN_14042b44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_14042c04;
  iVar5 = DAT_14042c04 + param_1 * 0x38;
  if (*(char *)(iVar5 + 0x443) == '\0') {
    if (*(char *)(DAT_14042c04 + 0x442) == '\0' && *(char *)(DAT_14042c04 + 0x47a) == '\0') {
      if (*(char *)(iVar5 + 0x441) != '\x01') {
        *(undefined2 *)(iVar5 + 0x442) = 0x100;
        iVar5 = param_1 * 0x38 + 0x444;
        iVar4 = param_1 * 0x38 + 0x44a;
        *(undefined4 *)(iVar1 + iVar4) = *(undefined4 *)(iVar1 + iVar5);
        *(undefined2 *)(iVar1 + iVar4 + 4) = *(undefined2 *)(iVar1 + iVar5 + 4);
        return;
      }
      iVar6 = param_1 * 0x38 + 0x44a;
      iVar4 = DAT_14042c04 + param_1 * 0x38 + 0x444;
      *(undefined4 *)(DAT_14042c04 + iVar6) = 0;
      *(undefined2 *)(iVar1 + iVar6 + 4) = 0;
      iVar1 = FUN_14042aa8(param_1,iVar4);
      FUN_1402a6e8(4,0x82b,DAT_14042c14,DAT_14042c10,DAT_14042c0c,DAT_14042c08,iVar1);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar5 + 0x442) = 1;
        return;
      }
      *(undefined2 *)(iVar5 + 0x442) = 0x100;
      return;
    }
    uVar3 = 0x823;
    uVar2 = DAT_14042c1c;
  }
  else {
    uVar3 = 0x81d;
    uVar2 = DAT_14042c18;
  }
  FUN_1402a6e8(4,uVar3,DAT_14042c14,DAT_14042c10,uVar2);
  return;
}

