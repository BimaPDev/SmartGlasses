/* FUN_140605e4 @ 0x140605e4 */

int FUN_140605e4(int param_1,int param_2,int param_3,int param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  *param_5 = 0;
  iVar7 = DAT_14060750;
  if (param_4 != 0) goto LAB_140605f4;
  if (param_3 == 2) {
LAB_14060638:
    puVar2 = (undefined1 *)FUN_1406db30(0x2041,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      uVar1 = FUN_14060420(*(undefined1 *)(iVar7 + 0xac));
      *puVar2 = uVar1;
      puVar2[1] = 0;
      if ((*(char *)(param_1 + 0xe) == '\x03') || (*(char *)(param_1 + 0xe) == '\x05')) {
        puVar2[1] = 1;
      }
      if ((*(char *)(iVar7 + 0xac) == '\x01') &&
         ((int)((uint)*(byte *)(param_2 + 0x11) << 0x1b) < 0)) {
        puVar2[1] = puVar2[1] | 2;
      }
      puVar2[2] = 0;
      uVar4 = (uint)*(byte *)(param_2 + 0x11);
      uVar6 = uVar4 & 1;
      if ((*(byte *)(param_2 + 0x11) & 1) != 0) {
        puVar2[2] = 1;
        *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_2 + 0x14);
        *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(param_2 + 0x16);
        puVar2[4] = (byte)(((uint)*(byte *)(param_2 + 0x11) << 0x1d) >> 0x1f);
        uVar4 = (uint)*(byte *)(param_2 + 0x11);
      }
      if ((int)(uVar4 << 0x1e) < 0) {
        puVar2[2] = puVar2[2] | 4;
        *(undefined2 *)(puVar2 + uVar6 * 6 + 6) = *(undefined2 *)(param_2 + 0x18);
        *(undefined2 *)(puVar2 + uVar6 * 6 + 8) = *(undefined2 *)(param_2 + 0x1a);
        puVar2[uVar6 * 6 + 4] = (byte)(((uint)*(byte *)(param_2 + 0x11) << 0x1c) >> 0x1f);
      }
      FUN_1406da30(puVar2,3,DAT_1406074c);
      return 0;
    }
  }
  else {
    if (param_3 != 3) {
      if (param_3 != 0) {
        *param_5 = 1;
        return 0;
      }
      if (((*(byte *)(DAT_14060750 + 0x5e) & 1) != 0 || *(char *)(DAT_14060750 + 0xac) != '\0') &&
         (*(char *)(DAT_14060750 + 0xae) == -1)) {
        param_4 = FUN_140602a8(2,DAT_1406074c);
        if (param_4 == 0) {
          return 0;
        }
        goto LAB_140605f4;
      }
      goto LAB_14060638;
    }
    puVar2 = (undefined1 *)FUN_1406db30(0x2042,6);
    iVar7 = DAT_14060750;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = *(undefined1 *)(param_2 + 0x12);
      if ((*(char *)(param_1 + 0xe) == '\x01') || (*(char *)(param_1 + 0xe) == '\0')) {
        uVar5 = *(ushort *)(param_2 + 0x1c);
        if (uVar5 == 0) {
          *(undefined2 *)(puVar2 + 2) = 0;
        }
        else {
          if ((*(byte *)(param_2 + 0x11) & 1) == 0) {
            uVar3 = 0xc00;
          }
          else {
            uVar3 = 0x400;
          }
          if (uVar5 < uVar3) {
            uVar5 = uVar3;
          }
          *(ushort *)(puVar2 + 2) = uVar5;
        }
        *(undefined2 *)(puVar2 + 4) = 0;
      }
      else {
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_2 + 0x1c);
        *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_2 + 0x1e);
      }
      FUN_1406da30(puVar2,4,DAT_1406074c);
      return 0;
    }
  }
  param_4 = 0x4b;
LAB_140605f4:
  *(undefined1 *)(iVar7 + 0xad) = 0xff;
  *param_5 = 1;
  return param_4;
}

