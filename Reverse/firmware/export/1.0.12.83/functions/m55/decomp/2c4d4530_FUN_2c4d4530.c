/* FUN_2c4d4530 @ 0x2c4d4530 */

undefined4 FUN_2c4d4530(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte *local_34;
  uint local_2c;
  
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    uVar4 = (uint)*(byte *)(param_2 + 0x21);
    if (uVar4 == 0) {
      uVar1 = 0;
      iVar8 = 0;
    }
    else {
      local_34 = (byte *)(param_2 + 0x21);
      iVar8 = 0;
      local_2c = 0;
      do {
        local_34 = local_34 + 1;
        if (*local_34 != 0) {
          uVar4 = 0;
          piVar7 = (int *)(param_2 + local_2c * 0x10);
          do {
            if (*piVar7 != 0) {
              return 0x401;
            }
            uVar3 = param_1[1];
            uVar6 = *(uint *)(DAT_2c4d4620 + 0x20);
            iVar9 = 0;
            do {
              uVar2 = 8 - uVar3;
              uVar5 = 0;
              if ((int)uVar2 < 1) {
                uVar2 = *param_1;
              }
              else {
                if (uVar2 == 0x20) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *param_1 << (uVar2 & 0xff);
                }
                uVar2 = FUN_2c4d74d4(param_1 + 2);
                *param_1 = uVar2;
                uVar3 = param_1[1] + 0x20;
              }
              uVar3 = uVar3 - 8;
              param_1[1] = uVar3;
              uVar5 = (uVar2 >> (uVar3 & 0xff) | uVar5) & uVar6 & 0xff;
              iVar9 = iVar9 + uVar5;
            } while (uVar5 == 0xff);
            uVar4 = uVar4 + 1;
            piVar7[3] = iVar9 * 8;
            iVar8 = iVar8 + iVar9 * 8;
            piVar7 = piVar7 + 4;
          } while (uVar4 < *local_34);
          uVar4 = (uint)*(byte *)(param_2 + 0x21);
        }
        local_2c = local_2c + 1;
      } while (local_2c < uVar4);
      uVar1 = 0;
    }
  }
  else {
    iVar8 = 0;
    uVar1 = 0x401;
  }
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x18) * 8 < iVar8)) {
    return 0x401;
  }
  return uVar1;
}

