/* FUN_100ba874 @ 0x100ba874 */

undefined4 FUN_100ba874(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = (uint)*(byte *)(DAT_100ba884 + 1) << 0x1e;
  if (iVar5 < 0) {
    uVar2 = FUN_10136444();
    uVar3 = FUN_10132674();
    FUN_10136462(uVar2);
    return uVar3;
  }
  iVar1 = FUN_100728f4();
  if (iVar1 != 0) {
    puVar4 = (undefined1 *)*DAT_10072968;
    *puVar4 = 0x31;
    puVar4[1] = 0xfc;
    puVar4[2] = 0;
    uVar2 = FUN_1007172c(1,puVar4,3,iVar5);
    return uVar2;
  }
  return 0xfffffffb;
}

