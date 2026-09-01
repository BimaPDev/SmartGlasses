/* FUN_100a5b78 @ 0x100a5b78 */

void FUN_100a5b78(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  byte local_65;
  undefined4 *local_64;
  undefined1 local_60;
  byte local_5f;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [8];
  undefined4 uStack_4;
  
  local_64 = &uStack_4;
  uVar6 = (param_1 & 0xffff) >> 8;
  uVar5 = (param_1 & 0x7f) >> 4;
  uStack_4 = param_4;
  iVar2 = FUN_100a58d4(uVar6,uVar5);
  if (iVar2 == 0) {
    uVar3 = *DAT_100a5c6c & 2;
    if ((*DAT_100a5c6c & 2) == 0) {
      if (uVar6 < (uint)(DAT_100a5c74 - DAT_100a5c70) >> 3) {
        uVar3 = *(uint *)(DAT_100a5c70 + uVar6 * 8);
      }
      FUN_10119dc2(DAT_100a5c7c,uVar3,*(undefined1 *)(DAT_100a5c78 + uVar5));
      FUN_1005d13c(param_3,local_64);
      FUN_10119dc2(DAT_100a5c80);
    }
    else {
      local_65 = (byte)((param_1 << 0x1c) >> 0x1c);
      if (((param_1 & 0xf) < 8) &&
         (iVar2 = FUN_100a5a3c(local_64,param_3,&local_65), puVar1 = local_64, iVar2 != 0)) {
        uVar6 = (uint)local_65;
        FUN_1011ea48(&local_60,0,0x30,param_1 >> 0x10);
        local_60 = (undefined1)(param_1 >> 8);
        local_5e = (undefined2)(param_1 >> 0x10);
        local_5f = (byte)((param_1 << 0x19) >> 0x1d) | 0x30;
        local_58 = param_2;
        local_5c = FUN_1012daa4();
        puVar4 = auStack_4c;
        for (uVar5 = 0; (uVar5 & 0xff) < uVar6; uVar5 = uVar5 + 1) {
          *puVar4 = puVar1[uVar5];
          puVar4 = puVar4 + 1;
        }
        local_54 = uVar6;
        uStack_50 = param_3;
        FUN_100a5b08(&local_60,(uVar6 + 5) * 4);
        return;
      }
      FUN_1012dacc(uVar6,uVar5,param_2,param_1 >> 0x10,param_3,local_64);
    }
  }
  return;
}

