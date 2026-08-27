/* FUN_1406414c @ 0x1406414c */

void FUN_1406414c(int param_1)

{
  int iVar1;
  
  if (param_1 != 2) {
    if (param_1 != 3) goto LAB_14063a00;
    FUN_1405fddc();
  }
  FUN_1405d64c();
  FUN_140602e8(param_1);
  iVar1 = DAT_140641a0;
  *(undefined1 *)(DAT_140641a0 + 0x5f) = 0;
  *(undefined1 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0xb0) = 0xff;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 99) = 0;
  *(undefined2 *)(iVar1 + 100) = 0;
LAB_14063a00:
  FUN_1405f858();
  if (param_1 != 1) {
    FUN_1406d7d8(DAT_14063a20);
    FUN_1406d7d8(DAT_14063a24);
    FUN_1406d7d8(DAT_14063a28);
    return;
  }
  return;
}

