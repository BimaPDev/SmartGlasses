/* FUN_10126844 @ 0x10126844 */

void FUN_10126844(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_1;
  uVar6 = param_2;
  iVar1 = FUN_10125ff0();
  if (iVar1 == 0) {
    iVar1 = FUN_10126008(param_1);
    iVar2 = FUN_10089f60(param_1);
    if ((iVar2 < 0) && (0 < iVar1)) {
      iVar3 = -iVar2;
      if (iVar1 <= -iVar2) {
        iVar3 = iVar1;
      }
      FUN_1008a178(param_1,0,iVar3,param_2,uVar5,uVar6);
    }
  }
  iVar1 = FUN_10125fe2(param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_1008a000(param_1);
    iVar3 = FUN_1008a0c0(param_1);
    iVar4 = FUN_10125f40(param_1,iVar1);
    if (iVar4 == 1) {
      if ((iVar2 < 0) && (iVar4 = iVar2, 0 < iVar3)) goto LAB_101268ba;
    }
    else if ((iVar3 < 0) && (0 < iVar2)) {
      iVar4 = -iVar3;
      if (iVar2 <= -iVar3) {
        iVar4 = iVar2;
      }
LAB_101268ba:
      FUN_1008a178(param_1,iVar4,iVar1,param_2);
      return;
    }
  }
  return;
}

