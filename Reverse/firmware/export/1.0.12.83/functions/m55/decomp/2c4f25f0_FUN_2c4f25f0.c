/* FUN_2c4f25f0 @ 0x2c4f25f0 */

int FUN_2c4f25f0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = DAT_2c4f26e4;
  do {
    uVar7 = *(uint *)(param_1 + 0x58);
    uVar6 = *(uint *)(param_1 + 0x60);
    uVar4 = *(uint *)(param_1 + 0x5c);
    while( true ) {
      uVar5 = uVar4;
      if (uVar7 == uVar5) break;
      uVar6 = uVar6 - 1;
      *(uint *)(param_1 + 0x5c) = uVar5 + 1;
      *(uint *)(param_1 + 0x60) = uVar6;
      uVar4 = uVar5 + 1;
      if ((1 << (uVar5 & 0x1f) & *(uint *)(*(int *)(param_1 + 100) + (uVar5 >> 5) * 4)) == 0) {
        uVar5 = uVar5 + *(int *)(param_1 + 0x54);
        uVar4 = *(uint *)(*(int *)(param_1 + 0x68) + 0x20);
        *param_2 = uVar5 - uVar4 * (uVar5 / uVar4);
        uVar4 = *(uint *)(param_1 + 0x5c);
        if (*(uint *)(param_1 + 0x58) == uVar4) {
          return 0;
        }
        do {
          uVar6 = uVar4 >> 5;
          uVar7 = uVar4 & 0x1f;
          uVar4 = uVar4 + 1;
          if ((1 << uVar7 & *(uint *)(*(int *)(param_1 + 100) + uVar6 * 4)) == 0) {
            return 0;
          }
          *(uint *)(param_1 + 0x5c) = uVar4;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        } while (uVar4 != *(uint *)(param_1 + 0x58));
        return 0;
      }
    }
    if (uVar6 == 0) {
      FUN_2c66ac44(DAT_2c4f26f0,DAT_2c4f26ec,0x231,*(int *)(param_1 + 0x54) + uVar7,DAT_2c4f26e8);
      return -0x1c;
    }
    iVar2 = *(int *)(param_1 + 0x68);
    uVar7 = uVar7 + *(int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar7 - *(uint *)(iVar2 + 0x20) * (uVar7 / *(uint *)(iVar2 + 0x20));
    iVar3 = *(int *)(iVar2 + 0x2c);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar4 = iVar3 << 3;
    if (uVar4 <= uVar6) {
      uVar6 = uVar4;
    }
    *(uint *)(param_1 + 0x58) = uVar6;
    FUN_2c674268(*(undefined4 *)(param_1 + 100),0,*(undefined4 *)(iVar2 + 0x2c));
    iVar2 = FUN_2c4f2448(param_1,uVar1,param_1,1);
  } while (iVar2 == 0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
  return iVar2;
}

