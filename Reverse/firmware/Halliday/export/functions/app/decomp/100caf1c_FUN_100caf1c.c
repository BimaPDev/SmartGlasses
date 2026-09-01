/* FUN_100caf1c @ 0x100caf1c */

int FUN_100caf1c(undefined4 *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  
  iVar2 = FUN_100ca22c();
  if (iVar2 == 0) {
    iVar2 = FUN_101335ae(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_100c5d4c(0x405,0xd);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)FUN_100c1fe4(iVar3 + 8,0xd);
      FUN_1011ea48(puVar4,0,0xd);
      *puVar4 = *param_1;
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_1 + 1);
      *(undefined1 *)((int)puVar4 + 6) = 0x18;
      *(undefined1 *)((int)puVar4 + 7) = 0xcc;
      *(undefined1 *)(puVar4 + 2) = 2;
      *(undefined1 *)(puVar4 + 3) = *param_2;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *(undefined1 *)((int)puVar4 + 0xb) = 0;
      iVar3 = FUN_100c5e48(0x405,iVar3,0);
      if (-1 < iVar3) {
        FUN_100cad6c(iVar2,6);
        bVar6 = *(byte *)(iVar2 + 0xc0);
        bVar1 = *(byte *)(DAT_100cafd8 + 3);
        *(undefined1 *)(iVar2 + 3) = 0;
        uVar5 = (uint)bVar1 << 0x1c;
        bVar7 = -1 < (int)uVar5;
        if (bVar7) {
          uVar5 = (uint)(byte)param_2[1];
        }
        *(byte *)(iVar2 + 0xc0) = bVar6 | 2;
        if (bVar7) {
          bVar6 = bVar6 & 0xfb | 2 | (byte)((uVar5 & 1) << 2);
        }
        else {
          bVar6 = bVar6 | 6;
        }
        *(byte *)(iVar2 + 0xc0) = bVar6;
        return iVar2;
      }
    }
  }
  else if (*(byte *)(iVar2 + 0xd) - 6 < 2) {
    return iVar2;
  }
  FUN_100ca13c(iVar2);
  return 0;
}

