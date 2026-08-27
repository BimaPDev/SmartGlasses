/* FUN_2c5696c4 @ 0x2c5696c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5696c4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *_LAB_2c5697d4;
  uStack_18 = 0;
  uStack_20 = _LAB_2c5697d8;
  iStack_1c = 0;
  iVar1 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_20,param_3,0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5697e8,0x33a,_LAB_2c5697e4,_LAB_2c5697fc,_LAB_2c5697e4,
                 *(undefined4 *)(param_2 + 4));
  }
  iVar1 = FUN_2c66b624(*(undefined4 *)(*(int *)(iStack_1c + 4) + 4),_LAB_2c5697dc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5697e8,0x340,_LAB_2c5697e4,_LAB_2c5697e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5697e8,0x345,_LAB_2c5697e4,_LAB_2c5697f8);
}

