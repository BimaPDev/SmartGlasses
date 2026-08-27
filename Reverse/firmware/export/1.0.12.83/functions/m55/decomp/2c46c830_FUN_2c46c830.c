/* FUN_2c46c830 @ 0x2c46c830 */

undefined1 * FUN_2c46c830(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined1 *)FUN_2c6685b4(0x28,1,param_3,param_4,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 6;
    *(undefined4 *)(puVar2 + 0xc) = 1;
    uVar1 = DAT_2c46c888;
    *(undefined4 *)(puVar2 + 4) = DAT_2c46c884;
    *(undefined4 *)(puVar2 + 8) = uVar1;
    iVar3 = FUN_2c669578(param_2 + 1);
    *(int *)(puVar2 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_2c46bfcc(puVar2);
      puVar4 = (undefined4 *)FUN_2c6685e0();
      *puVar4 = 0xc;
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_2c674668(iVar3,param_1,param_2);
      *(int *)(puVar2 + 0x1c) = param_2;
      *(undefined1 *)(iVar3 + param_2) = 0;
    }
  }
  return puVar2;
}

