/* FUN_100fad24 @ 0x100fad24 */

uint FUN_100fad24(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 6;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 4);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == DAT_100fad1c) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x9c) + 0x28) << 0xb < 0) {
    iVar6 = *(int *)(param_1 + 4);
    uVar2 = *(uint *)(param_1 + 0xc);
    uStack_2c = 0;
    if ((((iVar6 == 0) || (*(uint *)(iVar6 + 0x10) <= uVar2)) || (-1 < *(int *)(iVar6 + 8) << 0x1c))
       || (pcVar7 = *(code **)(*(int *)(iVar6 + 0x21c) + 0x84), pcVar7 == (code *)0x0))
    goto LAB_100fab52;
    iVar5 = (*pcVar7)(iVar6,uVar2,&uStack_3c,&uStack_38,auStack_34);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x48);
      goto LAB_100fab52;
    }
    iVar5 = FUN_100f9340(iVar6,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar6 + 0x21c);
      do {
        iVar1 = FUN_100fa624(iVar6,uStack_3c,
                             *(uint *)(*(int *)(param_1 + 0x9c) + 0x28) & 0xffefffff | 4);
        if ((iVar1 != 0) ||
           (iVar1 = (**(code **)(iVar5 + 0x88))
                              (iVar6,uStack_38,param_1,*(undefined4 *)(iVar6 + 0x54)), iVar1 != 0))
        {
          iVar5 = *(int *)(iVar6 + 0x54);
          if (iVar5 == 0) goto LAB_100faca8;
          iVar3 = *(int *)(iVar5 + 4);
          iVar6 = *(int *)(iVar3 + 0x54);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
          if (iVar6 == 0) goto LAB_100faca8;
          goto LAB_100fac92;
        }
      } while (((uVar2 < *(uint *)(iVar6 + 0x10)) && (*(int *)(iVar6 + 8) << 0x1c < 0)) &&
              ((pcVar7 = *(code **)(*(int *)(iVar6 + 0x21c) + 0x84), pcVar7 != (code *)0x0 &&
               (iVar3 = (*pcVar7)(iVar6,uVar2,&uStack_3c,&uStack_38,auStack_34), iVar3 != 0))));
      iVar5 = *(int *)(iVar6 + 0x54);
      *(int *)(param_1 + 0x48) = DAT_100fad1c;
      if (iVar5 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar5 + 4);
      iVar6 = *(int *)(iVar3 + 0x54);
      iVar8 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if (iVar6 == 0) {
        return 0;
      }
LAB_100fac92:
      if (iVar5 == iVar6) {
        *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar5 + 8);
      }
      else {
        do {
          iVar3 = iVar6;
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 == 0) goto joined_r0x100faca6;
        } while (iVar5 != iVar6);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
      }
      if (*(code **)(iVar5 + 0x14) != (code *)0x0) {
        (**(code **)(iVar5 + 0x14))(iVar5);
      }
      FUN_100f8a54(iVar5);
      (**(code **)(iVar8 + 8))(iVar8,iVar5);
joined_r0x100faca6:
      if (iVar1 == 0) {
        return 0;
      }
    }
LAB_100faca8:
    *(int *)(param_1 + 0x48) = DAT_100fad20;
  }
  else {
LAB_100fab52:
    if (iVar5 != DAT_100fad20) {
      if (iVar4 == 0) {
        return 7;
      }
      iVar6 = *(int *)(iVar4 + 0x94);
      while( true ) {
        if (iVar6 == 0) {
          return 7;
        }
        iVar1 = *(int *)(iVar6 + 8);
        if (iVar5 == *(int *)(iVar1 + 0x10)) break;
        iVar6 = *(int *)(iVar6 + 4);
      }
      goto LAB_100fab7a;
    }
  }
  iVar1 = *(int *)(iVar4 + 0x9c);
  iVar6 = *(int *)(iVar4 + 0x94);
  if (iVar1 == 0) {
    return 7;
  }
LAB_100fab7a:
  while( true ) {
    uVar2 = (**(code **)(iVar1 + 0x3c))(iVar1,param_1,param_2,0);
    if (uVar2 == 0) {
      return 0;
    }
    if ((uVar2 & 0xff) != 0x13) break;
    if (iVar4 == 0) {
      return uVar2;
    }
    iVar5 = *(int *)(iVar4 + 0x94);
    if (iVar6 != 0) {
      iVar5 = *(int *)(iVar6 + 4);
    }
    while( true ) {
      iVar6 = iVar5;
      if (iVar6 == 0) {
        return uVar2;
      }
      iVar1 = *(int *)(iVar6 + 8);
      if (*(int *)(param_1 + 0x48) == *(int *)(iVar1 + 0x10)) break;
      iVar5 = *(int *)(iVar6 + 4);
    }
  }
  return uVar2;
}

