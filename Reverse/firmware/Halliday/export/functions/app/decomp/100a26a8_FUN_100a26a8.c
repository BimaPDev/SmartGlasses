/* FUN_100a26a8 @ 0x100a26a8 */

int FUN_100a26a8(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int local_24;
  
  piVar6 = (int *)*DAT_100a27bc;
  iVar3 = *(int *)*piVar6;
  uVar5 = (DAT_100a27c0 - DAT_100a27c4) * 0x20 & 0xff00;
  if (iVar3 == 1) {
    iVar3 = FUN_1011b81c(param_1,auStack_28,auStack_2c);
    if (iVar3 == 0) {
      local_24 = iVar3;
      iVar1 = FUN_100a1550(auStack_2c);
      if (iVar1 != 0) goto LAB_100a2778;
      uVar5 = uVar5 | 0x8c0000;
      uVar4 = DAT_100a27d0;
    }
    else {
      uVar5 = uVar5 | 0x7c0000;
      uVar4 = DAT_100a27c8;
    }
    FUN_100a5b78(uVar5 | 0x11,DAT_100a27cc,uVar4);
  }
  else {
    if (iVar3 != 2) {
      iVar1 = 0;
      goto LAB_100a279c;
    }
    if ((((int *)*piVar6)[3] == 0) || (*param_1 == '/')) {
      iVar3 = 0;
      pcVar2 = param_1;
    }
    else {
      iVar3 = FUN_1011ea10();
      iVar1 = FUN_1011ea10(param_1);
      iVar3 = iVar3 + iVar1 + 1;
      pcVar2 = (char *)thunk_FUN_1009f30c(iVar3,DAT_100a27d4);
      if (pcVar2 == (char *)0x0) {
        uVar5 = uVar5 | 0x950000;
        uVar4 = DAT_100a27d8;
        goto LAB_100a2734;
      }
      FUN_10118a1c(pcVar2,iVar3,DAT_100a27dc,*(undefined4 *)(*piVar6 + 0xc),param_1);
    }
    iVar1 = FUN_100a11ec(pcVar2);
    if (iVar1 == 0) {
      uVar5 = uVar5 | 0x9f0000;
      uVar4 = DAT_100a27d0;
LAB_100a2734:
      FUN_100a5b78(uVar5 | 0x11,DAT_100a27cc,uVar4);
      return 0;
    }
    if (iVar3 != 0) {
      FUN_1012d1f4(pcVar2);
    }
LAB_100a2778:
    iVar3 = FUN_100a03c0(iVar1,1);
    if (iVar3 == 0) {
LAB_100a279c:
      FUN_100a5b78(uVar5 | 0xb10033,DAT_100a27cc,DAT_100a27e4,iVar1,param_1,
                   *(undefined4 *)(*piVar6 + 0xc));
      return iVar1;
    }
    FUN_100a5b78(uVar5 | 0xaa0011,DAT_100a27cc,DAT_100a27e0);
    FUN_100a0b00(iVar1);
  }
  return 0;
}

