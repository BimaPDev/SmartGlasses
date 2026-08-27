/* FUN_2c634864 @ 0x2c634864 */

void FUN_2c634864(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  
  sVar1 = FUN_2c6033b4(param_1,0x50000,0x12);
  sVar2 = FUN_2c6033b4(param_1,0x50000,0x13);
  sVar3 = FUN_2c6033b4(param_1,0x50000,0x10);
  sVar4 = FUN_2c6033b4(param_1,0x50000,0x11);
  sVar5 = FUN_2c6033b4(param_1,0x50000,0x58);
  sVar6 = FUN_2c6033b4(param_1,0x50000,0x59);
  uVar10 = FUN_2c6033b4(param_1,0x50000,0x57);
  sVar7 = FUN_2c6033b4(param_1,0x50000,5);
  sVar8 = FUN_2c6033b4(param_1,0x50000,6);
  if (*(short *)(param_1 + 0x26) != 0) {
    uVar12 = 0;
    do {
      iVar11 = FUN_2c6340f4(param_1,uVar12 & 0xffff,uVar10,(int)sVar5,(int)sVar6,(int)sVar1,
                            (int)sVar2,(int)sVar3,(int)sVar4);
      if (sVar8 <= iVar11) {
        iVar11 = (int)sVar8;
      }
      sVar9 = (short)iVar11;
      if ((short)iVar11 < sVar7) {
        sVar9 = sVar7;
      }
      *(short *)(*(int *)(param_1 + 0x2c) + uVar12 * 2) = sVar9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)(param_1 + 0x26));
  }
  FUN_2c607588(param_1);
  FUN_2c607df0(param_1);
  return;
}

