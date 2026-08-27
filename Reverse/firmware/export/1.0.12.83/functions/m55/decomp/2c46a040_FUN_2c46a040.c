/* FUN_2c46a040 @ 0x2c46a040 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c46a040(byte *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = _LAB_2c46a1cc;
  if (*_LAB_2c46a1cc == -1) {
    do {
      iVar3 = func_0x2c46be68();
    } while (iVar3 == -1);
    ExclusiveAccess(piVar1);
    if (*piVar1 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    DataMemoryBarrier(0x1b);
  }
  uVar2 = FUN_2c66c4ec(param_1);
  uVar8 = _LAB_2c46a1d0 + *piVar1 + uVar2;
  uVar5 = uVar8;
  uVar6 = uVar8;
  for (; 0xc < uVar2; uVar2 = uVar2 - 0xc) {
    uVar6 = (uint)param_1[10] * 0x10000 + (uint)param_1[9] * 0x100 + (uint)param_1[8] +
            (uint)param_1[0xb] * 0x1000000 + uVar6;
    iVar4 = (uint)param_1[4] + (uint)param_1[6] * 0x10000 + (uint)param_1[5] * 0x100 +
            (uint)param_1[7] * 0x1000000 + uVar5;
    uVar8 = (((uint)param_1[2] * 0x10000 + (uint)param_1[1] * 0x100 + (uint)*param_1 +
             (uint)param_1[3] * 0x1000000) - uVar6) + uVar8 ^ (uVar6 >> 0x1c | uVar6 * 0x10);
    iVar7 = uVar6 + iVar4;
    iVar3 = uVar8 + iVar7;
    uVar8 = iVar4 - uVar8 ^ (uVar8 >> 0x1a | uVar8 << 6);
    iVar4 = uVar8 + iVar3;
    uVar8 = iVar7 - uVar8 ^ (uVar8 >> 0x18 | uVar8 << 8);
    iVar7 = uVar8 + iVar4;
    uVar5 = iVar3 - uVar8 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
    uVar8 = uVar5 + iVar7;
    uVar6 = iVar4 - uVar5 ^ (uVar5 >> 0xd | uVar5 << 0x13);
    uVar5 = uVar6 + uVar8;
    uVar6 = iVar7 - uVar6 ^ (uVar6 >> 0x1c | uVar6 << 4);
    param_1 = param_1 + 0xc;
  }
  switch(uVar2) {
  case 0xc:
    uVar6 = uVar6 + (uint)param_1[0xb] * 0x1000000;
  case 0xb:
    uVar6 = uVar6 + (uint)param_1[10] * 0x10000;
  case 10:
    uVar6 = uVar6 + (uint)param_1[9] * 0x100;
  case 9:
    uVar6 = uVar6 + param_1[8];
  case 8:
    uVar5 = uVar5 + (uint)param_1[7] * 0x1000000;
  case 7:
    uVar5 = uVar5 + (uint)param_1[6] * 0x10000;
  case 6:
    uVar5 = uVar5 + (uint)param_1[5] * 0x100;
  case 5:
    uVar5 = uVar5 + param_1[4];
  case 4:
    uVar8 = uVar8 + (uint)param_1[3] * 0x1000000;
  case 3:
    uVar8 = uVar8 + (uint)param_1[2] * 0x10000;
  case 2:
    uVar8 = uVar8 + (uint)param_1[1] * 0x100;
  case 1:
    uVar6 = (uVar6 ^ uVar5) - (uVar5 >> 0x12 | uVar5 << 0xe);
    uVar8 = (*param_1 + uVar8 ^ uVar6) - (uVar6 >> 0x15 | uVar6 * 0x800);
    uVar5 = (uVar5 ^ uVar8) - (uVar8 >> 7 | uVar8 * 0x2000000);
    uVar6 = (uVar6 ^ uVar5) - (uVar5 >> 0x10 | uVar5 * 0x10000);
    uVar8 = (uVar8 ^ uVar6) - (uVar6 >> 0x1c | uVar6 * 0x10);
    uVar8 = (uVar5 ^ uVar8) - (uVar8 >> 0x12 | uVar8 * 0x4000);
    return (uVar6 ^ uVar8) - (uVar8 >> 8 | uVar8 * 0x1000000);
  default:
    return uVar6;
  }
}

