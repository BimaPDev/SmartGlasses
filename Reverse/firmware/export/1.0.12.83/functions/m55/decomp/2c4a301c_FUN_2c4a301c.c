/* FUN_2c4a301c @ 0x2c4a301c */

uint FUN_2c4a301c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar2 = *DAT_2c4a3058;
  do {
    iVar3 = iVar2 + 7;
    uVar1 = (uVar1 | 1 << *(sbyte *)(iVar2 + 3) | 1 << *(sbyte *)(iVar2 + 4) |
            1 << *(sbyte *)(iVar2 + 5)) & 0xff;
    iVar2 = iVar3;
  } while (*DAT_2c4a3058 + 0x1c != iVar3);
  return uVar1;
}

