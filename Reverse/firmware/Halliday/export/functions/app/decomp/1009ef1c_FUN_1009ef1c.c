/* FUN_1009ef1c @ 0x1009ef1c */

undefined4 * FUN_1009ef1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_1009ef80;
  iVar5 = 0;
  do {
    puVar4 = (undefined4 *)(iVar1 + iVar5 * 0xc);
    if ((*(byte *)((int)puVar4 + 10) & 3) != 0) {
      uVar6 = *(undefined4 *)(iVar5 * 0xc + iVar1);
      uVar2 = FUN_1011ea10(param_1);
      iVar3 = FUN_1011ea30(uVar6,param_1,uVar2);
      if (iVar3 == 0) {
        FUN_100a5b78((DAT_1009ef88 - DAT_1009ef84) * 0x20 & 0xff00U | 0x2d0032,DAT_1009ef90,
                     DAT_1009ef8c,iVar5,*puVar4,param_2,param_3);
        return puVar4;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xf);
  return (undefined4 *)0x0;
}

