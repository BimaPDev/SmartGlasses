/* FUN_1009b8f8 @ 0x1009b8f8 */

undefined4 FUN_1009b8f8(int param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_34[0] = (uint)*(ushort *)(param_4 + 8) << 0x15 | (*(ushort *)(param_4 + 6) & 0x7ff) << 10 |
                local_34[0] & 0x3ff;
  local_2c = param_5;
  iVar1 = FUN_1012c654();
  if (iVar1 == 0) {
    uVar2 = 0;
    if ((*(byte *)(param_2 + 0x28) & 0x38) == 0) {
      switch(*(byte *)(param_4 + 0xe) & 0xf) {
      case 1:
        bVar3 = 0xb;
        break;
      case 2:
        bVar3 = 0xc;
        break;
      default:
        FUN_10094174(2,DAT_1009b9d4,0xb0,DAT_1009b9d0,DAT_1009b9cc);
        return 1;
      case 4:
        bVar3 = 0xd;
        break;
      case 8:
        bVar3 = 0xe;
      }
      local_34[0] = CONCAT31(local_34[0]._1_3_,(byte)local_34[0] & 0xe0 | bVar3);
      puVar4 = *(undefined4 **)(param_1 + 8);
      local_28 = *puVar4;
      local_24 = puVar4[1];
      local_20 = puVar4[2];
      local_1c = puVar4[3];
      FUN_1012a87c(&local_28,-*param_3,-param_3[1]);
      uVar2 = FUN_1009b34c(param_1,local_34,&local_28,*(undefined2 *)(param_2 + 0xc),
                           *(undefined1 *)(param_2 + 0x24),1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

