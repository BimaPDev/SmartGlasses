/* FUN_100020b4 @ 0x100020b4 */

void FUN_100020b4(int param_1,uint *param_2,int param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    *(undefined1 *)((int)param_2 + 0x13) = 0;
    if (*(char *)(param_1 + 9) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    *param_2 = uVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    uVar3 = FUN_10003148(*(undefined4 *)(param_3 + 4));
    uVar5 = *(uint *)(param_3 + 8);
    uVar3 = (uVar3 & 0x7ff) >> 3;
    if (uVar5 == 0) {
      uVar5 = uVar3 * *(int *)(param_3 + 0xc);
    }
    sVar1 = *param_4;
    iVar4 = *(int *)(param_3 + 0x18);
    sVar2 = param_4[1];
    param_2[5] = uVar5 & 0xffff;
    param_2[4] = (uVar5 & 0xffff) * (int)sVar2 + uVar3 * (int)sVar1 + iVar4;
    uVar5 = FUN_10003178();
    param_2[4] = uVar5;
    if ((uVar5 & 3) == 0) {
      uVar5 = 0;
      if ((param_2[5] & 3) == 0) {
        uVar5 = (uint)(uVar3 * (int)param_4[2] - param_2[5] == 0);
      }
    }
    else {
      uVar5 = 0;
    }
    iVar4 = *(int *)(param_3 + 4);
    *param_2 = uVar5 << 0x1d | 0x200;
  }
  if (iVar4 == 0x20) goto LAB_10002124;
  uVar3 = *param_2;
  if (iVar4 == 0x80) {
    uVar3 = uVar3 | 0x2000;
LAB_1000211e:
    uVar3 = uVar3 | 0xc;
  }
  else {
    if (iVar4 == 8) goto LAB_1000211e;
    uVar3 = uVar3 | 8;
  }
  *param_2 = uVar3;
LAB_10002124:
  *(short *)(param_2 + 0xb) = param_4[2];
  *(short *)((int)param_2 + 0x2e) = param_4[3];
  return;
}

