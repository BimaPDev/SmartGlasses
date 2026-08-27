/* FUN_2c567a40 @ 0x2c567a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567a40(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c567b4c;
  uStack_20 = 0;
  uStack_28 = _LAB_2c567b50;
  iStack_24 = 0;
  iVar2 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_28,param_3,0);
  uVar1 = _LAB_2c567b54;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c567b58,0x136,_LAB_2c567b5c,_LAB_2c567b70,_LAB_2c567b5c,
                 *(undefined4 *)(param_2 + 4));
  }
  iVar2 = FUN_2c66b624(*(undefined4 *)(*(int *)(iStack_24 + 4) + 4),_LAB_2c567b54);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c567b58,0x13c,_LAB_2c567b5c,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c567b58,0x141,_LAB_2c567b5c,_LAB_2c567b6c);
}

