/* FUN_2c66d6f8 @ 0x2c66d6f8 */

undefined4 FUN_2c66d6f8(uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  puVar2 = (uint *)FUN_2c6705d0();
  if ((int)param_1 < 0x7b2) {
    uVar3 = 0;
  }
  else {
    puVar2[1] = param_1;
    iVar8 = (param_1 - 0x7b2) * 0x16d + ((int)(param_1 - 0x7b1) >> 2) +
            (int)(param_1 - 0x76d) / -100 + (param_1 - 0x641) / 400;
    uVar10 = (uint)((int)param_1 % 400 == 0);
    puVar4 = puVar2;
    do {
      uVar5 = puVar4[5];
      if ((char)puVar4[2] == 'J') {
        if ((((param_1 & 3) == 0) && ((int)param_1 % 100 != 0)) || ((int)param_1 % 400 == 0)) {
          if ((int)uVar5 < 0x3c) {
            iVar6 = 0;
          }
          else {
            iVar6 = 1;
          }
        }
        else {
          iVar6 = 0;
        }
        iVar7 = iVar6 + iVar8 + uVar5 + -1;
      }
      else if ((char)puVar4[2] == 'D') {
        iVar7 = uVar5 + iVar8;
      }
      else {
        uVar9 = uVar10;
        if (((param_1 & 3) == 0) && ((int)param_1 % 100 != 0)) {
          uVar9 = 1;
        }
        iVar7 = 0;
        iVar6 = iVar8;
        while( true ) {
          iVar7 = iVar7 + 1;
          iVar11 = *(int *)(uVar9 * 0x30 + DAT_2c66d848 + -4 + iVar7 * 4);
          if ((int)puVar4[3] <= iVar7) break;
          iVar6 = iVar6 + iVar11;
        }
        iVar7 = uVar5 - (iVar6 + 4) % 7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        for (iVar7 = (puVar4[4] - 1) * 7 + iVar7; iVar11 <= iVar7; iVar7 = iVar7 + -7) {
        }
        iVar7 = iVar7 + iVar6;
      }
      lVar1 = (longlong)iVar7 * (longlong)DAT_2c66d844 + (longlong)(int)puVar4[6];
      uVar9 = (uint)lVar1;
      uVar5 = puVar4[10];
      puVar4[8] = uVar9 + uVar5;
      puVar4[9] = (int)((ulonglong)lVar1 >> 0x20) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar9,uVar5)
      ;
      puVar4 = puVar4 + 10;
    } while (puVar2 + 0x14 != puVar4);
    uVar5 = puVar2[0x13];
    uVar10 = puVar2[9];
    *puVar2 = (uint)((int)((uVar10 - uVar5) - (uint)(puVar2[8] < puVar2[0x12])) < 0 !=
                    (SBORROW4(uVar10,uVar5) !=
                    SBORROW4(uVar10 - uVar5,(uint)(puVar2[8] < puVar2[0x12]))));
    uVar3 = 1;
  }
  return uVar3;
}

