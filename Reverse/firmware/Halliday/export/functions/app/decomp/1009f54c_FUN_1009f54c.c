/* FUN_1009f54c @ 0x1009f54c */

void FUN_1009f54c(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x192);
  if (param_2 == 0) {
    if (uVar2 < 2) {
      sVar4 = *(short *)(param_1 + 400);
    }
    else {
      sVar4 = uVar2 - 1;
    }
  }
  else if (uVar2 < *(ushort *)(param_1 + 400)) {
    sVar4 = uVar2 + 1;
  }
  else {
    sVar4 = 1;
  }
  uVar5 = 0;
  iVar3 = 0;
  *(short *)(param_1 + 0x192) = sVar4;
  uVar2 = *(ushort *)(param_1 + 0x192);
  do {
    puVar6 = *(undefined4 **)(param_1 + iVar3 * 4);
    uVar1 = *(ushort *)(puVar6 + 1);
    uVar5 = uVar5 + uVar1;
    if (uVar2 <= uVar5) {
      *(char *)(param_1 + 0x195) = (char)iVar3;
      *(ushort *)(param_1 + 0x196) = (uVar1 + uVar2) - (short)uVar5;
      FUN_100a5b78((DAT_1009f5c8 - DAT_1009f5c4) * 0x20 & 0xff00U | 0xa70033,DAT_1009f5d0,
                   DAT_1009f5cc,(uint)uVar2,iVar3,*puVar6,param_3);
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 <= (int)(uint)*(byte *)(param_1 + 0x194));
  return;
}

