/* FUN_10067244 @ 0x10067244 */

void FUN_10067244(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  iVar1 = FUN_10067218();
  iVar3 = DAT_100672a0;
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_100672a0 + 0x10) = 0x10000;
    *(undefined4 *)(iVar3 + 0x14) = param_3;
    *(undefined2 *)(iVar3 + 0x18) = 1;
    FUN_1013d9b0(iVar3);
    iVar3 = FUN_1013da10(iVar3,param_2 << 0x18,param_1,param_3,1,iVar4);
    if (-1 < iVar3) {
      return;
    }
  }
  uVar2 = FUN_1011e910(param_1);
  FUN_1011ea48(uVar2,param_2,param_3);
  FUN_1011e8e4();
  return;
}

