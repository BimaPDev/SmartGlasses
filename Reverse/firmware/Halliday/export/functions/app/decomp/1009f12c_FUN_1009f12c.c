/* FUN_1009f12c @ 0x1009f12c */

undefined4 FUN_1009f12c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_1009f1c4;
  FUN_1011dbf4(DAT_1009f1c8,0xffffffff);
  iVar5 = 0;
  puVar4 = puVar1;
  do {
    if ((*(byte *)((int)puVar1 + iVar5 * 0xc + 10) & 3) != 0) {
      if (param_1 != 0) {
        uVar6 = *puVar4;
        uVar3 = FUN_1011ea10(param_1);
        iVar2 = FUN_1011ea30(uVar6,param_1,uVar3);
        if (iVar2 != 0) goto LAB_1009f192;
      }
      iVar2 = FUN_1007378c(*puVar4,puVar4[1],*(undefined2 *)(puVar1 + iVar5 * 3 + 2));
      if (iVar2 == 0) {
        FUN_1012d1cc(puVar4);
        *(byte *)((int)puVar1 + iVar5 * 0xc + 10) = *(byte *)((int)puVar1 + iVar5 * 0xc + 10) & 0xfb
        ;
      }
    }
LAB_1009f192:
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 3;
    if (iVar5 == 0xf) {
      FUN_1009ef94();
      FUN_100a5b78((DAT_1009f1d0 - DAT_1009f1cc) * 0x20 & 0xff00U | 0xca0031,DAT_1009f1d8,
                   DAT_1009f1d4);
      return 0;
    }
  } while( true );
}

