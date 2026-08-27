/* FUN_2c5a4d28 @ 0x2c5a4d28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a4d28(undefined4 param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  pbVar1 = _LAB_2c5a4d80;
  *_LAB_2c5a4d80 = (byte)param_2;
  if (param_2 == 1) {
    FUN_2c5c55d8();
    uVar2 = FUN_2c5c5b3c();
    iVar3 = FUN_2c66b624(uVar2,_LAB_2c5a4d90);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5a4d8c,0x6a,_LAB_2c5a4d88,_LAB_2c5a4d94);
    }
    param_2 = (uint)*pbVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5a4d8c,0x6d,_LAB_2c5a4d88,_LAB_2c5a4d84,param_2);
}

