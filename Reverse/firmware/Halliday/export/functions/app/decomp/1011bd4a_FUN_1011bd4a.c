/* FUN_1011bd4a @ 0x1011bd4a */

void FUN_1011bd4a(int param_1,int param_2,int param_3,uint param_4,ushort param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined2 local_34;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  local_2c = *(int *)(iVar5 + 0x32c);
  if (local_2c != 0) {
    uVar2 = *(ushort *)(iVar5 + 0x322);
    uVar3 = *(ushort *)(iVar5 + 0x324);
    for (uVar7 = 0; (uVar7 & 0xffff) < param_4; uVar7 = uVar7 + 1) {
      for (uVar6 = (uint)param_5; uVar6 != 0; uVar6 = uVar6 - 2 & 0xffff) {
        iVar5 = (uVar6 - 1) * 0x168 + uVar7;
        uVar4 = *(ushort *)(param_6 + iVar5 * 2);
        uVar1 = *(ushort *)(param_6 + iVar5 * 2 + -0x2d0);
        *(byte *)(local_2c +
                 ((((uint)uVar2 + (0x168 - param_3)) - uVar6 & 0xffff) +
                  ((uVar7 & 0xffff) + (uint)uVar3 + param_2 & 0xffff) * 0x280 >> 1)) =
             (byte)((int)((((uVar1 & 0x7ff) >> 5) + (uVar1 & 0x1f) + (uint)(uVar1 >> 0xb)) * 0x2b)
                   >> 9) |
             (byte)(((int)(((uVar4 & 0x1f) + (uint)(uVar4 >> 0xb) + ((uVar4 & 0x7ff) >> 5)) * 0x2b)
                    >> 9) << 4);
      }
    }
    local_34 = 0x1e0;
    local_3c = 0x140;
    FUN_1011bfc0(auStack_44);
  }
  return;
}

