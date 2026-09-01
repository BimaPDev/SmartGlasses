/* FUN_100eb648 @ 0x100eb648 */

int FUN_100eb648(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (DAT_100eb6ac - DAT_100eb6b0) * 0x20 & 0xff00;
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100eb6b4 | uVar3,DAT_100eb6bc,DAT_100eb6b8,param_2,0,param_2,param_3,param_4);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x28);
    iVar5 = param_2;
    FUN_100a5b78(DAT_100eb6c0 | uVar3,DAT_100eb6bc,DAT_100eb6c4,param_2,uVar2,param_2,param_3);
    for (iVar1 = 0; *(int *)(param_1 + 0x24) != iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(iVar4 + 0x18) == iVar5) {
        return iVar4;
      }
      iVar4 = iVar4 + 0x24;
    }
    FUN_100a5b78(DAT_100eb6c8 | uVar3,DAT_100eb6bc,DAT_100eb6cc,iVar5,uVar2,param_2,param_3);
  }
  return 0;
}

