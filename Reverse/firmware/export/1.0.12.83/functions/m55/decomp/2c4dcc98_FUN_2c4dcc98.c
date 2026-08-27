/* FUN_2c4dcc98 @ 0x2c4dcc98 */

/* WARNING: Possible PIC construction at 0x2c4dcd12: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c4dcd16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4dcc98(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  
  iVar7 = param_1[0x66];
  if ((int)((uint)*(byte *)(iVar7 + 7) << 0x1f) < 0) {
    param_1[0x32] = 0x39;
    param_1[0x33] = 0x39;
    param_1[8] = 0xf0;
    param_1[9] = 0xf0;
    *(undefined1 *)(iVar7 + 6) = 1;
    *(undefined1 *)(param_1 + 0x59) = 1;
    uVar5 = 0;
LAB_2c4dccbe:
    *(undefined1 *)(iVar7 + 1) = uVar5;
  }
  else {
    if ((int)((uint)*(byte *)(iVar7 + 7) << 0x1e) < 0) {
      param_1[0x32] = 0x2a;
      param_1[0x33] = 0x2a;
      param_1[8] = 0xf0;
      param_1[9] = 0xf0;
      *(undefined1 *)(iVar7 + 6) = 1;
      *(undefined1 *)(param_1 + 0x59) = 1;
      uVar5 = 3;
      goto LAB_2c4dccbe;
    }
    *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(iVar7 + 6);
  }
  *(undefined1 *)((int)param_1 + 0x166) = 0x10;
  *(undefined1 *)((int)param_1 + 0x165) = 2;
  switch(*(undefined1 *)(iVar7 + 1)) {
  case 0:
    iVar7 = 16000;
    break;
  case 1:
    iVar7 = 32000;
    break;
  case 2:
    iVar7 = 0xac44;
    break;
  case 3:
    iVar7 = 48000;
    break;
  default:
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x242f,0x84,1);
    FUN_2c4e0504(_LAB_2c4dcd7c,0,0,0,_LAB_2c4dcd84,0x84,_DAT_2c4dcd80,0x1300,_LAB_2c4dcd78);
    goto LAB_2c4dcd06;
  }
  param_1[0x58] = iVar7;
LAB_2c4dcd06:
  pcVar6 = (char *)param_1[0x57];
  if (pcVar6 == (char *)0x0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = (uint)*pcVar6;
    iVar7 = 8;
    uVar9 = (int)uVar8 >> 0x1f;
    pcVar11 = pcVar6;
    do {
      pcVar11 = pcVar11 + 1;
      uVar10 = (uint)*pcVar11;
      if (uVar10 == 0) break;
      iVar7 = iVar7 + 8;
      uVar8 = uVar8 | uVar10;
      uVar9 = uVar9 | uVar10 | 0x40000000;
    } while (iVar7 != 0x40);
  }
  param_1[0x3e] = uVar8;
  param_1[0x3f] = uVar9;
  *(char *)((int)param_1 + 0x11e) = (char)param_1[0x59];
  if (*(char *)((int)param_1 + 0x166) == '\0') {
    *(undefined1 *)((int)param_1 + 0x166) = 0x10;
  }
  bVar2 = *(byte *)((int)param_1 + 0x166);
  if ((uint)*(byte *)((int)param_1 + 0x165) * 8 < (uint)bVar2) {
    *(char *)((int)param_1 + 0x165) = (char)((int)(bVar2 + 7) >> 3);
  }
  *(byte *)(param_1 + 0x47) = bVar2;
  *(undefined1 *)((int)param_1 + 0x11d) = *(undefined1 *)((int)param_1 + 0x165);
  param_1[0x46] = param_1[0x58];
  *(undefined1 *)((int)param_1 + 0x11f) = *(undefined1 *)((int)param_1 + 0x167);
  bVar3 = *(byte *)(param_1 + 0x4a);
  bVar4 = *(byte *)(param_1 + 0x5a) & 1;
  *(byte *)(param_1 + 0x4a) = bVar3 & 0xfe | bVar4;
  bVar2 = (*(byte *)((int)param_1 + 0x169) & 1) << 1;
  *(byte *)(param_1 + 0x4a) = bVar3 & 0xfc | bVar4 | bVar2;
  bVar1 = (*(byte *)((int)param_1 + 0x16a) & 1) << 2;
  *(byte *)(param_1 + 0x4a) = bVar3 & 0xf8 | bVar4 | bVar2 | bVar1;
  *(byte *)(param_1 + 0x4a) =
       bVar3 & 0xf0 | bVar4 | bVar2 | bVar1 | (*(byte *)((int)param_1 + 0x16b) & 1) << 3;
  param_1[0x42] = param_1[0x5b];
  param_1[0x43] = param_1[0x5c];
  *(short *)(param_1 + 0x48) = (short)param_1[0x5d];
  *(short *)((int)param_1 + 0x122) = (short)param_1[0x5e];
  param_1[0x44] = param_1[0x5f];
  param_1[0x45] = param_1[0x60];
  param_1[0x49] = param_1[0x61];
  param_1[0x41] = param_1[0x62];
  *(char *)((int)param_1 + 299) = (char)param_1[100];
  *(short *)((int)param_1 + 0x102) = (short)param_1[0x65];
  if (pcVar6 != (char *)0x0) {
    uVar9 = (uint)*pcVar6;
    uVar8 = 8;
    do {
      pcVar6 = pcVar6 + 1;
      if (*pcVar6 == 0) break;
      uVar10 = uVar8 & 0xff;
      uVar8 = uVar8 + 8;
      uVar9 = uVar9 | (int)*pcVar6 << uVar10;
    } while (uVar8 != 0x20);
    if (uVar9 == _LAB_2c4df640) {
      iVar7 = param_1[0x5d] *
              (int)(short)(ushort)*(byte *)(param_1 + 0x59) *
              (int)(short)(ushort)*(byte *)((int)param_1 + 0x165);
      param_1[0x42] = iVar7;
      param_1[0x43] = iVar7;
    }
  }
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
  return 1;
}

