/* FUN_2c570738 @ 0x2c570738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c570738(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c570888;
  uStack_20 = 0;
  uStack_28 = _LAB_2c57088c;
  iStack_24 = 0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_28,param_3,0);
  uVar1 = _LAB_2c5708b4;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c570890,0x106,_LAB_2c570894,_LAB_2c5708b0,_LAB_2c570894,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar4 = *(undefined4 *)(*(int *)(iStack_24 + 4) + 4);
  iVar3 = FUN_2c66b624(uVar4,_LAB_2c5708b4);
  uVar2 = _LAB_2c5708b8;
  if (iVar3 != 0) {
    iVar3 = FUN_2c66b624(uVar4,_LAB_2c5708b8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c570890,0x112,_LAB_2c570894,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c570890,0x117,_LAB_2c570894,_LAB_2c5708ac);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c570890,0x10c,_LAB_2c570894,uVar1);
}

