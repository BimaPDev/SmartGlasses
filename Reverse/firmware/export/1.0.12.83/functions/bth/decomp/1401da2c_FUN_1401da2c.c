/* FUN_1401da2c @ 0x1401da2c */

undefined4 FUN_1401da2c(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *local_34;
  uint local_2c;
  
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    uVar4 = (uint)*(byte *)(param_2 + 0x21);
    if (uVar4 == 0) {
      uVar1 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      local_34 = (byte *)(param_2 + 0x21);
      local_2c = 0;
      do {
        local_34 = local_34 + 1;
        if (*local_34 != 0) {
          uVar4 = 0;
          piVar6 = (int *)(param_2 + local_2c * 0x10);
          do {
            if (*piVar6 != 0) {
              return 0x401;
            }
            uVar3 = param_1[1];
            uVar5 = *(uint *)(DAT_1401db20 + 0x20);
            iVar9 = 0;
            do {
              uVar8 = 8 - uVar3;
              if ((int)uVar8 < 1) {
                uVar8 = 0;
                uVar2 = *param_1;
              }
              else {
                if (uVar8 == 0x20) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *param_1 << (uVar8 & 0xff);
                }
                uVar2 = FUN_1401c128(param_1 + 2);
                *param_1 = uVar2;
                uVar3 = param_1[1] + 0x20;
              }
              uVar3 = uVar3 - 8;
              uVar8 = (uVar2 >> (uVar3 & 0xff) | uVar8) & uVar5 & 0xff;
              param_1[1] = uVar3;
              iVar9 = iVar9 + uVar8;
            } while (uVar8 == 0xff);
            piVar6[3] = iVar9 * 8;
            uVar4 = uVar4 + 1;
            iVar7 = iVar7 + iVar9 * 8;
            piVar6 = piVar6 + 4;
          } while (uVar4 < *local_34);
          uVar4 = (uint)*(byte *)(param_2 + 0x21);
        }
        local_2c = local_2c + 1;
      } while (local_2c < uVar4);
      uVar1 = 0;
    }
  }
  else {
    iVar7 = 0;
    uVar1 = 0x401;
  }
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x18) * 8 < iVar7)) {
    return 0x401;
  }
  return uVar1;
}

