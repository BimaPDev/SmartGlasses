/* FUN_100fe840 @ 0x100fe840 */

uint FUN_100fe840(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1[4] + 0xc);
  uVar7 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 != 0) {
    uVar1 = *param_2;
    if (param_3 != 0) {
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    }
    uVar6 = 0;
    uVar3 = uVar7;
    do {
      while( true ) {
        uVar4 = uVar3 + uVar6;
        iVar2 = param_1[4] + ((uVar4 & 0xfffffffe) + (uVar4 >> 1)) * 4;
        uVar5 = *(uint *)(iVar2 + 0x10);
        uVar8 = *(uint *)(iVar2 + 0x14);
        uVar4 = uVar4 >> 1;
        uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18;
        if ((uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18) <= uVar1) break;
        uVar3 = uVar4;
        if (uVar4 <= uVar6) goto LAB_100fe896;
      }
      if (uVar1 <= uVar8) {
        uVar7 = *(uint *)(iVar2 + 0x18);
        uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18;
        if (param_3 == 0) {
          return uVar7;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        param_1[7] = uVar1;
        uVar3 = *(uint *)(*param_1 + 0x10);
        param_1[9] = uVar4;
        if ((uVar3 <= uVar7) || (uVar7 == 0)) goto LAB_100fe8ac;
        param_1[8] = uVar7;
        goto LAB_100fe8ba;
      }
      uVar6 = uVar4 + 1;
    } while (uVar6 < uVar3);
LAB_100fe896:
    if ((param_3 == 0) || ((uVar8 < uVar1 && (uVar4 = uVar4 + 1, uVar7 == uVar4)))) {
      return 0;
    }
    param_1[7] = uVar1;
    param_1[9] = uVar4;
    *(undefined1 *)(param_1 + 6) = 1;
LAB_100fe8ac:
    iVar2 = FUN_100fe7e4();
    if (*(char *)(iVar2 + 0x18) == '\0') {
      uVar1 = *(uint *)(iVar2 + 0x1c);
      uVar7 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x1c);
      uVar7 = *(uint *)(iVar2 + 0x20);
    }
LAB_100fe8ba:
    *param_2 = uVar1;
  }
  return uVar7;
}

