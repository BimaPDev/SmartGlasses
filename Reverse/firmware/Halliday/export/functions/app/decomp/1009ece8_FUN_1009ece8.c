/* FUN_1009ece8 @ 0x1009ece8 */

undefined4 FUN_1009ece8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*DAT_1009eda4 != '\0') {
    FUN_100a5b78((DAT_1009edac - DAT_1009eda8) * 0x20 & 0xff00U | 0xb90021,DAT_1009edb4,DAT_1009edb0
                 ,param_1,param_1,param_2);
  }
  uVar1 = FUN_10115464();
  uVar2 = FUN_1013cd52();
  FUN_10115194(uVar1,0xffffffff);
  iVar3 = FUN_1011ea18(param_1,DAT_1009edb8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1012d0f0(param_1);
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_1009edac - DAT_1009eda8) * 0x20 & 0xff00U | 0xc20011,DAT_1009edb4,
                   DAT_1009edbc,param_1);
      uVar4 = 0;
      goto LAB_1009ed5c;
    }
  }
  iVar3 = FUN_10063e14(iVar3,param_2,0x14);
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    FUN_100a5b78((DAT_1009edac - DAT_1009eda8) * 0x20 & 0xff00U | 0xcb0012,DAT_1009edb4,DAT_1009edc0
                 ,*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3));
    uVar4 = 0;
  }
LAB_1009ed5c:
  FUN_10115194(uVar1,uVar2);
  return uVar4;
}

