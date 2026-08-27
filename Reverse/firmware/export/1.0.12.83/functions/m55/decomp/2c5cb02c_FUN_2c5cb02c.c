/* FUN_2c5cb02c @ 0x2c5cb02c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cb02c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *_LAB_2c5cb0e0;
  uVar1 = FUN_2c48e424(param_2,_LAB_2c5cb0e4,param_3,0);
  iVar2 = FUN_2c5d6974(uVar1,&uStack_10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cb0f0,0x1eb,_DAT_2c5cb0ec,_DAT_2c5cb100);
  }
  if (uStack_10 < 0x65) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cb0f0,0x1ee,_DAT_2c5cb0ec,_DAT_2c5cb0e8,uStack_10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5cb0f0,0x1e7,_DAT_2c5cb0ec,_DAT_2c5cb0fc);
}

