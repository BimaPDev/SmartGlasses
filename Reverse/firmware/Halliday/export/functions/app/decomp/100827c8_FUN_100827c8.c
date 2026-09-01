/* FUN_100827c8 @ 0x100827c8 */

longlong FUN_100827c8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_18;
  undefined4 local_14;
  char local_10;
  undefined1 auStack_f [3];
  short local_c;
  undefined2 uStack_a;
  
  iVar4 = *DAT_1008283c;
  if (iVar4 == 0) {
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + 0x1c);
    iVar2 = *(int *)(iVar4 + 0x18);
    uVar5 = *(uint *)(iVar4 + 0x14);
    uVar6 = uVar5 & 0x7f;
    _local_c = CONCAT22((short)((uint)param_4 >> 0x10),((short)uVar6 + (short)(uVar6 << 2)) * 2);
    local_14._0_2_ = CONCAT11((byte)((uint)(iVar2 << 0x12) >> 0x1a),(char)iVar2) & 0xff3f;
    local_14._0_3_ = (uint3)(ushort)local_14;
    local_14 = CONCAT13((char)uVar3,(uint3)local_14) & 0x1fffffff;
    local_14._0_3_ = CONCAT12((byte)((uint)(iVar2 << 0xb) >> 0x1b),(ushort)local_14);
    _local_10 = CONCAT31(SUB43((uint)param_3 >> 8,0),((byte)((uint)uVar3 >> 8) & 0xf) - 1);
    _local_10 = CONCAT22(((ushort)((uint)uVar3 >> 0x10) & 0x7f) + 100,_local_10);
    local_18 = param_1;
    FUN_101221f0(&local_14,&local_18);
    lVar1 = (ulonglong)local_18 * 1000 + (ulonglong)(uVar5 & 0xff);
  }
  return lVar1;
}

