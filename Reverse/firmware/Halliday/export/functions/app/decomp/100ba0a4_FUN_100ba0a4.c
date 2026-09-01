/* FUN_100ba0a4 @ 0x100ba0a4 */

int FUN_100ba0a4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    iVar4 = -5;
  }
  else {
    bVar3 = FUN_10136952();
    uVar2 = DAT_100ba134;
    uVar1 = DAT_100ba130;
    if (bVar3 != 0) {
      bVar5 = 0;
      uVar6 = (DAT_100ba124 - DAT_100ba128) * 0x20 & 0xff00U | DAT_100ba12c;
      iVar4 = param_1 + 6;
      do {
        bVar5 = bVar5 + 1;
        FUN_100a5b78(uVar6,uVar2,uVar1,*(undefined1 *)(iVar4 + -6),*(undefined1 *)(iVar4 + -5),
                     *(undefined1 *)(iVar4 + -4),*(undefined1 *)(iVar4 + -3),
                     *(undefined1 *)(iVar4 + -2),*(undefined1 *)(iVar4 + -1),iVar4);
        iVar4 = iVar4 + 0x28;
      } while (bVar5 < bVar3);
    }
    iVar4 = (int)(char)bVar3;
  }
  return iVar4;
}

