/* FUN_2c4f30e8 @ 0x2c4f30e8 */

uint FUN_2c4f30e8(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)(param_2 + 0x30) << 0xe < 0) {
    uVar2 = FUN_2c4f2bfc();
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = *(uint *)(param_2 + 0x34);
    uVar5 = *(uint *)(param_2 + 0x2c);
    if (uVar5 <= uVar2) {
      return 0;
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x34);
    uVar5 = *(uint *)(param_2 + 0x2c);
    if (uVar5 <= uVar2) {
      return 0;
    }
  }
  uVar1 = DAT_2c4f321c;
  uVar6 = uVar5 - uVar2;
  if (param_4 <= uVar5 - uVar2) {
    uVar6 = param_4;
  }
  if (uVar6 != 0) {
    iVar9 = param_2 + 0x40;
    uVar5 = uVar6;
    do {
      uVar3 = *(uint *)(param_2 + 0x30);
      if ((int)(uVar3 << 0xd) < 0) {
        iVar10 = *(int *)(param_1 + 0x68);
        uVar4 = *(uint *)(param_2 + 0x3c);
        uVar7 = *(uint *)(iVar10 + 0x1c);
        if (uVar4 == uVar7) goto LAB_2c4f317e;
        uVar8 = uVar7 - uVar4;
        if (uVar5 <= uVar7 - uVar4) {
          uVar8 = uVar5;
        }
        if ((uVar3 & 0x100000) != 0) goto LAB_2c4f3144;
LAB_2c4f31a4:
        if (*(uint *)(iVar10 + 0x20) <= *(uint *)(param_2 + 0x38)) {
          return 0xffffffac;
        }
        if (uVar7 < uVar8 + uVar4) {
          return 0xffffffac;
        }
        uVar2 = FUN_2c4f0eb4(param_1,0,iVar9,uVar7,*(uint *)(param_2 + 0x38),uVar4,param_3,uVar8);
      }
      else {
LAB_2c4f317e:
        if ((int)(uVar3 << 0xb) < 0) {
          *(undefined4 *)(param_2 + 0x38) = 0xfffffffe;
          *(uint *)(param_2 + 0x3c) = uVar2;
        }
        else {
          uVar2 = FUN_2c4f1384(param_1,iVar9,*(undefined4 *)(param_2 + 0x28),
                               *(undefined4 *)(param_2 + 0x2c),uVar2,param_2 + 0x38,param_2 + 0x3c);
          if (uVar2 != 0) {
            return uVar2;
          }
          uVar3 = *(uint *)(param_2 + 0x30);
          uVar2 = *(uint *)(param_2 + 0x3c);
        }
        *(uint *)(param_2 + 0x30) = uVar3 | 0x40000;
        iVar10 = *(int *)(param_1 + 0x68);
        uVar7 = *(uint *)(iVar10 + 0x1c);
        uVar8 = uVar7 - uVar2;
        if (uVar5 <= uVar7 - uVar2) {
          uVar8 = uVar5;
        }
        uVar4 = uVar2;
        if ((uVar3 & 0x100000) == 0) goto LAB_2c4f31a4;
LAB_2c4f3144:
        if (uVar7 < uVar8 + uVar4) {
          return 0xffffffac;
        }
        uVar2 = FUN_2c4f29f8(param_1,param_2 + 8,iVar9,uVar7,
                             uVar1 | (uint)*(ushort *)(param_2 + 4) << 10,uVar4,param_3,uVar8);
      }
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar5 = uVar5 - uVar8;
      param_3 = param_3 + uVar8;
      uVar2 = *(int *)(param_2 + 0x34) + uVar8;
      *(uint *)(param_2 + 0x34) = uVar2;
      *(uint *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + uVar8;
    } while (uVar5 != 0);
  }
  return uVar6;
}

