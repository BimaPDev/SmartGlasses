/* FUN_1009edc4 @ 0x1009edc4 */

undefined4 FUN_1009edc4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*DAT_1009ee80 != '\0') {
    FUN_100a5b78((DAT_1009ee88 - DAT_1009ee84) * 0x20 & 0xff00U | 0xe20021,DAT_1009ee90,DAT_1009ee8c
                 ,param_1,param_1,param_2);
  }
  uVar1 = FUN_10115464();
  uVar2 = FUN_1013cd52();
  FUN_10115194(uVar1,0xffffffff);
  iVar3 = FUN_1011ea18(param_1,DAT_1009ee94);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1012d0f0(param_1);
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_1009ee88 - DAT_1009ee84) * 0x20 & 0xff00U | 0xeb0011,DAT_1009ee90,
                   DAT_1009ee98,param_1);
      uVar4 = 0;
      goto LAB_1009ee38;
    }
  }
  iVar3 = FUN_10063d20(iVar3,param_2,0x14);
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    FUN_100a5b78((DAT_1009ee88 - DAT_1009ee84) * 0x20 & 0xff00U | 0xf40012,DAT_1009ee90,DAT_1009ee9c
                 ,*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3));
    uVar4 = 0;
  }
LAB_1009ee38:
  FUN_10115194(uVar1,uVar2);
  return uVar4;
}

