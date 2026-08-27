/* FUN_140512a4 @ 0x140512a4 */

undefined4 FUN_140512a4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_1402a6e8(4,0x2ea,DAT_14051364,DAT_14051360,DAT_14051358,DAT_1405135c);
  iVar1 = FUN_1404a1b4(param_1);
  FUN_1404a1b4(0);
  if (*(char *)(DAT_14051368 + 0x184) == '\0') {
    if ((param_2 != 1) || (param_3 != 1)) {
      FUN_1402a6e8(4,0x30d,DAT_14051364,DAT_14051360,DAT_1405136c,*(undefined1 *)(iVar1 + 0x45),
                   *(undefined1 *)(iVar1 + 0x7c));
      return 1;
    }
    FUN_1402a6e8(4,0x308,DAT_14051364,DAT_14051360,DAT_14051374,param_1);
    uVar2 = 0;
  }
  else if ((param_2 == 1) && (param_3 == 1)) {
    FUN_1402a6e8(4,0x2fc,DAT_14051364,DAT_14051360,DAT_14051370,param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(char *)(iVar1 + 0xfc) != '\x01') {
      uVar2 = 1;
    }
  }
  return uVar2;
}

