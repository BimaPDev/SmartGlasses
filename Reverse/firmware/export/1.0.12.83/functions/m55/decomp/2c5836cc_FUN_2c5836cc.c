/* FUN_2c5836cc @ 0x2c5836cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5836cc(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_2c;
  
  uStack_2c = *_LAB_2c583908;
  uStack_64 = 0;
  uStack_6c = _LAB_2c58390c;
  iStack_68 = 0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_6c,param_3,0);
  uVar1 = _LAB_2c583934;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c583914,0xfc,_LAB_2c583910,_LAB_2c583930,_LAB_2c583910,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar4 = *(undefined4 *)(*(int *)(iStack_68 + 4) + 4);
  iVar3 = FUN_2c66b624(uVar4,_LAB_2c583934);
  uVar2 = _LAB_2c583938;
  if (iVar3 != 0) {
    iVar3 = FUN_2c66b624(uVar4,_LAB_2c583938);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c583914,0x10d,_LAB_2c583910,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c583914,0x118,_LAB_2c583910,_LAB_2c58392c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c583914,0x102,_LAB_2c583910,uVar1);
}

