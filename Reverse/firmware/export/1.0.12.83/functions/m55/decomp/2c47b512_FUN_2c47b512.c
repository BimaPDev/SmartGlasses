/* FUN_2c47b512 @ 0x2c47b512 */

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

void FUN_2c47b512(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  short *psVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  iVar3 = _LAB_2c47b59c;
  sVar6 = *(short *)(_LAB_2c47b59c + 0xa1a);
  uVar5 = _LAB_2c47b5a4;
  if (sVar6 != 0) {
    iVar4 = _LAB_2c47b59c + 0x81a;
    bVar2 = false;
    sVar1 = *(short *)(_LAB_2c47b59c + 0x204e);
    psVar7 = (short *)(_LAB_2c47b59c + 0x818);
    do {
      psVar7 = psVar7 + 1;
      if (*psVar7 == sVar1) {
        bVar2 = true;
        *psVar7 = 0;
      }
    } while (psVar7 != (short *)(iVar4 + (uint)(ushort)(sVar6 - 1) * 2));
    uVar5 = _LAB_2c47b5a4;
    if ((bVar2) && (iVar4 = FUN_2c4795b4(), uVar5 = _LAB_2c47b5a8, iVar4 != 0)) {
      sVar6 = *(short *)(iVar3 + 0xa18) + -1;
      *(short *)(iVar3 + 0xa18) = sVar6;
      iVar3 = _LAB_2c4798d4;
      if (sVar6 == 0) {
        FUN_2c674268(_LAB_2c4798d4 + 0x81a,0,0x1fe,0,unaff_r4,unaff_r5,unaff_r6);
        *(undefined2 *)(iVar3 + 0xa18) = 0;
                    /* WARNING: Could not recover jumptable at 0x2c47bcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_LAB_2c47bcb0 + (uint)*_LAB_2c47bcac * 4))(0x67);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c6741f4)(0x711,uVar5,_LAB_2c47b5a0);
  return;
}

