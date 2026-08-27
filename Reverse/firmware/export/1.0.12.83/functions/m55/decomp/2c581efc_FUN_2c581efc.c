/* FUN_2c581efc @ 0x2c581efc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c581efc(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c582040;
  uStack_20 = 0;
  uStack_28 = _LAB_2c582044;
  iStack_24 = 0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_28,param_3,0);
  uVar1 = _LAB_2c58206c;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c582048,0xaf,_LAB_2c58204c,_LAB_2c582068,_LAB_2c58204c,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar4 = *(undefined4 *)(*(int *)(iStack_24 + 4) + 4);
  iVar3 = FUN_2c66b624(uVar4,_LAB_2c58206c);
  uVar2 = _LAB_2c582070;
  if (iVar3 != 0) {
    iVar3 = FUN_2c66b624(uVar4,_LAB_2c582070);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c582048,0xb9,_LAB_2c58204c,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c582048,0xbc,_LAB_2c58204c,_LAB_2c582064);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c582048,0xb5,_LAB_2c58204c,uVar1);
}

