/* FUN_2c54fab4 @ 0x2c54fab4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54fab4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = _LAB_2c54fb28;
  *param_1 = _LAB_2c54fb28;
  if ((undefined4 *)param_1[0x10] != param_1 + 0x12) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  iVar3 = param_1[0xd];
  iVar4 = param_1[0xe];
  if (iVar3 != iVar4) {
    iVar2 = iVar3 + 8;
    do {
      iVar3 = iVar3 + 0x18;
      bVar5 = iVar2 != *(int *)(iVar2 + -8);
      iVar2 = iVar2 + 0x18;
      if (bVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar4 != iVar3);
    iVar4 = param_1[0xd];
  }
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar4,uVar1,param_1 + 0x12,param_4);
  }
  if ((undefined4 *)param_1[7] != param_1 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[1] != param_1 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1,uVar1,param_1 + 3,param_4);
}

