/* FUN_2c57b124 @ 0x2c57b124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c57b124(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_2c66b624(_LAB_2c57b194);
  if (iVar1 != 0) {
    iVar1 = FUN_2c66b624(_LAB_2c57b198,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    registry_lookup(0x6008);
    FUN_2c5e4068();
    FUN_2c531704(4,extraout_r1_00,0,0,0,0);
    return 1;
  }
  registry_lookup(0x6010);
  FUN_2c5e4068();
  FUN_2c531704(4,extraout_r1,1,0,0,0);
  return 1;
}

