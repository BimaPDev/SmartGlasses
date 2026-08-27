/* FUN_2c57531c @ 0x2c57531c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57531c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c575460;
  uStack_20 = 0;
  uStack_28 = _LAB_2c575464;
  iStack_24 = 0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_28,param_3,0);
  uVar1 = _LAB_2c57548c;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c575468,0xd3,_LAB_2c57546c,_LAB_2c575488,_LAB_2c57546c,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar4 = *(undefined4 *)(*(int *)(iStack_24 + 4) + 4);
  iVar3 = FUN_2c66b624(uVar4,_LAB_2c57548c);
  uVar2 = _LAB_2c575490;
  if (iVar3 != 0) {
    iVar3 = FUN_2c66b624(uVar4,_LAB_2c575490);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c575468,0xde,_LAB_2c57546c,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c575468,0xe3,_LAB_2c57546c,_LAB_2c575484);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c575468,0xd9,_LAB_2c57546c,uVar1);
}

