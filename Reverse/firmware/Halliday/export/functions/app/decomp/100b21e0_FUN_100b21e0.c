/* FUN_100b21e0 @ 0x100b21e0 */

undefined4 FUN_100b21e0(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  bVar1 = *(byte *)(param_1 + 99);
  local_1c = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    local_20 = *(undefined4 *)(param_1 + 0x44);
    local_18 = local_1c;
    local_14 = local_1c;
    if (param_2 == 0) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x58) + 8))
                        (*(undefined4 *)(param_1 + 0xc),3,&local_20);
      uVar2 = 0;
      if (iVar3 == 0) goto LAB_100b2244;
      FUN_100a5b78(((int)PTR_DAT_100b22b8 - (int)PTR_DAT_100b22b4) * 0x20 & 0xff00U | 0x1f20032,
                   DAT_100b22c4,iVar3,*(undefined4 *)(param_1 + 0x10));
      *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 1;
    }
    else {
      *(byte *)(param_1 + 99) = bVar1 | 1;
      iVar3 = (**(code **)(*(int *)(param_1 + 0x58) + 8))
                        (*(undefined4 *)(param_1 + 0xc),6,&local_20);
      if ((iVar3 == 0) && ((local_1c & 0xffff) != 0)) {
        uVar2 = FUN_100a5b78(((int)PTR_DAT_100b22b8 - (int)PTR_DAT_100b22b4) * 0x20 & 0xff00U |
                             0x1ee0032,PTR_s_force_end____d__chunk_bytes____d_100b22bc,1);
LAB_100b2244:
        puVar4 = *(ushort **)(param_1 + 0x14);
        iVar3 = local_1c << 0x1f;
        bVar7 = iVar3 < 0;
        if (bVar7) {
          uVar2 = 0;
          iVar3 = (int)puVar4 + (local_1c & 0xffff);
        }
        if (bVar7) {
          *(undefined1 *)(iVar3 + 2) = uVar2;
        }
        uVar5 = 0;
        if (local_1c._2_2_ != 0) {
          uVar5 = (ushort)DAT_100b22c0;
        }
        *puVar4 = (ushort)local_1c | uVar5;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x4c) = local_18;
        *(uint *)(param_1 + 0x50) = local_14;
        return 0;
      }
      puVar6 = *(undefined1 **)(param_1 + 0x14);
      *puVar6 = 0;
      puVar6[1] = 0;
    }
  }
  return 0xffffffc3;
}

