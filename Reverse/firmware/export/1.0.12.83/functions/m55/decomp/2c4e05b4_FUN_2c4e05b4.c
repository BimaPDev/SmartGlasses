/* FUN_2c4e05b4 @ 0x2c4e05b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e05b4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  uVar1 = _LAB_2c4e05ec;
  uVar3 = _LAB_2c4e05e8;
  FUN_2c4dd594(_LAB_2c4e05e8);
  uVar2 = _LAB_2c4e05f0;
  FUN_2c64c9c4(uVar3,_LAB_2c4e05f4,uVar1);
  FUN_2c4e2664(uVar2,0x200,3);
  if (DAT_2c6685dc == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_2c66ee38(2,_LAB_2c4e05f8,uVar2,uVar1,unaff_r4,unaff_lr);
  }
  return uVar3;
}

