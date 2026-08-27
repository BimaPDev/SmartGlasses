/* FUN_1407c404 @ 0x1407c404 */

undefined1 FUN_1407c404(int param_1,int *param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar8 = *(byte **)(param_1 + 0x38);
  if (param_2 == (int *)0x0) {
    uVar7 = 4;
  }
  else {
    if (param_2[1] == 0) {
      uVar4 = 4;
      uVar7 = 2;
    }
    else if (*(char *)(param_2[1] + 4) == '\0') {
      uVar4 = 4;
      uVar7 = 2;
    }
    else {
      uVar4 = 6;
      uVar7 = 4;
    }
    if ((param_2[2] != 0) && (*(char *)(param_2[2] + 4) != '\0')) {
      uVar7 = uVar4;
    }
    if ((*param_2 != 0) && (*(char *)(*param_2 + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[3] != 0) && (*(char *)(param_2[3] + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[4] != 0) && (*(char *)(param_2[4] + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[7] != 0) && (*(char *)(param_2[7] + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[5] != 0) && (*(char *)(param_2[5] + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[6] != 0) && (*(char *)(param_2[6] + 4) != '\0')) {
      uVar7 = uVar7 + 2;
    }
    if ((param_2[8] == 0) || (*(char *)(param_2[8] + 4) == '\0')) {
      if (uVar7 < 4) {
        uVar7 = 4;
      }
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
  pbVar3 = (byte *)FUN_140759b8(uVar7);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = *pbVar3 & 0xf0 | 3;
    *pbVar3 = *pbVar3 & 0xf | *pbVar8 & 0xf0;
    bVar1 = pbVar8[1];
    pbVar3[3] = param_3;
    pbVar3[1] = (byte)(((uint)bVar1 << 0x1a) >> 0x1a);
    pbVar3[2] = 7;
    pbVar8 = pbVar3 + 2;
    if (param_2 != (int *)0x0) {
      if ((*param_2 != 0) && (*(char *)(*param_2 + 4) != '\0')) {
        pbVar3[2] = 1;
        pbVar3[3] = *(byte *)(*param_2 + 4);
        pbVar8 = pbVar3 + 4;
      }
      pbVar6 = pbVar8;
      if ((param_2[1] != 0) && (*(char *)(param_2[1] + 4) != '\0')) {
        *pbVar8 = 7;
        pbVar6 = pbVar8 + 2;
        pbVar8[1] = *(byte *)(param_2[1] + 4);
      }
      pbVar8 = pbVar6;
      if ((param_2[2] != 0) && (*(char *)(param_2[2] + 4) != '\0')) {
        *pbVar6 = 4;
        pbVar8 = pbVar6 + 2;
        pbVar6[1] = *(byte *)(param_2[2] + 4);
      }
      pbVar6 = pbVar8;
      if ((param_2[3] != 0) && (*(char *)(param_2[3] + 4) != '\0')) {
        *pbVar8 = 8;
        pbVar6 = pbVar8 + 2;
        pbVar8[1] = *(byte *)(param_2[3] + 4);
      }
      pbVar8 = pbVar6;
      if ((param_2[4] != 0) && (*(char *)(param_2[4] + 4) != '\0')) {
        *pbVar6 = 2;
        pbVar8 = pbVar6 + 2;
        pbVar6[1] = *(byte *)(param_2[4] + 4);
      }
      pbVar6 = pbVar8;
      if ((param_2[7] != 0) && (*(char *)(param_2[7] + 4) != '\0')) {
        *pbVar8 = 3;
        pbVar6 = pbVar8 + 2;
        pbVar8[1] = *(byte *)(param_2[7] + 4);
      }
      pbVar8 = pbVar6;
      if ((param_2[5] != 0) && (*(char *)(param_2[5] + 4) != '\0')) {
        *pbVar6 = 6;
        pbVar8 = pbVar6 + 2;
        pbVar6[1] = *(byte *)(param_2[5] + 4);
      }
      pbVar6 = pbVar8;
      if ((param_2[6] != 0) && (*(char *)(param_2[6] + 4) != '\0')) {
        *pbVar8 = 5;
        pbVar6 = pbVar8 + 2;
        pbVar8[1] = *(byte *)(param_2[6] + 4);
      }
      puVar5 = (undefined4 *)param_2[8];
      if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 1) != '\0')) {
        *pbVar6 = *(byte *)*puVar5;
        pbVar6[1] = *(byte *)(param_2[8] + 4);
      }
    }
    uVar2 = FUN_1408e628(*(undefined4 *)(param_1 + 0x28),pbVar3,uVar7,0);
    FUN_14075b28(pbVar3);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1407c5d8);
}

