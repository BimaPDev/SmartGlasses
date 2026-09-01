/* FUN_1009efe8 @ 0x1009efe8 */

undefined4 FUN_1009efe8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int *piVar8;
  
  FUN_1011dbf4(DAT_1009f10c,0xffffffff,param_3,param_4,param_4);
  iVar2 = FUN_1009ef1c(param_1);
  iVar1 = DAT_1009f114;
  if (iVar2 == 0) {
    iVar2 = 0;
    do {
      piVar8 = (int *)(iVar2 * 0xc + DAT_1009f114);
      bVar7 = *(byte *)((int)piVar8 + 10) & 3;
      if ((*(byte *)((int)piVar8 + 10) & 3) == 0) {
        iVar4 = FUN_1011ea10(param_1);
        iVar4 = thunk_FUN_1009f30c(iVar4 + 1,DAT_1009f118);
        *piVar8 = iVar4;
        if (iVar4 == 0) break;
        iVar5 = FUN_1011ea10(param_1);
        FUN_1011ea48(iVar4,bVar7,iVar5 + 1);
        if (0 < (int)param_3) {
          iVar4 = thunk_FUN_1009f30c(param_3,DAT_1009f118);
          piVar8[1] = iVar4;
          if (iVar4 == 0) {
            FUN_1012d1f4(*piVar8);
            break;
          }
          FUN_1011ea48(iVar4,bVar7,param_3);
        }
        iVar4 = iVar1 + iVar2 * 0xc;
        uVar3 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
        uVar6 = FUN_1011ea10(param_1);
        FUN_1011ea40(uVar3,param_1,uVar6);
        FUN_1011ea40(*(undefined4 *)(iVar4 + 4),param_2,param_3);
        *(short *)(iVar4 + 8) = (short)param_3;
        *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc | 1;
        goto LAB_1009f016;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xf);
    FUN_100a5b78((DAT_1009f120 - DAT_1009f11c) * 0x20 & 0xff00U | 0xa80031,DAT_1009f128,DAT_1009f124
                );
    uVar6 = FUN_1007378c(param_1,param_2,param_3);
  }
  else {
    uVar6 = *(undefined4 *)(iVar2 + 4);
    if (*(ushort *)(iVar2 + 8) == param_3) {
      FUN_1011ea40(uVar6,param_2);
    }
    else {
      if (0 < (int)param_3) {
        uVar3 = thunk_FUN_1009f30c(param_3,DAT_1009f110);
        *(undefined4 *)(iVar2 + 4) = uVar3;
        FUN_1011ea40(uVar3,param_2,param_3);
      }
      *(short *)(iVar2 + 8) = (short)param_3;
      FUN_1012d1f4(uVar6);
    }
LAB_1009f016:
    uVar6 = 0;
  }
  FUN_1009ef94();
  return uVar6;
}

