/* FUN_2c5ebf4c @ 0x2c5ebf4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ebf4c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar5 = FUN_2c5ebdc4();
  uVar8 = 0x3ff;
  if (param_1 != 2) {
    uVar8 = 0x35f;
  }
  *_LAB_2c5ebf78 = uVar8;
  uVar6 = FUN_2c5ebdc4();
  uVar8 = DAT_2c5ebf40;
  uVar7 = uVar5 & ~uVar6;
  if (uVar6 != uVar5) {
    bVar1 = uVar7 == 0;
    if (bVar1) {
      uVar7 = uVar6 & ~uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ebec8,0x18,_LAB_2c5ebec4,_LAB_2c5ebebc,bVar1,(uVar7 & 0x106) != 0,
                 (uVar7 & 0xa0) != 0);
  }
  uVar2 = FUN_2c5ec194();
  uVar3 = FUN_2c5ec1a0();
  uVar4 = FUN_2c5ec1ac();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5ebf48,0x33,DAT_2c5ebf44,uVar8,uVar2,uVar3,uVar4,unaff_r4,unaff_r5);
}

