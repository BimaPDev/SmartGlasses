/* FUN_2c47b5ce @ 0x2c47b5ce */

/* WARNING: Possible PIC construction at 0x2c47972c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c479730) */
/* WARNING: Removing unreachable block (ram,0x2c4798ac) */
/* WARNING: Removing unreachable block (ram,0x2c47973a) */
/* WARNING: Removing unreachable block (ram,0x2c47974c) */
/* WARNING: Removing unreachable block (ram,0x2c47976a) */
/* WARNING: Removing unreachable block (ram,0x2c47976e) */
/* WARNING: Removing unreachable block (ram,0x2c479764) */
/* WARNING: Removing unreachable block (ram,0x2c479752) */
/* WARNING: Removing unreachable block (ram,0x2c47974e) */
/* WARNING: Removing unreachable block (ram,0x2c479758) */
/* WARNING: Removing unreachable block (ram,0x2c479790) */
/* WARNING: Removing unreachable block (ram,0x2c4797fc) */
/* WARNING: Removing unreachable block (ram,0x2c47987e) */
/* WARNING: Removing unreachable block (ram,0x2c47980c) */
/* WARNING: Removing unreachable block (ram,0x2c479858) */
/* WARNING: Removing unreachable block (ram,0x2c4798b2) */
/* WARNING: Removing unreachable block (ram,0x2c4798c4) */
/* WARNING: Removing unreachable block (ram,0x2c4798cc) */
/* WARNING: Removing unreachable block (ram,0x2c4798ce) */
/* WARNING: Removing unreachable block (ram,0x2c4798ba) */
/* WARNING: Removing unreachable block (ram,0x2c4798be) */
/* WARNING: Removing unreachable block (ram,0x2c47986e) */
/* WARNING: Removing unreachable block (ram,0x2c479876) */
/* WARNING: Removing unreachable block (ram,0x2c479816) */
/* WARNING: Removing unreachable block (ram,0x2c479832) */
/* WARNING: Removing unreachable block (ram,0x2c479824) */
/* WARNING: Removing unreachable block (ram,0x2c47983e) */
/* WARNING: Removing unreachable block (ram,0x2c479846) */
/* WARNING: Removing unreachable block (ram,0x2c47981a) */
/* WARNING: Removing unreachable block (ram,0x2c479796) */
/* WARNING: Removing unreachable block (ram,0x2c4797b8) */
/* WARNING: Removing unreachable block (ram,0x2c4797da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b5ce(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  iVar2 = FUN_2c4795b4();
  iVar1 = _LAB_2c4798d4;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c6741f4)(0x711,_LAB_2c47b61c,_LAB_2c47b618);
    return;
  }
  if (*(ushort *)(_LAB_2c47b614 + 0x4e) != (ushort)*(byte *)(_LAB_2c47b614 + -0xde47)) {
    return;
  }
  FUN_2c674268(_LAB_2c4798d4 + 0x81a,0,0x1fe,(ushort)*(byte *)(_LAB_2c47b614 + -0xde47),unaff_r4);
  *(undefined2 *)(iVar1 + 0xa18) = 0;
                    /* WARNING: Could not recover jumptable at 0x2c47bcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_LAB_2c47bcb0 + (uint)*_LAB_2c47bcac * 4))(0x67);
  return;
}

