/* FUN_10048a54 @ 0x10048a54 */

void FUN_10048a54(void)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_64;
  undefined4 *local_60;
  uint3 local_5c;
  undefined1 uStack_59;
  uint local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 auStack_4c [24];
  int local_1c;
  
  local_1c = *DAT_10048b84;
  local_50 = 0;
  FUN_1011ea48(auStack_4c,0,0x2e,0);
  local_64 = 0;
  local_60 = (undefined4 *)0x0;
  _local_5c = 0;
  uVar3 = FUN_1011ea10(DAT_10048b88);
  uVar5 = (uint)uVar3;
  if (0x31 < uVar5) {
    uVar5 = 0x26;
  }
  uVar4 = uVar5 & 0xff;
  local_50 = (uint)CONCAT21(local_50._2_2_,(char)uVar5) << 8;
  FUN_1013d03e((int)&local_50 + 2,DAT_10048b88,uVar5,0x30);
  iVar2 = DAT_10048b8c;
  *(undefined1 *)((int)auStack_4c + ((uVar4 + 2 & 0xff) - 4)) = 4;
  uVar1 = *(undefined2 *)(DAT_10048b8c + 4);
  *(char *)((int)auStack_4c + ((uVar4 + 3 & 0xff) - 4)) = (char)((ushort)uVar1 >> 8);
  *(char *)((int)auStack_4c + ((uVar4 + 4 & 0xff) - 4)) = (char)uVar1;
  uVar1 = *(undefined2 *)(DAT_10048b8c + 6);
  *(char *)((int)auStack_4c + ((uVar4 + 5 & 0xff) - 4)) = (char)((ushort)uVar1 >> 8);
  *(char *)((int)auStack_4c + ((uVar4 + 6 & 0xff) - 4)) = (char)uVar1;
  (**(code **)(PTR_DAT_10048b90 + 0x20))(&local_58);
  *(undefined1 *)((int)auStack_4c + ((uVar4 + 7 & 0xff) - 4)) = 6;
  uVar4 = uVar4 + 8 & 0xff;
  *(uint *)((int)auStack_4c + (uVar4 - 4)) = local_58;
  *(undefined2 *)((int)auStack_4c + uVar4) = local_54;
  FUN_100a5b78(((int)PTR_DAT_10048b94 - (int)PTR_DAT_10048b98) * 0x20 & 0xff00U | 0x31c0037,
               DAT_10048ba0,PTR_s_ble_send_ring_info_sn__s_mac__02_10048b9c,iVar2 + 8,
               local_58 & 0xff,local_58 >> 8 & 0xff,local_58 >> 0x10 & 0xff,local_58 >> 0x18,
               (undefined1)local_54,local_54._1_1_);
  local_64 = CONCAT22(local_64._2_2_,0x2fc);
  local_60 = &local_50;
  local_5c = (uint3)(ushort)(short)(char)((char)uVar5 + '\x0e');
  FUN_100506fc(&local_64);
  if (*DAT_10048b84 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

