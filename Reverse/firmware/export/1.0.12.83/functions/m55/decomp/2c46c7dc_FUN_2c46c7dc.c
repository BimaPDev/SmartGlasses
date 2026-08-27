/* FUN_2c46c7dc @ 0x2c46c7dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_2c46c7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined1 *)FUN_2c6685b4(0x28,1,param_3,param_4,param_4);
  uVar4 = _LAB_2c46c828;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 0xc) = 1;
    uVar1 = _LAB_2c46c82c;
    *puVar2 = 6;
    *(undefined4 *)(puVar2 + 4) = uVar4;
    *(undefined4 *)(puVar2 + 8) = uVar1;
    iVar3 = FUN_2c66b660(param_1);
    *(int *)(puVar2 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_2c46bfcc(puVar2);
      puVar5 = (undefined4 *)FUN_2c6685e0();
      *puVar5 = 0xc;
      puVar2 = (undefined1 *)0x0;
    }
    else {
      uVar4 = FUN_2c66c4ec(param_1);
      *(undefined4 *)(puVar2 + 0x1c) = uVar4;
    }
  }
  return puVar2;
}

