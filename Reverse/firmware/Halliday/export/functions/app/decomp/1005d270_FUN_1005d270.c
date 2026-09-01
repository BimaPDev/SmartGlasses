/* FUN_1005d270 @ 0x1005d270 */

void FUN_1005d270(uint param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_1005d2f4;
  uVar3 = (*DAT_1005d2f4 & 0xffff) >> 8;
  if (param_1 < uVar3) {
    puVar1 = DAT_1005d2f4 + 1;
    if (-1 < (int)(DAT_1005d2f4[1] << 0x1f)) {
      DAT_1005d2f4[0xc] = 0x44444444;
      *puVar1 = 5;
    }
    uVar4 = param_3 + param_2 & 0xffffffe0;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    if (param_4 == 0) {
      uVar5 = 0x1f;
    }
    else if (param_4 == 1) {
      uVar5 = 0x1a;
    }
    else {
      uVar5 = 0x1e;
    }
    FUN_10119dc2(DAT_1005d2fc,param_1,uVar3,uVar6,uVar4 - 1,param_2,param_3 + param_2,
                 *(undefined4 *)(DAT_1005d300 + param_4 * 4));
    puVar2[2] = param_1;
    puVar2[3] = uVar5 | uVar6;
    puVar2[4] = uVar4 - 0x20 | 1;
    return;
  }
  FUN_10119dc2(DAT_1005d2f8,param_1);
  return;
}

