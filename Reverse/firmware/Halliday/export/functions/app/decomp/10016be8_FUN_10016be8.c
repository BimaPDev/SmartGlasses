/* FUN_10016be8 @ 0x10016be8 */

void FUN_10016be8(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_10016de0;
  uStack_18 = param_1;
  iVar1 = FUN_10015d78();
  if (iVar1 == 0) {
switchD_10016c0c_caseD_da:
    uVar3 = 0xffffffff;
    goto LAB_10016ce8;
  }
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0xd6:
    iVar2 = FUN_101165e0();
    if (iVar2 != 0) {
      FUN_10116598(iVar1);
      *(undefined1 *)(iVar1 + 0x48) = 0;
    }
    uVar6 = *(uint *)(iVar1 + 0x44);
    *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xfe;
    if (0x3e < uVar6 - 1) {
      uVar4 = 1;
      *(undefined4 *)(iVar1 + 0x44) = 1;
      goto LAB_10016c46;
    }
    uVar5 = (DAT_10016de4 - DAT_10016de8) * 0x20 & 0xff00;
    if (uVar6 == 1) {
      *(undefined4 *)(iVar1 + 0x44) = 2;
      uStack_18 = uStack_18 & 0xffffff;
      FUN_100a4b88(iVar1 + 0x38,(int)&uStack_18 + 3);
      *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xfd | (uStack_18._3_1_ & 1) << 1;
      FUN_100174e0(iVar1,1);
      uVar5 = uVar5 | 0x7e0000;
      uVar3 = DAT_10016dec;
    }
    else if (uVar6 < 0x10) {
      *(undefined4 *)(iVar1 + 0x44) = 0x10;
      FUN_10017474(iVar1,1);
      uVar5 = uVar5 | 0x840000;
      uVar3 = DAT_10016df4;
    }
    else {
      *(undefined4 *)(iVar1 + 0x44) = 0x40;
      FUN_100173c0(iVar1,1);
      uVar5 = uVar5 | 0x8a0000;
      uVar3 = DAT_10016df8;
    }
    FUN_100a5b78(uVar5 | 0x31,DAT_10016df0,uVar3);
    break;
  case 0xd7:
    iVar2 = FUN_101165e0();
    if (iVar2 != 0) {
      FUN_10116598(iVar1);
      *(undefined1 *)(iVar1 + 0x48) = 0;
    }
    iVar2 = *(int *)(iVar1 + 0x44);
    if (iVar2 == 2) {
      if (-1 < (int)((uint)*(byte *)(iVar1 + 0x49) << 0x1e)) {
        FUN_10016460(iVar1);
        FUN_10017474(iVar1,1);
        *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) | 1;
        break;
      }
      uVar3 = 4;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 == 8) {
          FUN_10016328(iVar1);
        }
        else {
          if (iVar2 == 0x10) {
            uVar3 = 0x20;
            goto LAB_10016d1c;
          }
          if (iVar2 != 0x20) {
            if (iVar2 == 0x40) {
              uVar3 = 0x80;
            }
            else {
              if (iVar2 != 0x80) {
                if (iVar2 != 0x100) break;
                FUN_100164b8(iVar1);
                goto LAB_10016d50;
              }
              uVar3 = 0x100;
            }
            *(undefined4 *)(iVar1 + 0x44) = uVar3;
            FUN_100173e4(iVar1,1);
            break;
          }
          FUN_100162cc(iVar1);
        }
LAB_10016d50:
        uVar4 = 1;
        *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) | 1;
        goto LAB_10016c46;
      }
      uVar3 = 8;
    }
LAB_10016d1c:
    uVar4 = 0;
    *(undefined4 *)(iVar1 + 0x44) = uVar3;
LAB_10016c46:
    FUN_10017474(iVar1,uVar4);
    break;
  case 0xd8:
    uVar3 = 1;
    goto LAB_10016ce0;
  case 0xd9:
    goto switchD_10016c0c_caseD_d9;
  default:
    goto switchD_10016c0c_caseD_da;
  case 0xdf:
    *DAT_10016dfc = 0;
    FUN_100169f4(iVar1,0);
    goto LAB_10016daa;
  case 0xe0:
    FUN_100169f4(iVar1,0);
    if (*DAT_10016dfc < 3) {
      *DAT_10016dfc = *DAT_10016dfc + 1;
      FUN_10016384(iVar1,10);
    }
LAB_10016daa:
    FUN_10016a44();
    goto LAB_10016ce6;
  case 0xe1:
    FUN_10015f88(1);
    goto LAB_10016ce6;
  }
  FUN_10116500(iVar1,500);
LAB_10016ce6:
  while( true ) {
    uVar3 = 0;
LAB_10016ce8:
    if (*DAT_10016de0 == local_14) break;
    FUN_1013cdc0(uVar3);
switchD_10016c0c_caseD_d9:
    uVar3 = 0;
LAB_10016ce0:
    FUN_100167c0(iVar1,uVar3);
  }
  return;
}

