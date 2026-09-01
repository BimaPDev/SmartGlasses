/* FUN_10079b64 @ 0x10079b64 */

undefined4 FUN_10079b64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_10112e84(DAT_10079bd4);
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_10079bd8);
    uVar2 = 0xffffffed;
  }
  else {
    puVar3 = *(undefined2 **)(iVar1 + 0x10);
    FUN_1011fc86(puVar3);
    if (param_1 == 0) {
      if (*(char *)(puVar3 + 1) != '\0') {
        FUN_10119dc2(DAT_10079be0,*puVar3);
        *(undefined1 *)(puVar3 + 1) = 0;
        FUN_100794fc(iVar1);
        FUN_10068114(0x33);
      }
    }
    else if (*(char *)(puVar3 + 1) == '\0') {
      FUN_10119dc2(DAT_10079bdc,*puVar3);
      *(undefined1 *)(puVar3 + 1) = 1;
      FUN_10068134(0x33);
      FUN_1011fbee(iVar1,*puVar3);
      FUN_100796ec(iVar1);
    }
    FUN_10113fd0(*(int *)(iVar1 + 0x10) + 0x1c);
    uVar2 = 0;
  }
  return uVar2;
}

