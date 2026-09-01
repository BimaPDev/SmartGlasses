/* FUN_100cafdc @ 0x100cafdc */

undefined4 FUN_100cafdc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 uVar6;
  
  iVar2 = FUN_100ca1d0(param_1 + 0x90);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x9c);
    uVar3 = 0;
    if (*(char *)(DAT_100cb0c4 + 0x47) < '\0') {
      if ((bVar1 & 0x80) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
    }
    iVar2 = FUN_100ca288(param_1 + 0x90,uVar3);
    if (iVar2 == 0) {
      return 0xfffffff4;
    }
    iVar4 = FUN_100c5d4c(0x428,0x11);
    if (iVar4 != 0) {
      puVar5 = (undefined2 *)FUN_100c1fe4(iVar4 + 8,0x11);
      FUN_1011ea48(puVar5,0,0x11);
      *puVar5 = **(undefined2 **)(iVar2 + 0x90);
      *(undefined2 *)((int)puVar5 + 0xf) = *(undefined2 *)(iVar2 + 0x94);
      *(undefined1 *)((int)puVar5 + 3) = 0x1f;
      *(undefined1 *)((int)puVar5 + 7) = 0x1f;
      *(undefined1 *)(puVar5 + 5) = 7;
      if ((bVar1 & 0x80) == 0) {
        uVar6 = 0xff;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(puVar5 + 7) = uVar6;
      *(undefined1 *)(puVar5 + 1) = 0x40;
      *(undefined1 *)(puVar5 + 3) = 0x40;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 0;
      *(undefined1 *)((int)puVar5 + 0xb) = 0;
      *(undefined1 *)(puVar5 + 6) = 0x60;
      *(undefined1 *)((int)puVar5 + 0xd) = 0;
      iVar4 = FUN_100c5e48(0x428,iVar4,0);
      if (-1 < iVar4) {
        FUN_100cad6c(iVar2,6);
        goto LAB_100caff8;
      }
    }
    FUN_10133792(iVar2);
    uVar3 = 0xfffffffb;
  }
  else {
    if (1 < *(byte *)(iVar2 + 0xd) - 6) {
      FUN_100ca13c();
      return 0xfffffff0;
    }
LAB_100caff8:
    FUN_100ca13c(iVar2);
    uVar3 = 0;
  }
  return uVar3;
}

