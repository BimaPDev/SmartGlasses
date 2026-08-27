/* FUN_14016954 @ 0x14016954 */

void FUN_14016954(short *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  
  if ((undefined2 *)(param_3 + -0x10) == (undefined2 *)((int)param_5 + 2)) {
    *(undefined2 *)(param_3 + -0x10) = *(undefined2 *)param_5;
    *(undefined2 *)(param_3 + -0xe) = *(undefined2 *)((int)param_5 + 2);
    *(undefined2 *)(param_3 + -0xc) = *(undefined2 *)(param_5 + 1);
    *(undefined2 *)(param_3 + -10) = *(undefined2 *)((int)param_5 + 6);
    *(undefined2 *)(param_3 + -8) = *(undefined2 *)(param_5 + 2);
    *(undefined2 *)(param_3 + -6) = *(undefined2 *)((int)param_5 + 10);
    *(undefined2 *)(param_3 + -4) = *(undefined2 *)(param_5 + 3);
    *(undefined2 *)(param_3 + -2) = *(undefined2 *)((int)param_5 + 0xe);
  }
  else {
    *(undefined4 *)(param_3 + -0x10) = *param_5;
    *(undefined4 *)(param_3 + -0xc) = param_5[1];
    *(undefined4 *)(param_3 + -8) = param_5[2];
    *(undefined4 *)(param_3 + -4) = param_5[3];
  }
  if (0 < param_4) {
    psVar8 = (short *)(param_2 + -2);
    psVar5 = (short *)(param_3 + -2);
    psVar4 = (short *)(param_2 + (param_4 - 1U & 0xffff) * 2);
    do {
      while( true ) {
        iVar6 = SignedSaturate((int)param_1[1] * (int)*psVar5 * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        psVar8 = psVar8 + 1;
        iVar2 = SignedSaturate((int)*psVar8 * (int)*param_1 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[2] * (int)psVar5[-1] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[3] * (int)psVar5[-2] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[4] * (int)psVar5[-3] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[5] * (int)psVar5[-4] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[6] * (int)psVar5[-5] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[7] * (int)psVar5[-6] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar2 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(iVar2,0x20);
        iVar6 = SignedSaturate((int)param_1[8] * (int)psVar5[-7] * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        uVar3 = SignedSaturate(iVar2 - iVar6,0x20);
        SignedDoesSaturate(uVar3,0x20);
        uVar7 = uVar3 ^ uVar3 << 1;
        if (((uVar7 == 0) || ((uint)LZCOUNT(uVar7) < 3)) && (uVar3 != 0)) break;
        uVar1 = SignedSaturate(uVar3 * 8 + 0x8000,0x20);
        SignedDoesSaturate(uVar1,0x20);
        psVar5 = psVar5 + 1;
        *psVar5 = (short)((uint)uVar1 >> 0x10);
        if (psVar8 == psVar4) {
          return;
        }
      }
      if ((int)uVar3 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x7fffffff;
      }
      iVar6 = SignedSaturate(iVar6 * 2,0x20);
      SignedDoesSaturate(iVar6,0x20);
      uVar1 = SignedSaturate(iVar6 + 0x8000,0x20);
      SignedDoesSaturate(uVar1,0x20);
      psVar5 = psVar5 + 1;
      *psVar5 = (short)((uint)uVar1 >> 0x10);
    } while (psVar8 != psVar4);
  }
  return;
}

