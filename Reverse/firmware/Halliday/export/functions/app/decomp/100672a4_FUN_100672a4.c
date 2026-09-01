/* FUN_100672a4 @ 0x100672a4 */

void FUN_100672a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = param_2;
  iVar1 = FUN_10067218();
  iVar3 = DAT_10067314;
  if (iVar1 == 0) {
    *(undefined2 *)(DAT_10067314 + 0x18) = 2;
    *(undefined4 *)(iVar3 + 0x10) = 0x10000;
    *(undefined4 *)(iVar3 + 0x14) = param_3;
    FUN_1013d9b0(iVar3);
    *(undefined4 *)(iVar3 + 0x34) = 0x10000;
    *(undefined4 *)(iVar3 + 0x40) = param_3;
    *(undefined4 *)(iVar3 + 0x38) = param_3;
    *(undefined4 *)(iVar3 + 0x3c) = 1;
    FUN_1013d9f0(iVar3,1);
    iVar3 = FUN_1013da10(iVar3,param_2,param_1,param_3,1,uVar2);
    if (-1 < iVar3) {
      return;
    }
  }
  uVar2 = FUN_1011e910(param_1);
  FUN_1011ea40(uVar2,param_2,param_3);
  FUN_1011e8e4();
  return;
}

