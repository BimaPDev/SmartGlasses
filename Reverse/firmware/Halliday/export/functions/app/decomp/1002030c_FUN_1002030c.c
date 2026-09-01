/* FUN_1002030c @ 0x1002030c */

void FUN_1002030c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10020350;
  iVar2 = *DAT_1002034c;
  *DAT_10020350 = 0x100;
  puVar1[1] = 2;
  *(undefined2 *)(puVar1 + 7) = 0x100;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1[4] = 2;
  puVar1[5] = 1;
  puVar1[6] = 0;
  if (*DAT_1002034c != iVar2) {
    FUN_1013cdc0();
  }
  FUN_100201cc();
  return;
}

