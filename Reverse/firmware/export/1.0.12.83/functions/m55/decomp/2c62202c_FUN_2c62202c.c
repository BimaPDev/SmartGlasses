/* FUN_2c62202c @ 0x2c62202c */

void FUN_2c62202c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_5 != 0) {
    uVar8 = 0;
    uVar9 = 0;
    iVar7 = 0;
    do {
      if (param_3 != 0) {
        uVar3 = ~uVar8;
        uVar6 = param_3 + uVar9;
        do {
          while( true ) {
            uVar2 = uVar9 >> 3;
            uVar4 = ~uVar9;
            uVar9 = uVar9 + 1;
            uVar5 = ~uVar3 >> 3;
            bVar1 = (byte)(1 << (uVar3 & 7));
            if (-1 < ((int)(uint)*(byte *)(param_2 + uVar2) >> (uVar4 & 7)) << 0x1f) break;
            uVar3 = uVar3 - 1;
            *(byte *)(param_1 + uVar5) = bVar1 | *(byte *)(param_1 + uVar5);
            if (uVar9 == uVar6) goto LAB_2c6220a6;
          }
          uVar3 = uVar3 - 1;
          *(byte *)(param_1 + uVar5) = *(byte *)(param_1 + uVar5) & ~bVar1;
        } while (uVar9 != uVar6);
LAB_2c6220a6:
        uVar8 = uVar8 + param_3;
        uVar9 = uVar6;
      }
      iVar7 = iVar7 + 1;
      uVar9 = (param_4 - param_3) + uVar9;
    } while (param_5 != iVar7);
  }
  return;
}

