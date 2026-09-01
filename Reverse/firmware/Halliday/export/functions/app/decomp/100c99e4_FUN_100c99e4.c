/* FUN_100c99e4 @ 0x100c99e4 */

undefined4 FUN_100c99e4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_100c99ec;
  piVar1 = DAT_100c419c;
  if (DAT_100c99ec == 0) {
    FUN_100a5b78(DAT_100c4190 | (DAT_100c418c - DAT_100c4188) * 0x20 & 0xff00U,DAT_100c4198,
                 DAT_100c4194);
LAB_100c40b2:
    uVar2 = 0;
  }
  else {
    iVar7 = *DAT_100c419c;
    FUN_100c3014(0xffffffff,0xffffffff);
    if (*DAT_100c41a0 < 0xf) {
      iVar3 = *piVar1;
      if (iVar3 != 0) {
        iVar4 = 0xf;
        if (iVar7 != 0) {
          while (iVar4 = iVar4 + -1, iVar4 != 0) {
            iVar6 = *(int *)(iVar7 + 0xc);
            if (iVar7 == iVar5) {
              iVar5 = *(int *)(iVar7 + 0x10);
              if (iVar6 == 0) {
                if (iVar5 != 0) goto LAB_100c414c;
                *piVar1 = 0;
              }
              else {
                *(int *)(iVar6 + 0x10) = iVar5;
                if (iVar5 == 0) {
                  if (iVar3 != iVar7) goto LAB_100c415e;
                }
                else {
LAB_100c414c:
                  *(int *)(iVar5 + 0xc) = iVar6;
                  if ((iVar3 != iVar7) || (iVar6 == 0)) goto LAB_100c415e;
                }
                *piVar1 = iVar6;
              }
LAB_100c415e:
              iVar5 = DAT_100c4188;
              *(undefined4 *)(iVar7 + 0xc) = 0;
              *(undefined4 *)(iVar7 + 0x10) = 0;
              FUN_100a5b78(DAT_100c41bc | (DAT_100c418c - iVar5) * 0x20 & 0xff00U,DAT_100c4198,
                           DAT_100c41c0);
              break;
            }
            iVar7 = iVar6;
            if (iVar6 == 0) {
              FUN_100a5b78(DAT_100c41b4 | (DAT_100c418c - DAT_100c4188) * 0x20 & 0xff00U,
                           DAT_100c4198,DAT_100c41b8);
              FUN_100c3008();
              return 0xfffffffd;
            }
          }
        }
        FUN_100c3008();
        goto LAB_100c40b2;
      }
      FUN_100a5b78(DAT_100c41ac | (DAT_100c418c - DAT_100c4188) * 0x20 & 0xff00U,DAT_100c4198,
                   DAT_100c41b0);
    }
    else {
      FUN_100a5b78(DAT_100c41a4 | (DAT_100c418c - DAT_100c4188) * 0x20 & 0xff00U,DAT_100c4198,
                   DAT_100c41a8);
    }
    FUN_100c3008();
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}

