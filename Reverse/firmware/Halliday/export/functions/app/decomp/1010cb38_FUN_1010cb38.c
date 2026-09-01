/* FUN_1010cb38 @ 0x1010cb38 */

void FUN_1010cb38(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_1010cb98;
  if (((*(int *)(DAT_1010cb98 + *(int *)(DAT_1010cb98 + 0x6e4) * 4 + 0x6dc) != 0) &&
      (((*DAT_1010cb9c == 0 || (iVar2 = FUN_1010b62c(DAT_1010cb98,0), iVar2 == 0)) &&
       (iVar2 = FUN_1013b1e8(DAT_1010cb98,0xa00,1), iVar2 == 0)))) &&
     ((iVar2 = FUN_1010c204(), iVar2 == 0 && (iVar2 = FUN_1010b660(DAT_1010cb98), iVar2 == 0)))) {
    *(undefined4 *)(iVar1 + 0x20) = 1;
    uVar3 = *(int *)(iVar1 + 0x6e4) + 1U & 1;
    *(uint *)(iVar1 + 0x6e4) = uVar3;
    *(undefined4 *)(iVar1 + (uVar3 + 0x1b6) * 4 + 4) = 0;
  }
  return;
}

