/* FUN_1009f26c @ 0x1009f26c */

undefined4 FUN_1009f26c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = DAT_1009f2e8;
  FUN_1011dbf4(DAT_1009f2ec,0xffffffff,param_3,param_4,param_4);
  iVar4 = 0;
  puVar5 = puVar2;
  do {
    bVar1 = *(byte *)((int)puVar2 + iVar4 * 0xc + 10);
    if (((bVar1 & 3) != 0) && ((int)((uint)bVar1 << 0x1d) < 0)) {
      iVar3 = FUN_1007378c(*puVar5,puVar5[1],*(undefined2 *)(puVar2 + iVar4 * 3 + 2));
      if (iVar3 == 0) {
        FUN_1012d1cc(puVar2 + iVar4 * 3);
      }
      *(byte *)((int)puVar2 + iVar4 * 0xc + 10) = *(byte *)((int)puVar2 + iVar4 * 0xc + 10) & 0xfb;
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 3;
  } while (iVar4 != 0xf);
  FUN_1009ef94();
  FUN_100a5b78((DAT_1009f2f4 - DAT_1009f2f0) * 0x20 & 0xff00U | 0xf80031,DAT_1009f2fc,DAT_1009f2f8);
  return 0;
}

