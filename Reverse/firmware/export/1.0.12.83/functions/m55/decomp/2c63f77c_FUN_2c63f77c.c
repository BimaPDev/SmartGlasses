/* FUN_2c63f77c @ 0x2c63f77c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63f77c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x2c63efe8(0);
  func_0x2c63efe8(1);
  func_0x2c63efe8(2);
  puVar1 = _LAB_2c63f7fc;
  uVar2 = FUN_2c62bdd8(PTR_LAB_2c64ebfc_1_2c63f800,3000,0);
  *puVar1 = uVar2;
  FUN_2c62be70(uVar2,0xffffffff);
  FUN_2c62be40(*puVar1);
  func_0x2c64079c();
  func_0x2c48edc8(PTR_LAB_2c64ee0c_1_2c63f804);
  iVar3 = FUN_2c4856c8(PTR_LAB_2c64ebf4_1_2c63f810,PTR_LAB_2c63c45c_1_2c63f80c,
                       PTR_LAB_2c63bea8_1_2c63f808);
  *_LAB_2c63f814 = iVar3;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,uRam2c63f828,0x134,_FUN_2c63f824,_LAB_2c63f820);
  }
  iVar3 = FUN_2c478b68();
  *_LAB_2c63f818 = iVar3;
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c63f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0x104))(_LAB_2c63f81c);
    return;
  }
  return;
}

