/* FUN_100b62a4 @ 0x100b62a4 */

void FUN_100b62a4(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100b62d8;
  iVar4 = *DAT_100b62d8;
  uVar2 = FUN_100bfd64();
  iVar3 = *piVar1;
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  if (*(int *)(iVar3 + 0xc) == 0) {
    FUN_100a5b78((DAT_100b62e0 - DAT_100b62dc) * 0x20 & 0xff00U | 0x290011,DAT_100b62e8,DAT_100b62e4
                 ,in_r3);
    return;
  }
  return;
}

