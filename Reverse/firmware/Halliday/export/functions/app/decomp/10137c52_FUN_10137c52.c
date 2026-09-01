/* FUN_10137c52 @ 0x10137c52 */

uint FUN_10137c52(int param_1,int param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return 0xffffffea;
  }
  if (*(char *)(param_1 + 0x41) == '\x04') {
    uVar1 = *(ushort *)(param_2 + 0xc);
    if (*(ushort *)(param_1 + 0x3e) < uVar1) {
      return 0xffffff86;
    }
    if (*(char *)(*(int *)(param_1 + 0x30) + 0x98) == '\x02') {
      if (*(char *)(param_1 + 0x43) == '\0') {
        return 0xfffffff0;
      }
      *(char *)(param_1 + 0x43) = *(char *)(param_1 + 0x43) + -1;
    }
    else if (*(char *)(*(int *)(param_1 + 0x30) + 0x99) == '\x01') {
      return 0xfffffff0;
    }
    if (uVar1 < 0x80) {
      pbVar2 = (byte *)FUN_100c1f10(param_2 + 8,3);
      pbVar2[2] = (*(char *)(param_2 + 0xc) + -3) * '\x02' | 1;
    }
    else {
      pbVar2 = (byte *)FUN_100c1f10(param_2 + 8,4);
      *(short *)(pbVar2 + 2) = (*(short *)(param_2 + 0xc) + -4) * 2;
    }
    *pbVar2 = *(char *)(param_1 + 0x40) << 2 |
              (*(char *)(*(int *)(param_1 + 0x30) + 0x97) == '\x01') * '\x02' | 1;
    pbVar2[1] = 0xef;
    uVar3 = FUN_100df30c(2,*(undefined4 *)(param_2 + 8));
    FUN_101376b2(param_2,uVar3);
    uVar5 = (uint)*(ushort *)(param_2 + 0xc);
    iVar4 = FUN_101376b8(*(undefined4 *)(param_1 + 0x30),param_2,0);
    if (iVar4 < 0) {
      uVar5 = 0xfffffffb;
    }
    return uVar5;
  }
  return 0xffffff80;
}

