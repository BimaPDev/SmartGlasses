/* FUN_1000ba14 @ 0x1000ba14 */

void FUN_1000ba14(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1000ba48;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  *(undefined1 *)(param_1 + 7) = 5;
  *(undefined2 *)(param_1 + 8) = 500;
  if (*DAT_1000ba48 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

