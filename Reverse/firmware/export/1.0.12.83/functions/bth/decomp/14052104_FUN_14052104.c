/* FUN_14052104 @ 0x14052104 */

void FUN_14052104(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1404a1b4();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x118) != 0)) && (*(char *)(iVar1 + 0xfc) == -1)) {
    FUN_1402a6e8(4,0xd26,DAT_14052150,DAT_1405214c,DAT_14052148,param_1);
    FUN_140e5718(*(undefined4 *)(iVar1 + 0x118));
    *(undefined1 *)(iVar1 + 0xfc) = 0;
  }
  return;
}

