/* FUN_100fe6d8 @ 0x100fe6d8 */

uint FUN_100fe6d8(int *param_1,uint *param_2,int param_3)

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
  uVar8 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 != 0) {
    uVar1 = *param_2;
    if (param_3 != 0) {
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    }
    uVar5 = 0;
    uVar3 = uVar8;
    do {
      while( true ) {
        uVar4 = uVar3 + uVar5;
        iVar2 = param_1[4] + ((uVar4 & 0xfffffffe) + (uVar4 >> 1)) * 4;
        uVar6 = *(uint *)(iVar2 + 0x10);
        uVar7 = *(uint *)(iVar2 + 0x14);
        uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18;
        uVar4 = uVar4 >> 1;
        uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18;
        if (uVar6 <= uVar1) break;
        uVar3 = uVar4;
        if (uVar4 <= uVar5) goto LAB_100fe730;
      }
      if (uVar1 <= uVar7) {
        uVar6 = uVar1 - uVar6;
        uVar8 = *(uint *)(iVar2 + 0x18);
        uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18;
        if (~uVar6 < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + uVar6;
        }
        if (param_3 == 0) {
          return uVar8;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        param_1[7] = uVar1;
        uVar3 = *(uint *)(*param_1 + 0x10);
        param_1[9] = uVar4;
        if ((uVar3 <= uVar8) || (uVar8 == 0)) goto LAB_100fe744;
        param_1[8] = uVar8;
        goto LAB_100fe750;
      }
      uVar5 = uVar4 + 1;
    } while (uVar5 < uVar3);
LAB_100fe730:
    if ((param_3 == 0) || ((uVar7 < uVar1 && (uVar4 = uVar4 + 1, uVar8 == uVar4)))) {
      return 0;
    }
    param_1[7] = uVar1;
    param_1[9] = uVar4;
    *(undefined1 *)(param_1 + 6) = 1;
LAB_100fe744:
    iVar2 = FUN_100fe648();
    if (*(char *)(iVar2 + 0x18) == '\0') {
      uVar1 = *(uint *)(iVar2 + 0x1c);
      uVar8 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x1c);
      uVar8 = *(uint *)(iVar2 + 0x20);
    }
LAB_100fe750:
    *param_2 = uVar1;
  }
  return uVar8;
}

