/* FUN_2c52c9ac @ 0x2c52c9ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52c9ac(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_24;
  
  uStack_24 = *_LAB_2c52cb30;
  uStack_58 = 0;
  uStack_60 = _LAB_2c52cb34;
  iStack_5c = 0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_60,param_3,0);
  uVar1 = _LAB_2c52cb5c;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52cb3c,0xb9,_LAB_2c52cb38,_LAB_2c52cb58,_LAB_2c52cb38,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar4 = *(undefined4 *)(*(int *)(iStack_5c + 4) + 4);
  iVar3 = FUN_2c66b624(uVar4,_LAB_2c52cb5c);
  uVar2 = _LAB_2c52cb60;
  if (iVar3 != 0) {
    iVar3 = FUN_2c66b624(uVar4,_LAB_2c52cb60);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c52cb3c,199,_LAB_2c52cb38,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c52cb3c,0xcf,_LAB_2c52cb38,_LAB_2c52cb54);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c52cb3c,0xbf,_LAB_2c52cb38,uVar1);
}

