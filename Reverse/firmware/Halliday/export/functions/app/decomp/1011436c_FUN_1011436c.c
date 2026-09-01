/* FUN_1011436c @ 0x1011436c */

uint FUN_1011436c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1[3];
  uVar5 = (uVar3 & 3) >> 1;
  if (-1 < (int)(uVar3 << 0x1e)) {
    if ((int)(uVar3 << 0x1d) < 0) goto LAB_101143dc;
    iVar2 = *param_2;
    if (iVar2 == 0) {
      iVar2 = param_1[2];
      *param_2 = iVar2;
    }
    if ((int)(uVar3 << 0x1f) < 0) {
      iVar4 = param_1[2];
      if (iVar4 == 0) {
        FUN_10119dc2(DAT_10114430,DAT_1011442c,DAT_10114428,0x14e,uVar3 << 0x1f,param_2,iVar2,0,
                     param_4);
        FUN_1011a1f0(DAT_10114428,0x14e,iVar2,iVar4);
      }
      uVar3 = 2;
      *param_2 = param_1[2];
    }
    else {
      uVar3 = 1;
    }
    iVar2 = *param_2;
    if (iVar2 == 0) {
      uVar5 = 0xffffffea;
      goto LAB_101143dc;
    }
    if (*(int *)(DAT_10114434 + 8) == iVar2) {
      bVar1 = FUN_1013c70e();
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
    iVar4 = *(int *)(iVar2 + 0x130);
    if (-1 < iVar4 << 0x1f) {
      uVar5 = 0xffffffed;
      goto LAB_101143dc;
    }
    if (iVar4 << 0x1d < 0) {
      if (bVar1 != 0) {
LAB_101143ee:
        *param_1 = 0;
        if (*(undefined4 **)(iVar2 + 0x11c) == (undefined4 *)0x0) {
          *(undefined4 **)(iVar2 + 0x118) = param_1;
          *(undefined4 **)(iVar2 + 0x11c) = param_1;
        }
        else {
          **(undefined4 **)(iVar2 + 0x11c) = param_1;
          *(undefined4 **)(iVar2 + 0x11c) = param_1;
        }
        FUN_1013ca90(iVar2);
        param_1[3] = param_1[3] | 4;
        param_1[2] = *param_2;
        return uVar3;
      }
    }
    else if (-1 < iVar4 << 0x1c) goto LAB_101143ee;
  }
  uVar5 = 0xfffffff0;
LAB_101143dc:
  *param_2 = 0;
  return uVar5;
}

