/* thunk_FUN_1000ad9c @ 0x1013163e */

void thunk_FUN_1000ad9c(uint param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uStack_28;
  int iStack_24;
  
  iStack_24 = *DAT_1000afa8;
  uStack_28 = param_1;
  uVar2 = FUN_10115464();
  iVar3 = FUN_1013cd52();
  if (-1 < iVar3) {
    FUN_10115194(uVar2,0xffffffff);
  }
  piVar1 = DAT_1000afd8;
  FUN_10119dc2(DAT_1000afac);
  uVar6 = param_1 >> 4;
  FUN_10119dc2(DAT_1000afb0,uVar6,param_1 & 0xf,*(byte *)((int)piVar1 + 10) & 0xf);
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    if (uVar6 == *(byte *)((int)piVar1 + 10) >> 4) goto LAB_1000ae2c;
    FUN_10119dc2(DAT_1000afb4);
    FUN_10119dc2(DAT_1000afb8,*(byte *)((int)piVar1 + 10) >> 4,uVar6);
  }
switchD_1000ae34_default:
  if (-1 < iVar3) {
    FUN_10115194(uVar2,iVar3);
  }
  if (*DAT_1000afa8 == iStack_24) {
    return;
  }
  iVar4 = FUN_1013cdc0();
LAB_1000ae2c:
  switch(param_1 & 0xf) {
  case 1:
    if ((*(byte *)((int)piVar1 + 10) & 0xf) == 3) {
      FUN_100be7e0(4,1);
      FUN_1011dc0a(DAT_1000afbc,2000);
    }
    goto switchD_1000ae34_default;
  case 2:
    if (((*(byte *)((int)piVar1 + 10) & 0xf) == 6) || ((char)piVar1[2] == '\0'))
    goto switchD_1000ae34_default;
    break;
  case 3:
    if (param_2 != 2) {
      *(bool *)((int)piVar1 + 9) = param_2 == 1;
      FUN_100bf548();
    }
    if (*piVar1 != 0) {
      FUN_1000b24c(*piVar1,param_2 == 0);
    }
    goto switchD_1000ae34_default;
  case 4:
    FUN_1000b3d0(iVar4,param_2 & 0xff);
    goto switchD_1000ae34_default;
  case 5:
    FUN_1000b6e0(iVar4,param_2 & 0xff);
    goto switchD_1000ae34_default;
  case 6:
    if (param_2 == 0) {
      if (*(char *)((int)piVar1 + 9) != '\0') {
        FUN_1000b1e0();
      }
      goto switchD_1000ae34_default;
    }
    *(byte *)((int)piVar1 + 10) = *(byte *)((int)piVar1 + 10) & 0xf0 | 5;
    *(undefined1 *)(piVar1 + 2) = 1;
    uVar6 = FUN_10131ba8();
    if (uVar6 < 2) {
      iVar4 = FUN_10131b86(*piVar1,2);
      if (iVar4 != 0) {
        FUN_10119dc2(DAT_1000afc0);
        FUN_10119dc2(DAT_1000afc4);
      }
      goto switchD_1000ae34_default;
    }
    break;
  case 7:
    iVar4 = FUN_1000a684();
    if (iVar4 != 0) goto LAB_1000af5c;
    iVar4 = *piVar1;
    uVar6 = param_2;
    goto LAB_1000af0a;
  case 8:
    FUN_10119dc2(DAT_1000afac);
    FUN_10119dc2(DAT_1000afc8,param_2);
    if (((*piVar1 != 0) && (uVar6 = FUN_1000a684(), uVar6 == 0)) &&
       (uStack_28 = uVar6, iVar4 = FUN_1000ad34(&uStack_28), iVar4 == 0)) {
      iVar4 = *piVar1;
      uVar6 = uStack_28;
      if (uStack_28 == 0xffffffff) {
LAB_1000af4a:
        FUN_1000a744(iVar4);
      }
      else {
LAB_1000af0a:
        FUN_1000a7cc(iVar4,uVar6);
      }
    }
    goto switchD_1000ae34_default;
  case 9:
    iVar4 = FUN_1000a684();
    if (iVar4 == 0) {
      iVar4 = *piVar1;
      goto LAB_1000af4a;
    }
LAB_1000af5c:
    FUN_1000acd8(param_2);
    goto switchD_1000ae34_default;
  case 10:
    FUN_10009c08();
    goto switchD_1000ae34_default;
  case 0xb:
    FUN_10119dc2(DAT_1000afac);
    uVar5 = DAT_1000afcc;
    goto LAB_1000af6e;
  case 0xc:
    FUN_10119dc2(DAT_1000afac);
    uVar5 = DAT_1000afd0;
LAB_1000af6e:
    FUN_10119dc2(uVar5,param_2);
    goto switchD_1000ae34_default;
  case 0xd:
    if (*(char *)((int)piVar1 + 9) != '\0') {
      FUN_10119dc2(DAT_1000afac);
      FUN_10119dc2(DAT_1000afd4);
      FUN_100bee34();
    }
  default:
    goto switchD_1000ae34_default;
  }
  FUN_1000a98c();
  goto switchD_1000ae34_default;
}

