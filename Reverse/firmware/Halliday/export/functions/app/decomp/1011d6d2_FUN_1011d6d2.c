/* FUN_1011d6d2 @ 0x1011d6d2 */

undefined4 FUN_1011d6d2(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x44);
      if (iVar4 == 0x10) {
        iVar4 = param_2 + 0x10;
      }
      else {
        thunk_FUN_1011ea48(iVar4 + 0x30 + param_2,0,0x10 - iVar4);
        iVar4 = param_2 + 0x20;
        *(undefined1 *)(*(int *)(param_2 + 0x44) + param_2 + 0x30) = 0x80;
      }
      pbVar3 = (byte *)(iVar4 + -1);
      pbVar5 = (byte *)(param_2 + -1);
      do {
        pbVar1 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
        *pbVar1 = *pbVar1 ^ pbVar5[0x31] ^ *pbVar3;
        pbVar5 = pbVar1;
      } while ((byte *)(param_2 + 0xf) != pbVar1);
      FUN_10063738(param_1,param_2,*(undefined4 *)(param_2 + 0x48));
      FUN_1011d568(param_2);
      uVar2 = 1;
    }
  }
  return uVar2;
}

