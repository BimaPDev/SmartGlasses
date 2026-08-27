/* FUN_2c608dec @ 0x2c608dec */

int FUN_2c608dec(int param_1,int param_2,int param_3,short param_4)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_40;
  
  iVar4 = FUN_2c604a14();
  if (iVar4 != 0) {
    sVar2 = FUN_2c6033b4(param_1,0,0x12);
    sVar3 = FUN_2c6033b4(param_1,0,0x13);
    iVar5 = FUN_2c6041fc(param_1);
    uVar1 = DAT_2c608f18;
    if (iVar5 != 0) {
      iVar10 = 0;
      local_40 = 0x1fff;
      do {
        iVar11 = *(int *)(**(int **)(param_1 + 8) + iVar10 * 4);
        iVar6 = FUN_2c606ba4(iVar11,uVar1);
        if ((iVar6 == 0) && (iVar6 = FUN_2c606b94(iVar11,0x1000), iVar6 != 0)) {
          if (iVar4 == 2) {
            sVar8 = *(short *)(iVar11 + 0x18);
            sVar7 = *(short *)(param_1 + 0x18) - sVar3;
          }
          else if (iVar4 == 3) {
            iVar6 = (int)(short)((*(short *)(iVar11 + 0x18) + 1) - *(short *)(iVar11 + 0x14));
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            sVar8 = *(short *)(iVar11 + 0x14) + (short)(iVar6 >> 1);
            iVar6 = ((int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14)) -
                    (int)sVar2) - (int)sVar3;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            sVar7 = *(short *)(param_1 + 0x14) + sVar2 + (short)(iVar6 >> 1);
          }
          else {
            if (iVar4 != 1) goto LAB_2c608e74;
            sVar8 = *(short *)(iVar11 + 0x14);
            sVar7 = *(short *)(param_1 + 0x14) + sVar2;
          }
          sVar8 = sVar8 + param_4;
          if (((param_2 <= sVar8) && (sVar8 <= param_3)) &&
             (uVar9 = (uint)(short)(sVar8 - sVar7),
             ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) & 0xffff) <
             ((local_40 ^ (int)local_40 >> 0x1f) - ((int)local_40 >> 0x1f) & 0xffff))) {
            local_40 = uVar9;
          }
        }
LAB_2c608e74:
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
      if (local_40 != 0x1fff) {
        return (int)(short)-(short)local_40;
      }
    }
  }
  return 0;
}

