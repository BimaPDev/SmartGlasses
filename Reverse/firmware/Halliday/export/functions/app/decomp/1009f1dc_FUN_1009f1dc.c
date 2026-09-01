/* FUN_1009f1dc @ 0x1009f1dc */

undefined4 FUN_1009f1dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_1009f254;
  FUN_1011dbf4(DAT_1009f258,0xffffffff,param_3,param_4,param_4);
  iVar4 = 0;
  do {
    if ((*(byte *)(iVar1 + iVar4 * 0xc + 10) & 3) != 0) {
      if (param_1 != 0) {
        uVar5 = *(undefined4 *)(iVar4 * 0xc + iVar1);
        uVar2 = FUN_1011ea10(param_1);
        iVar3 = FUN_1011ea30(uVar5,param_1,uVar2);
        if (iVar3 != 0) goto LAB_1009f20e;
      }
      iVar3 = iVar4 * 0xc + iVar1;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 4;
    }
LAB_1009f20e:
    iVar4 = iVar4 + 1;
    if (iVar4 == 0xf) {
      FUN_1009ef94();
      FUN_100a5b78((DAT_1009f260 - DAT_1009f25c) * 0x20 & 0xff00U | 0xdf0031,DAT_1009f268,
                   DAT_1009f264);
      return 0;
    }
  } while( true );
}

