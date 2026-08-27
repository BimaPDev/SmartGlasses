/* FUN_14065428 @ 0x14065428 */

undefined4
FUN_14065428(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined2 param_5,
            int param_6)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_1406d034(param_1,param_3,param_3,param_4,param_4);
  if ((iVar3 == 0) || (*(byte *)(iVar3 + 0x13) != param_2)) {
    return 0x40;
  }
  if ((*(char *)(iVar3 + 0x11) != '\x03') && (*(char *)(iVar3 + 0x11) != '\n')) {
    return 0x43;
  }
  bVar4 = *(byte *)(iVar3 + 0x34);
  if ((int)((uint)bVar4 << 0x1e) < 0) {
    return 0x43;
  }
  if (param_4 == 0) {
    if (param_6 == 0) {
      return 0x40;
    }
    if (*(ushort *)(param_6 + 6) < 7) {
      return 0x4e;
    }
    iVar6 = *(int *)(iVar3 + 0x24);
    if (1 < *(byte *)(iVar3 + 0x33)) {
      FUN_140736a8(param_6,2);
      iVar5 = (uint)*(ushort *)(param_6 + 6) + param_6;
      *(char *)(iVar5 + 0x30) = (char)param_5;
      *(char *)(iVar5 + 0x31) = (char)((ushort)param_5 >> 8);
      FUN_140736a8(param_6,2);
      iVar5 = (uint)*(ushort *)(param_6 + 6) + param_6;
      uVar2 = *(undefined2 *)(iVar3 + (uint)*(byte *)(iVar3 + 0x32) * 4 + 0x36);
      *(char *)(iVar5 + 0x30) = (char)uVar2;
      *(char *)(iVar5 + 0x31) = (char)((ushort)uVar2 >> 8);
    }
    uVar1 = *(ushort *)(param_6 + 4);
    if (*(ushort *)(iVar3 + 0x2c) <= *(ushort *)(param_6 + 4)) {
      uVar1 = *(ushort *)(iVar3 + 0x2c);
    }
    if ((iVar6 == 0) || (*(ushort *)(iVar6 + 8) < uVar1)) {
      FUN_140739f0(iVar3 + 0x20,param_6);
      FUN_14073790(param_6,*(short *)(param_6 + 4) - uVar1);
      FUN_1407358c(param_6);
    }
    else {
      FUN_14073968(param_6,(uint)*(ushort *)(iVar6 + 6) + (uint)*(ushort *)(iVar6 + 4) + 0x30 +
                           iVar6,uVar1);
      FUN_1407373c(iVar6,uVar1);
    }
    *(ushort *)(iVar3 + 0x2e) = *(short *)(iVar3 + 0x2e) + uVar1;
    *(ushort *)(iVar3 + 0x2c) = *(short *)(iVar3 + 0x2c) - uVar1;
    *(char *)(iVar3 + 0x32) = *(char *)(iVar3 + 0x32) + '\x01';
    bVar4 = *(byte *)(iVar3 + 0x34);
  }
  *(byte *)(iVar3 + 0x34) = bVar4 | 2;
  FUN_1406d210(param_1,iVar3,6,param_4);
  return 0;
}

