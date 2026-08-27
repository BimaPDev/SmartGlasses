/* FUN_2c021614 @ 0x2c021614 */

void FUN_2c021614(short *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  
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
    psVar7 = (short *)(param_2 + -2);
    psVar4 = (short *)(param_3 + -2);
    do {
      iVar5 = SignedSaturate((int)param_1[1] * (int)*psVar4 * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      psVar7 = psVar7 + 1;
      iVar2 = SignedSaturate((int)*psVar7 * (int)*param_1 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[2] * (int)psVar4[-1] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[3] * (int)psVar4[-2] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[4] * (int)psVar4[-3] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[5] * (int)psVar4[-4] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[6] * (int)psVar4[-5] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[7] * (int)psVar4[-6] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar2 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(iVar2,0x20);
      iVar5 = SignedSaturate((int)param_1[8] * (int)psVar4[-7] * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      uVar3 = SignedSaturate(iVar2 - iVar5,0x20);
      SignedDoesSaturate(uVar3,0x20);
      uVar6 = uVar3 ^ uVar3 << 1;
      iVar5 = uVar3 << 3;
      if (((uVar6 == 0) || ((uint)LZCOUNT(uVar6) < 3)) && (uVar3 != 0)) {
        iVar5 = 0;
        if (-1 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
        iVar5 = SignedSaturate(iVar5 * 2,0x20);
        SignedDoesSaturate(iVar5,0x20);
      }
      uVar1 = SignedSaturate(iVar5 + 0x8000,0x20);
      SignedDoesSaturate(uVar1,0x20);
      psVar4 = psVar4 + 1;
      *psVar4 = (short)((uint)uVar1 >> 0x10);
    } while (psVar7 != (short *)(param_2 + (param_4 - 1U & 0xffff) * 2));
  }
  return;
}

