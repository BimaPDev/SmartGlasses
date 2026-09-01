/* FUN_100c6a30 @ 0x100c6a30 */

int FUN_100c6a30(int param_1,uint param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = DAT_100c6afc;
  if ((param_2 & 1) != 0) {
    if (((param_3 != 0) && ((int)(param_2 << 0x1a) < 0)) &&
       (-1 < (int)((uint)*(byte *)(DAT_100c6afc + 0xb0) << 0x19))) {
      return -0x86;
    }
    if ((*(char *)(DAT_100c6afc + param_1 * 7) == '\x01') &&
       (iVar1 = FUN_100c68b0(param_1 * 7 + 1 + DAT_100c6afc), iVar1 != 0)) {
      return iVar1;
    }
    bVar4 = *(byte *)(iVar2 + param_1 * 7);
    if ((param_3 != 0) && ((int)(param_2 << 0x1a) < 0)) {
      bVar4 = bVar4 | 2;
    }
    *param_4 = bVar4;
    return 0;
  }
  if ((param_2 & 4) != 0) {
    iVar1 = 0;
    if (*(char *)(DAT_100c6afc + param_1 * 7) == '\x01') {
      iVar1 = FUN_100c68b0(param_1 * 7 + 1 + DAT_100c6afc);
    }
    *param_4 = *(byte *)(iVar2 + param_1 * 7);
    return iVar1;
  }
  iVar2 = FUN_10132e28(DAT_100c6b00);
  if (iVar2 << 0x1a < 0) {
    uVar3 = FUN_10132e28(DAT_100c6b00);
    uVar5 = (uVar3 & 0xff) >> 7;
    if ((int)(uVar3 << 0x18) < 0) {
      thunk_FUN_100c60f8(0);
      goto LAB_100c6acc;
    }
  }
  uVar5 = 0;
LAB_100c6acc:
  iVar2 = FUN_10133040();
  *param_4 = 1;
  if (uVar5 != 0) {
    thunk_FUN_100c60f8();
  }
  return iVar2;
}

