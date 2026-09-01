/* FUN_100528bc @ 0x100528bc */

void FUN_100528bc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_100528f8;
  iVar2 = *DAT_100528f4;
  if ((*(char *)(DAT_100528f8 + 0x8d) != '\0') && (*(short *)(DAT_100528f8 + 0x28) == 0)) {
    FUN_1013cec4(DAT_100528f8 + 0x30);
    *(undefined1 *)(iVar1 + 0x8d) = 0;
  }
  if (*DAT_100528f4 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

