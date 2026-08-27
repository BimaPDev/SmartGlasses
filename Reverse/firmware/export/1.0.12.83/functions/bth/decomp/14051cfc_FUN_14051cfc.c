/* FUN_14051cfc @ 0x14051cfc */

void FUN_14051cfc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_1404a1b4();
  uVar3 = (uint)*(byte *)(iVar1 + 0xd8);
  FUN_1402a6e8(4,0xa62,DAT_14051d84,DAT_14051d80,DAT_14051d7c,param_1,uVar3);
  iVar2 = FUN_1404a114(param_1);
  if ((iVar2 != 0) && (*(char *)(iVar1 + 0xd8) == '\0')) {
    if (*(char *)(iVar1 + 0xd9) != '\x01') {
      FUN_14051a80(iVar1);
      FUN_1402a6e8(4,0xa8b,DAT_14051d84,DAT_14051d80,DAT_14051d88,param_1,uVar3);
      FUN_14051528(iVar1);
      return;
    }
    FUN_14051a80(iVar1);
    FUN_1402a6e8(4,0xa85,DAT_14051d84,DAT_14051d80,DAT_14051d8c,param_1,uVar3);
  }
  return;
}

