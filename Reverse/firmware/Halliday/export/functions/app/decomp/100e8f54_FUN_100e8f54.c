/* FUN_100e8f54 @ 0x100e8f54 */

int FUN_100e8f54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  piVar2 = DAT_100e90bc;
  puVar1 = DAT_100e90b8;
  uVar6 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar4 = 0;
  puVar3 = DAT_100e90b8;
  do {
    if (*puVar3 <= uVar4) {
      if ((uVar8 & uVar6) == 0xffffffff) {
        uVar6 = (DAT_100e90c4 - DAT_100e90c0) * 0x20 & 0xff00;
        FUN_100a5b78(uVar6 | 0x2a40011,DAT_100e90cc,DAT_100e90c8);
        piVar2 = DAT_100e90bc;
        uVar6 = DAT_100e90d0 | uVar6;
        for (uVar8 = 0; uVar8 < *puVar1; uVar8 = uVar8 + 1) {
          FUN_100a5b78(uVar6,DAT_100e90cc,DAT_100e90dc,uVar8,
                       *(undefined4 *)(*(int *)(*piVar2 + uVar8 * 4) + 0x34));
        }
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_100ec360(param_1,param_2,param_3);
        if (iVar5 == 0) {
          FUN_100a5b78(DAT_100e90e0 | (DAT_100e90c4 - DAT_100e90c0) * 0x20 & 0xff00U,DAT_100e90cc,
                       DAT_100e90e4);
        }
        else {
          if (param_4 != 0) {
            *(undefined4 *)(iVar5 + 0x3c) = 1;
          }
          piVar2 = DAT_100e90bc;
          if (uVar8 == 0xffffffff) {
            FUN_100e8ec0(*(undefined4 *)(*DAT_100e90bc + uVar6 * 4),1);
            *(int *)(*piVar2 + uVar6 * 4) = iVar5;
          }
          else {
            *(int *)(*DAT_100e90bc + uVar8 * 4) = iVar5;
          }
        }
      }
      return iVar5;
    }
    iVar7 = uVar4 * 4;
    iVar5 = *(int *)(*piVar2 + uVar4 * 4);
    if (iVar5 == 0) {
      if (uVar8 == 0xffffffff) {
        uVar8 = uVar4;
      }
    }
    else {
      iVar5 = FUN_1011ea18(param_1,*(undefined4 *)(iVar5 + 0x34));
      if (iVar5 == 0) {
        iVar5 = *(int *)(*piVar2 + iVar7);
        if (param_4 != 0) {
          *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
        }
        if ((param_5 == 0) &&
           (iVar5 = FUN_1011ea18(param_3,*(undefined4 *)(iVar5 + 0x38)), iVar5 != 0)) {
          FUN_100a5b78(DAT_100e90d4 | (DAT_100e90c4 - DAT_100e90c0) * 0x20 & 0xff00U,DAT_100e90cc,
                       DAT_100e90d8,*(undefined4 *)(*(int *)(*piVar2 + iVar7) + 0x38),param_3);
          FUN_100eb308(*(undefined4 *)(*piVar2 + iVar7),param_3);
        }
        return *(int *)(*piVar2 + iVar7);
      }
      puVar3 = DAT_100e90b8;
      if (*(int *)(*(int *)(*piVar2 + iVar7) + 0x3c) == 0) {
        uVar6 = uVar4;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

