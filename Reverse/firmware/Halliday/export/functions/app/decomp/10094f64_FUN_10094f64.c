/* FUN_10094f64 @ 0x10094f64 */

void FUN_10094f64(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    iVar1 = FUN_1011ea10();
    iVar2 = FUN_1011ea10(param_3);
    if (iVar2 != 0) {
      iVar3 = (*(code *)*DAT_10094fb4)(param_1,param_2);
      for (uVar4 = iVar1 + iVar2; (uint)(iVar2 + iVar3) <= uVar4; uVar4 = uVar4 - 1) {
        *(undefined1 *)(param_1 + uVar4) = *(undefined1 *)((param_1 - iVar2) + uVar4);
      }
      FUN_1011ea40(param_1 + iVar3,param_3,iVar2);
      return;
    }
  }
  return;
}

