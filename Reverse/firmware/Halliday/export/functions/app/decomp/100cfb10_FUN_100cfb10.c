/* FUN_100cfb10 @ 0x100cfb10 */

void FUN_100cfb10(undefined4 param_1,undefined1 param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_100cfa34(param_1,1,4);
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,4);
    *puVar2 = param_2;
    puVar2[3] = param_4;
    *(undefined2 *)(puVar2 + 1) = param_3;
    FUN_1013509c(param_1,iVar1,DAT_100cfb4c);
    return;
  }
  return;
}

