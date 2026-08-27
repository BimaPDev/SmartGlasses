/* FUN_1405f8ec @ 0x1405f8ec */

void FUN_1405f8ec(int param_1,undefined2 *param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1406393c(0);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_2 + 1);
    *(undefined2 *)(iVar2 + 0x14) = *param_2;
    *(byte *)(iVar2 + 0x16) = bVar1 & 0x3f | *(byte *)(iVar2 + 0x10);
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0x90;
    }
    FUN_1406d6c0(DAT_14063938,param_3,param_1);
    return;
  }
  return;
}

