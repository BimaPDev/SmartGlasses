/* FUN_2c4d0d4c @ 0x2c4d0d4c */

void FUN_2c4d0d4c(int param_1,uint *param_2,int *param_3,int param_4,byte param_5,int param_6,
                 int param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  param_6 = param_6 + param_7 * 0x10;
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar5 = param_2[1];
    uVar7 = 9 - uVar5;
    uVar6 = 0;
    if ((int)uVar7 < 1) {
      uVar7 = *param_2;
    }
    else {
      if (uVar7 != 0x20) {
        uVar6 = *param_2 << (uVar7 & 0xff);
      }
      uVar7 = FUN_2c4d74d4(param_2 + 2);
      *param_2 = uVar7;
      uVar5 = param_2[1] + 0x20;
    }
    iVar9 = param_5 - 0x5a;
    param_2[1] = uVar5 - 9;
    uVar8 = *(uint *)(DAT_2c4d0e4c + 0x24);
    *(undefined1 *)(param_1 + 0x88) = 1;
    iVar4 = ((uVar7 >> (uVar5 - 9 & 0xff) | uVar6) & uVar8) - 0x100;
  }
  else {
    uVar7 = 0;
    iVar9 = *param_3;
    uVar5 = *(uint *)(DAT_2c4d0e4c + 8);
    uVar6 = param_2[1];
    while( true ) {
      uVar3 = 2 - uVar6;
      uVar8 = 0;
      if ((int)uVar3 < 1) {
        uVar2 = *param_2;
        uVar3 = uVar6;
      }
      else {
        if (uVar3 == 0x20) {
          uVar8 = 0;
        }
        else {
          uVar8 = *param_2 << (uVar3 & 0xff);
        }
        uVar2 = FUN_2c4d74d4(param_2 + 2);
        *param_2 = uVar2;
        uVar3 = param_2[1] + 0x20;
      }
      uVar6 = uVar3 - 2;
      param_2[1] = uVar6;
      uVar1 = *(ushort *)(iVar9 + uVar7 * 8 + ((uVar2 >> (uVar6 & 0xff) | uVar8) & uVar5) * 2);
      if ((int)((uint)uVar1 << 0x1f) < 0) break;
      uVar7 = (uint)(uVar1 >> 2);
    }
    if ((int)((uint)uVar1 << 0x1e) < 0) {
      param_2[1] = uVar3 - 1;
    }
    iVar9 = *(int *)(param_1 + 0x84);
    iVar4 = (uVar1 >> 2) - 0x3c;
  }
  *(int *)(param_1 + 0x84) = iVar4 + iVar9;
  *(short *)(param_4 + param_6 * 2) = (short)(iVar4 + iVar9);
  *(undefined1 *)(param_1 + param_6 + 4) = 1;
  FUN_2c4cb8c8(param_2[10],1,DAT_2c4d0e50);
  return;
}

